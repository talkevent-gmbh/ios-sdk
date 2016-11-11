# TalkEventSDK

## Installation

### Pods
Das Framework wurde bei Cocoapods(https://cocoapods.org/) hochgeladen und dient zur vereinfachten Installation.
Wie Sie Ihr Projekt mit Cococapods initialisieren entnehmen Sie bitte unter folgendem Link: https://guides.cocoapods.org/using/using-cocoapods.html

Anschließend das Framework mit folender Zeile zu Ihrer Podfile hinzufügen:

<pre><code>
pod 'TalkEventSDK'
</code></pre>

## Anbindung 

### pList-Datei

Sollte dies noch nicht geschehen sein, müssen folgende drei Einstellungen in der pList-Datei Ihrer Appplikation hinterlegt werden:

<ul>
<li>Privacy - Microphone Usage Description : 'INSERT DESCRIPTION HERE'</li>
<li>Privacy - Camera Usage Description : 'INSERT DESCRIPTION HERE'</li>
<li>
    App Transport Security Settings
    <ul>
        <li>Allow Arbitrary Loads : YES</li>
    </ul>
</li>
</ul>

### ViewController

In Ihrem ViewController muss das Framework mit folgendem Befehl importiert werden:

<pre><code>
import TalkEventSDK
</code></pre>

Zur Verwendung des TalkEventSDK ist eine integration des TalkEventSDKDelegate unabdingbar!
Dieser Delegate benötigt lediglich die Funktion <i>talkEventFrameworkDone</i> um zu signalisieren, wann das Framework geschlossen werden muss. 

<pre><code>
func talkEventFrameworkDone(error: Error?) {...}
</code></pre>


Anschließend kann das Framework in Ihrem ViewController instantiert und gestartet werden.

<pre><code>
let talkevent = TalkEventSDK(delegate: self)
talkevent.open()
</code></pre>

## Einstellungsmöglichkeiten

Das Design des Frameworks lässt sich im gewissen Maße verändern. Hierfür müssen nur einige Methode aufgerufen und gesetzt werden, <b>bevor</b> die Funktion 'talkevent.open()' aufgerufen wird.

Folgende Funktionen stehen hier zur Verfügung:

### setClientNumber

Zur Anbindung an ein Beraterfenster muss hier eine gültige Mandantennummer (BLZ) oder Lizenzschlüssel des Chat-Raums hinterlegt werden.
<b>Einer dieser Parameter muss eingestellt sein.</b>

### setBackgroundColor

Definieren Sie die Hintergrundfarbe des Frameworks.

### setFontColor

Definieren Sie die Schriftfarbe des Frameworks.

### setConsultantBoxColor

Diese Funktion bezieht sich auf die VideoView und setzt die Farbe der Box in der der Name des verbundende Beraters angezeigt wird.

### setSettingsBtnColor

Diese Funktion bezieht sich auf die VideoView und setzt die Farbe der Buttons für die Einstellungen.

### setCameraOverlayColor

Diese Funktion bezieht sich auf die VideoView und setzt die Farbe der Maske, die ersteint, wenn man seine Kamera deaktiviert.

### setEndCallBtnColor

Diese Funktion bezieht sich auf die VideoView und setzt die Farbe des Auflege-Button.
