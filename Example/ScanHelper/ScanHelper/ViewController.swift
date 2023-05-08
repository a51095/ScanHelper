//
//  ViewController.swift
//  ScanHelper
//
//  Created by well on 2023/5/6.
//

import UIKit

extension UIViewController {
    func defaultBackgroundColor() { view.backgroundColor = .white }
}

class ViewController: UIViewController {
    override func viewDidLoad() {
        super.viewDidLoad()
        defaultBackgroundColor()
        
        let scanButton = UIButton()
        scanButton.setTitle("Start Scan", for: .normal)
        scanButton.frame = CGRect(x: 0, y: 0, width: 200, height: 200)
        scanButton.center = view.center
        scanButton.backgroundColor = .orange
        scanButton.layer.cornerRadius = 100
        scanButton.layer.masksToBounds = true

        scanButton.addTarget(self, action: #selector(scanEvent), for: .touchUpInside)
        view.addSubview(scanButton)
    }
    
    @objc func scanEvent() {
        navigationController?.pushViewController(ScanHelperViewController(), animated: true)
    }
}

