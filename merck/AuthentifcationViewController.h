//
//  AuthentifcationViewController.h
//  merck
//
//  Created by mac on 24/11/2016.
//  Copyright © 2016 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface AuthentifcationViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *password;
@property (weak, nonatomic) IBOutlet UITextField *emailField;
@property (weak, nonatomic) IBOutlet UIButton *loginBtn;

@property (strong, nonatomic) IBOutlet UILabel *forgetPwd;

- (IBAction)login:(id)sender;
@end
