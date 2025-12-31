//
//  ScanHelperViewController.swift
//  ScanHelper
//
//  Created by well on 2021/10/3.
//

import UIKit
import ScanHelperSDK

class ScanHelperViewController: UIViewController, ScanHelperDelegate {
    /// 让控制器持有scanHelper对象,不然会被自动释放
    private let scanHelper = ScanHelper()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        defaultBackgroundColor()
        scan()
    }
    
    private func scan() {
        let config = ScanConfig()
        config.isAutoStop = false
        config.isFullScreenScan = true
        config.animationImage = UIImage(named: "scan_animation")
        config.sound = Bundle.main.path(forResource: "scan_audio", ofType: "wav")
        scanHelper.start(supView: view, scanConfig: config) { [weak self] (res) in
            guard let self = self else { return }
            let result = res as ScanResult
            print(result.value,result.metadataType)
            self.navigationController?.popViewController(animated: true)
        }
    }
    
    deinit { print("ScanViewController deinit") }
}
