// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Billing API (cloudbilling/v1)
// Description:
//   Allows developers to manage billing for their Google Cloud Platform
//   projects programmatically.
// Documentation:
//   https://cloud.google.com/billing/docs/apis

#import <GoogleAPIClientForREST/GTLRCloudbillingQuery.h>

@implementation GTLRCloudbillingQuery

@dynamic fields;

@end

@implementation GTLRCloudbillingQuery_BillingAccountsCreate

+ (instancetype)queryWithObject:(GTLRCloudbilling_BillingAccount *)object {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSString *pathURITemplate = @"v1/billingAccounts";
  GTLRCloudbillingQuery_BillingAccountsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRCloudbilling_BillingAccount class];
  query.loggingName = @"cloudbilling.billingAccounts.create";
  return query;
}

@end

@implementation GTLRCloudbillingQuery_BillingAccountsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudbillingQuery_BillingAccountsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudbilling_BillingAccount class];
  query.loggingName = @"cloudbilling.billingAccounts.get";
  return query;
}

@end

@implementation GTLRCloudbillingQuery_BillingAccountsGetIamPolicy

@dynamic optionsRequestedPolicyVersion, resource;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"optionsRequestedPolicyVersion" : @"options.requestedPolicyVersion" };
}

+ (instancetype)queryWithResource:(NSString *)resource {
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:getIamPolicy";
  GTLRCloudbillingQuery_BillingAccountsGetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.resource = resource;
  query.expectedObjectClass = [GTLRCloudbilling_Policy class];
  query.loggingName = @"cloudbilling.billingAccounts.getIamPolicy";
  return query;
}

@end

@implementation GTLRCloudbillingQuery_BillingAccountsList

@dynamic filter, pageSize, pageToken;

+ (instancetype)query {
  NSString *pathURITemplate = @"v1/billingAccounts";
  GTLRCloudbillingQuery_BillingAccountsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRCloudbilling_ListBillingAccountsResponse class];
  query.loggingName = @"cloudbilling.billingAccounts.list";
  return query;
}

@end

@implementation GTLRCloudbillingQuery_BillingAccountsPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRCloudbilling_BillingAccount *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudbillingQuery_BillingAccountsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudbilling_BillingAccount class];
  query.loggingName = @"cloudbilling.billingAccounts.patch";
  return query;
}

@end

@implementation GTLRCloudbillingQuery_BillingAccountsProjectsList

@dynamic name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}/projects";
  GTLRCloudbillingQuery_BillingAccountsProjectsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudbilling_ListProjectBillingInfoResponse class];
  query.loggingName = @"cloudbilling.billingAccounts.projects.list";
  return query;
}

@end

@implementation GTLRCloudbillingQuery_BillingAccountsSetIamPolicy

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRCloudbilling_SetIamPolicyRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:setIamPolicy";
  GTLRCloudbillingQuery_BillingAccountsSetIamPolicy *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRCloudbilling_Policy class];
  query.loggingName = @"cloudbilling.billingAccounts.setIamPolicy";
  return query;
}

@end

@implementation GTLRCloudbillingQuery_BillingAccountsTestIamPermissions

@dynamic resource;

+ (instancetype)queryWithObject:(GTLRCloudbilling_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"resource" ];
  NSString *pathURITemplate = @"v1/{+resource}:testIamPermissions";
  GTLRCloudbillingQuery_BillingAccountsTestIamPermissions *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.resource = resource;
  query.expectedObjectClass = [GTLRCloudbilling_TestIamPermissionsResponse class];
  query.loggingName = @"cloudbilling.billingAccounts.testIamPermissions";
  return query;
}

@end

@implementation GTLRCloudbillingQuery_ProjectsGetBillingInfo

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}/billingInfo";
  GTLRCloudbillingQuery_ProjectsGetBillingInfo *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudbilling_ProjectBillingInfo class];
  query.loggingName = @"cloudbilling.projects.getBillingInfo";
  return query;
}

@end

@implementation GTLRCloudbillingQuery_ProjectsUpdateBillingInfo

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudbilling_ProjectBillingInfo *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}/billingInfo";
  GTLRCloudbillingQuery_ProjectsUpdateBillingInfo *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudbilling_ProjectBillingInfo class];
  query.loggingName = @"cloudbilling.projects.updateBillingInfo";
  return query;
}

@end

@implementation GTLRCloudbillingQuery_ServicesList

@dynamic pageSize, pageToken;

+ (instancetype)query {
  NSString *pathURITemplate = @"v1/services";
  GTLRCloudbillingQuery_ServicesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRCloudbilling_ListServicesResponse class];
  query.loggingName = @"cloudbilling.services.list";
  return query;
}

@end

@implementation GTLRCloudbillingQuery_ServicesSkusList

@dynamic currencyCode, endTime, pageSize, pageToken, parent, startTime;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/skus";
  GTLRCloudbillingQuery_ServicesSkusList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudbilling_ListSkusResponse class];
  query.loggingName = @"cloudbilling.services.skus.list";
  return query;
}

@end
