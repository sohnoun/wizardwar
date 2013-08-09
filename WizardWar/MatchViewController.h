//
//  MatchViewController.h
//  WizardWar
//
//  Created by Sean Hess on 5/23/13.
//  Copyright (c) 2013 The LAB. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Wizard.h"
#import "Challenge.h"
#import "HelpViewController.h"
#import "AIService.h"

@protocol MatchViewControllerDelegate <NSObject>
-(void)didFinishChallenge:(Challenge*)challenge didWin:(BOOL)win;
@end

@interface MatchViewController : UIViewController
@property (nonatomic, weak) id<MatchViewControllerDelegate>delegate;
- (void)createMatchWithWizard:(Wizard*)wizard withAI:(id<AIService>)ai;
- (void)createMatchWithChallenge:(Challenge*)challenge currentWizard:(Wizard*)wizard;
- (void)startMatch;
- (void)showHelp:(HelpViewController*)help;
- (void)hideHelp:(HelpViewController*)help;
@end
