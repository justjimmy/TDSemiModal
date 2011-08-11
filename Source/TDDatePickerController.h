//
//  TDDatePickerController.h
//
//  Created by Nathan  Reed on 30/09/10.
//  Copyright 2010 Nathan Reed. All rights reserved.
//

#import	"TDSemiModal.h"

@class TDDatePickerController;

@protocol TDDatePickerControllerDelegate <NSObject>

@optional
- (void)datePickerSetDate:(TDDatePickerController *)viewController;
- (void)datePickerClearDate:(TDDatePickerController *)viewController;
- (void)datePickerCancel:(TDDatePickerController *)viewController;
@end

@interface TDDatePickerController : TDSemiModalViewController

@property (nonatomic, assign) IBOutlet id <TDDatePickerControllerDelegate> delegate;
@property (nonatomic, retain) IBOutlet UIDatePicker* datePicker;

- (IBAction)saveDateEdit:(id)sender;
- (IBAction)clearDateEdit:(id)sender;
- (IBAction)cancelDateEdit:(id)sender;

@end