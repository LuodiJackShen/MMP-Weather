//
//  ViewController.swift
//  MMP-Weather
//
//  Created by JackShen on 2018/8/12.
//  Copyright © 2018年 JackShen. All rights reserved.
//

import UIKit
import MMPWeather

class ViewController: UIViewController, MMPWIGetWeaDetContractIGetWeaDetView {
    var detMode:GetWeaDetModelImp!
    var detPresenter:MMPWGetWeaDetPresenterImp!
    @IBOutlet var cityLabel:UILabel!
    @IBOutlet var desLabel:UILabel!
    @IBOutlet var icoImage:UIImageView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        detMode = GetWeaDetModelImp(key:"utbnjklehq95z5b6", location:"ip")
        detPresenter = MMPWGetWeaDetPresenterImp(view: self, model: detMode)
        detPresenter.getWeatherDetail()
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    func onGetStart() {
        //nothing here
    }
    
    func onGetComplete(json: String, entity: Any?) {
        cityLabel.text = json
        desLabel.text = "雷阵雨-27℃"
        icoImage.image = UIImage(named: "w_19.png")
    }

}

