/**
 * PPRetailSdkEnvironmentInfo.h
 *
 * DO NOT EDIT THIS FILE! IT IS AUTOMATICALLY GENERATED AND SHOULD NOT BE CHECKED IN.
 * Generated from: js/common/SdkEnvironmentInfo.js
 *
 * 
 */

#import "PayPalRetailSDKTypeDefs.h"
#import "PPRetailObject.h"


@class PPRetailSDK;
@class PPRetailError;
@class PPRetailPayPalErrorInfo;
@class PPRetailAccountSummary;
@class PPRetailAccountSummarySection;
@class PPRetailInvoiceAddress;
@class PPRetailInvoiceAttachment;
@class PPRetailInvoiceBillingInfo;
@class PPRetailInvoiceCCInfo;
@class PPRetailCountries;
@class PPRetailCountry;
@class PPRetailInvoiceCustomAmount;
@class PPRetailInvoice;
@class PPRetailInvoiceActions;
@class PPRetailInvoiceConstants;
@class PPRetailInvoiceListRequest;
@class PPRetailInvoiceListResponse;
@class PPRetailInvoiceMetaData;
@class PPRetailInvoiceTemplatesResponse;
@class PPRetailInvoicingService;
@class PPRetailInvoiceItem;
@class PPRetailInvoiceMerchantInfo;
@class PPRetailInvoiceNotification;
@class PPRetailInvoicePayment;
@class PPRetailInvoicePaymentTerm;
@class PPRetailInvoiceRefund;
@class PPRetailInvoiceSearchRequest;
@class PPRetailInvoiceShippingInfo;
@class PPRetailInvoiceTemplate;
@class PPRetailInvoiceTemplateSettings;
@class PPRetailMerchant;
@class PPRetailNetworkRequest;
@class PPRetailNetworkResponse;
@class PPRetailSdkEnvironmentInfo;
@class PPRetailRetailInvoice;
@class PPRetailRetailInvoicePayment;
@class PPRetailTokenExpirationHandler;
@class PPRetailCaptureHandler;
@class PPRetailTransactionContext;
@class PPRetailTransactionManager;
@class PPRetailTransactionBeginOptions;
@class PPRetailReceiptDestination;
@class PPRetailDeviceManager;
@class PPRetailSignatureReceiver;
@class PPRetailReceiptOptionsViewContent;
@class PPRetailReceiptEmailEntryViewContent;
@class PPRetailReceiptSMSEntryViewContent;
@class PPRetailReceiptViewContent;
@class PPRetailCard;
@class PPRetailBatteryInfo;
@class PPRetailMagneticCard;
@class PPRetailPaymentDevice;
@class PPRetailManuallyEnteredCard;
@class PPRetailDeviceUpdate;
@class PPRetailCardInsertedHandler;
@class PPRetailDeviceStatus;
@class PPRetailPayer;
@class PPRetailTransactionRecord;
@class PPRetailAuthorizedTransaction;
@class PPRetailPage;
@class PPRetailDiscoveredCardReader;
@class PPRetailCardReaderScanAndDiscoverOptions;
@class PPRetailDeviceConnectorOptions;
@class PPRetailSimulationOptions;


/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/**
 * The executing environment of the SDK
 */
@interface PPRetailSdkEnvironmentInfo : PPRetailObject

    /**
    * Merchant identifier like PayerId, etc.
    */
    @property (nonatomic,strong,nullable) NSString* merchantId;
    /**
    * Operating system name
    */
    @property (nonatomic,strong,nullable) NSString* osName;
    /**
    * Operating system version
    */
    @property (nonatomic,strong,nullable) NSString* osVersion;
    /**
    * Name of the integrating App
    */
    @property (nonatomic,strong,nullable) NSString* appName;
    /**
    * Version of the integrating App
    */
    @property (nonatomic,strong,nullable) NSString* appVersion;
    /**
    * Build number of the integrating app
    */
    @property (nonatomic,strong,nullable) NSString* appBuild;
    /**
    * Currency for the Merchant
    */
    @property (nonatomic,strong,nullable) NSString* currency;
    /**
    * Environment- live or sandbox
    */
    @property (nonatomic,strong,nullable) NSString* environment;
    /**
    * Device model
    */
    @property (nonatomic,strong,nullable) NSString* deviceModel;
    /**
    * Device manufacturer
    */
    @property (nonatomic,strong,nullable) NSString* deviceManufacturer;
    /**
    * The retailSDK Version
    */
    @property (nonatomic,strong,nullable) NSString* retailSDKVersion;








@end
