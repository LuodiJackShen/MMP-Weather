//
//  GetWeaDetModelImp.swift
//  MMP-Weather
//
//  Created by JackShen on 2018/8/12.
//  Copyright © 2018年 JackShen. All rights reserved.
//

import Foundation
import MMPWeather

class GetWeaDetModelImp: MMPWAbsGetWeaDetModel{
    var key:String
    
    init(key : String, location : String) {
        self.key = key
        super.init(location: location)
    }
    
    override func getWeaDet(listener: @escaping (String, Any?) -> MMPWStdlibUnit) {
        //在这里进行网络请求，并将服务器返回的json串或者将json串解析成实体对象
        //这里仅仅作为一个demo，并没有进行相应的网络请求，也没有对json进行转实体对象的操作
        listener("北京",NSNull())
    }
}
