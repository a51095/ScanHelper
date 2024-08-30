//
//  ScanHelperViewController.swift
//  ScanHelper
//
//  Created by well on 2021/10/3.
//

import UIKit
import ScanHelperSDK

class ScanHelperViewController: UIViewController, ScanHelperDelegate {
    /// 让控制器持有scanHelper对象,不然会被提前释放
    private let scanHelper = ScanHelper()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        defaultBackgroundColor()
        scan()
    }
    
    private func scan() {
        let config = ScanConfig()
        config.sound = Bundle.main.path(forResource: "scan_audio", ofType: "wav")
        config.animationImage = UIImage(named: "scan_animation")
        
        scanHelper.start(supView: view, scanConfig: config) { [weak self] (res) in
            guard let self = self else { return }
            print(res)
            self.navigationController?.popViewController(animated: true)
        }
    }
    
    deinit { print("ScanViewController deinit") }
}
