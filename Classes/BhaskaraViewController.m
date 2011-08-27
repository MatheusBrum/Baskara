//
//  BhaskaraViewController.m
//  Bhaskara
//
//  Created by Matheus Brum on 01/08/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import "BhaskaraViewController.h"

@implementation BhaskaraViewController
@synthesize campoNumero1, campoNumero2,campoNumero3, labelNumero;
- (IBAction)botaoPressionado {
	NSInteger a = [campoNumero1.text intValue];
	NSInteger b = [campoNumero2.text intValue];
	NSInteger c = [campoNumero3.text intValue];
	int delta, x1, x2;
	delta=b*b+4*a*c;
	x1=b+sqrt(delta)/2*a;
	x2=-1*b+sqrt(delta)/2*a;
	labelNumero.text = [NSString stringWithFormat: @"X1 = %i e X2=%i", x1, x2];
}
-(IBAction)botaoApagar {
	campoNumero2.text = @"";
	campoNumero3.text = @"";
	campoNumero1.text = @"";
	labelNumero.text = @"";
}
- (IBAction)botaoBack {
	[campoNumero1 resignFirstResponder];
	[campoNumero2 resignFirstResponder];
	[campoNumero3 resignFirstResponder];
}

@end
