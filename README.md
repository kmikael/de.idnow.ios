## Requirements

- Xcode 6.2 or later
- Deployment Target: iOS 7 or later
- Supported Devices: iPhone
- Recommended: Cocoapods installed


## Installation

- Add the following to your *Podfile*:

```
pod "HockeySDK"
```

## Usage

```objective-c
IDnowSettings settings = [IDnowSettings new];
settings.companyID = "<companyid>";
settings.transactionToken = "<transactionnumber>";

IDnowController *idnowController = [[IDnowController alloc] initWithSettings: settings];

// Initialize identification using blocks (alternatively you can set the delegate and
// implement the IDnowControllerDelegate protocol)
[idnowController initializeWithCompletionBlock: ^(bool success, IDnowError *idnowError, bool canceledByUser)
{
		if ( success )
		{
		      // Start identification using blocks
			  [idnowController startIdentificationFromViewController: self 
			  withCompletionBlock: ^(bool success, IDnowError *idnowError, bool canceledByUser)
			  {
					  if ( success )
					  {
					      // identification was successfull
					  }
					  else
					  {
					      // identification failed / canceled
					  }
				}];
		}
		else if ( idnowError )
		{
		      // Present an alert containing localized error description
			  UIAlertController *alertController = [UIAlertController alertControllerWithTitle: @"Error" 
			  message: idnowError.localizedErrorDescription 
			  preferredStyle: UIAlertControllerStyleAlert];
			  UIAlertAction *action = [UIAlertAction actionWithTitle: @"Ok" 
			  style: UIAlertActionStyleCancel 
			  handler: nil];
			  [alertController addAction: action];
			  [self presentViewController: alertController animated: true completion: nil];
		}
	}];
```

For more information refer to the Documentation or take a look at the Sample Project.
To build the sample project, you have to call "pod install" to install dependencies.
