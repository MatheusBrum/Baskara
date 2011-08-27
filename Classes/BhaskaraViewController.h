//
//  BhaskaraViewController.h
//  Bhaskara
//
//  Created by Matheus Brum on 01/08/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BhaskaraViewController : UIViewController {
    IBOutlet UITextField *campoNumero1;
    IBOutlet UITextField *campoNumero2;
	IBOutlet UITextField *campoNumero3;
    IBOutlet UILabel *labelNumero;
}
@property (nonatomic, retain) UITextField *campoNumero1;
@property (nonatomic, retain) UITextField *campoNumero2;
@property (nonatomic, retain) UITextField *campoNumero3;
@property (nonatomic, retain) UILabel *labelNumero;
- (IBAction)botaoPressionado;
- (IBAction)botaoBack;
- (IBAction)botaoApagar;
@end