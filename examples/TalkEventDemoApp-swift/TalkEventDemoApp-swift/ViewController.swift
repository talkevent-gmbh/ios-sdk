//
//  ViewController.swift
//  TalkEventDemoApp-swift
//
//  Created by Jan Bürling on 14.11.16.
//  Copyright © 2016 talkevent. All rights reserved.
//

import UIKit
import TalkEventSDK

class ViewController: UIViewController, TalkEventSDKDelegate {
    // MARK: - Properties
    @IBOutlet weak var logoImageView: UIImageView!
    @IBOutlet weak var startButton: UIButton!

    //MARK: - ViewLoadFunctions
    override func viewWillAppear(_ animated: Bool) {
        self.initStyling()
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Do any additional setup after loading the view.
    }

    
    // MARK: - Actions
    @IBAction func didTabStartButton(_ sender: UIButton) {
        let talkevent = TalkEventSDK(delegate: self)
        talkevent.open()
    }
    
    
    // MARK: - TalkEventSDKDelegate
    func talkEventFrameworkDone(error: Error?) {
        let bundle = Bundle(for: ViewController.self)
        let storyboard = UIStoryboard(name: "Main", bundle: bundle)
        
        if let vc = storyboard.instantiateInitialViewController() as? ViewController {
            UIApplication.shared.keyWindow!.rootViewController = vc
        }
    }
    
    
    // MARK: - HelperFunctions
    func initStyling() {
        self.view.backgroundColor = UIColor(red: 52/255, green: 73/255, blue: 94/255, alpha: 1.0)
        self.logoImageView.image = UIImage(named: "talkevent_logo")
        
        self.startButton.backgroundColor = UIColor.clear
        self.startButton.layer.cornerRadius = self.startButton.frame.height / 2
        self.startButton.layer.borderWidth = 1
        self.startButton.layer.borderColor = UIColor.white.cgColor
        self.startButton.setTitleColor(UIColor.white, for: .normal)
    }
}

