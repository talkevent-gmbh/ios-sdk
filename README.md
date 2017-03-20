![alt tag](http://www.talkevent.de/wp-content/uploads/2015/07/talkevent_altern_logo_noclaim.png)

# TalkEventSDK

Mit Hilfe des TalKEventSDK können Sie die Video-Chat-Funktion von talkevent in Ihre iOS-App einbauen. Die Benutzer Ihrer App können dann direkt über ihr iOS-Gerät per Videochat mit Ihren Beratern in Kontakt treten. 
Dazu müssen Sie registrierter Partner von talkevent sein. Weitere Informationen finden Sie unter https://www.talkevent.de.

## Installation

Das Framework wird über CocoaPods (https://cocoapods.org/) eingebunden. 
Falls Sie in Ihrem iOS-Projekt noch kein CocoaPods verwenden, finden Sie hier weitere Informationen: https://guides.cocoapods.org/using/using-cocoapods.html

Anschließend fügen Sie das Framework mit folgender Zeile zu Ihrem Podfile hinzu:

<code>
pod 'TalkEventSDK'
</code>

Und nach dem letzten 'end' in der Podfile:

<pre><code>
post_install do |installer|
  installer.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
      config.build_settings['ENABLE_BITCODE'] = 'NO'
    end
  end
end
</code></pre>

Anschließend installieren Sie die Pods via `$ pod install`.

## Abhängigkeiten

Das TalkEventSDK benötigt mindestens iOS 8.3.

## Anbindung 

Für den Videochat benötigt das Framework und damit auch Ihre App Zugriff auf die Kamera und das Mikrophon des Gerätes. Seit iOS 10 müssen dazu folgende Hinweise in der plist-Datei Ihrer Anwendung hinterlegt sein. Sollte Ihre plist-Datei diese noch nicht enthalten, fügen Sie bitte diese Einträge mit entsprechenden Erklärungstexten hinzu:

<ul>
<li>Privacy - Microphone Usage Description : 'INSERT DESCRIPTION HERE'</li>
<li>Privacy - Camera Usage Description : 'INSERT DESCRIPTION HERE'</li>
</ul>

### Bitcode
Aktuell wird <b>kein Bitcode</b> von der App unterstützt! Dieses muss folglich deaktiviert werden.

Unter Project > Build Settings nach 'ENABLE_BITCODE' suchen und auf 'No' setzen

### Start des Videochats

Nach erfolgreicher Einbindung können Sie in Ihrer App nun an beliebiger Stelle einen Button einfügen, über welchen der Videochat mit dem Berater gestartet werden kann. 

In dem ViewController muss das Framework zunächst mit folgendem Befehl importiert werden:

<code>
import TalkEventSDK
</code>

Anschließend kann das Framework in Ihrem ViewController instanziiert und gestartet werden.

<pre><code>
let talkevent = TalkEventSDK(delegate: self)
talkevent.open()
</code></pre>

Zusätzlich muss der ViewController das Interface `TalkEventSDKDelegate` implementieren.
Dieser Delegate benötigt lediglich die Funktion <i>talkEventFrameworkDone</i> um zu signalisieren, wann das Framework geschlossen werden sollte (nach Ende des Telefonates). 

<code>
func talkEventFrameworkDone(error: Error?) {...}
</code>

## Einstellungsmöglichkeiten

Das Design des Frameworks lässt sich dem Design Ihrer App anpassen. Hierfür können folgende Eigenschaften gesetzt werden, <b>bevor</b> die Funktion 'talkevent.open()' aufgerufen wird.

Folgende Funktionen stehen hier zur Verfügung:

### setApiUrl

Definieren Sie die URL, die für die API-Anfragen genutzt wird.

### setKurentoRoomUrl

Definieren Sie die Websocket-URL für Ihren Kurento-Room.

### setClientNumber

Zur Anbindung an ein Beraterfenster muss hier eine gültige Mandantennummer (BLZ) oder Lizenzschlüssel des Chat-Raums hinterlegt werden.
<b>Einer dieser Parameter muss eingestellt sein.</b>

### setGroup

Ein Parameter zur Einordnung der Benutzer in Gruppen. 
Bsp.: Gruppe 'KundenCenter' & Gruppe 'BusinessLine'

### setBackgroundColor

Definieren Sie die Hintergrundfarbe des Frameworks.

### setLogo

Setzen Sie ihr individuelles Logo

### setFontColor

Definieren Sie die Schriftfarbe des Frameworks.

### setConsultantBoxColor

Diese Funktion bezieht sich auf die VideoView und setzt die Farbe der Box in der der Name des verbundende Beraters angezeigt wird.

### setSettingsBtnColor

Diese Funktion bezieht sich auf die VideoView und setzt die Farbe der Buttons für die Einstellungen.

### setCameraOverlayColor

Diese Funktion bezieht sich auf die VideoView und setzt die Farbe der Maske, die erscheint, wenn der Besucher seine Kamera deaktiviert.

### setEndCallBtnColor

Diese Funktion bezieht sich auf die VideoView und setzt die Farbe des Auflege-Button.
