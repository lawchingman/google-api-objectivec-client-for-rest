// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Support API (cloudsupport/v2)
// Description:
//   Manages Google Cloud technical support cases for Customer Care support
//   offerings.
// Documentation:
//   https://cloud.google.com/support/docs/apis

#import <GoogleAPIClientForREST/GTLRQuery.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

#import "GTLRCloudSupportObjects.h"

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Cloud Support query classes.
 */
@interface GTLRCloudSupportQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Retrieve valid classifications to be used when creating a support case. The
 *  classications are hierarchical, with each classification containing all
 *  levels of the hierarchy, separated by `" > "`. For example `"Technical Issue
 *  > Compute > Compute Engine"`. Classification IDs returned by
 *  `caseClassifications.search` are guaranteed to be valid for at least six
 *  months. If a given classification is deactivated, it immediately stops being
 *  returned. After six months, `case.create` requests using the classification
 *  ID will fail. Here is an example of calling this endpoint using cURL:
 *  ```shell curl \\ --header "Authorization: Bearer $(gcloud auth
 *  print-access-token)" \\
 *  'https://cloudsupport.googleapis.com/v2/caseClassifications:search?query=display_name:"*Compute%20Engine*"'
 *  ```
 *
 *  Method: cloudsupport.caseClassifications.search
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSupportCloudPlatform
 */
@interface GTLRCloudSupportQuery_CaseClassificationsSearch : GTLRCloudSupportQuery

/** The maximum number of cases fetched with each request. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A token identifying the page of results to return. If unspecified, the first
 *  page is retrieved.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  An expression written in the Google Cloud filter language. If non-empty,
 *  then only cases whose fields match the filter are returned. If empty, then
 *  no messages are filtered out.
 */
@property(nonatomic, copy, nullable) NSString *query;

/**
 *  Fetches a @c GTLRCloudSupport_SearchCaseClassificationsResponse.
 *
 *  Retrieve valid classifications to be used when creating a support case. The
 *  classications are hierarchical, with each classification containing all
 *  levels of the hierarchy, separated by `" > "`. For example `"Technical Issue
 *  > Compute > Compute Engine"`. Classification IDs returned by
 *  `caseClassifications.search` are guaranteed to be valid for at least six
 *  months. If a given classification is deactivated, it immediately stops being
 *  returned. After six months, `case.create` requests using the classification
 *  ID will fail. Here is an example of calling this endpoint using cURL:
 *  ```shell curl \\ --header "Authorization: Bearer $(gcloud auth
 *  print-access-token)" \\
 *  'https://cloudsupport.googleapis.com/v2/caseClassifications:search?query=display_name:"*Compute%20Engine*"'
 *  ```
 *
 *  @return GTLRCloudSupportQuery_CaseClassificationsSearch
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Retrieve all attachments associated with a support case. Here is an example
 *  of calling this endpoint using cURL: ```shell
 *  case="projects/some-project/cases/23598314" curl \\ --header "Authorization:
 *  Bearer $(gcloud auth print-access-token)" \\
 *  "https://cloudsupport.googleapis.com/v2/$case/attachments" ```
 *
 *  Method: cloudsupport.cases.attachments.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSupportCloudPlatform
 */
@interface GTLRCloudSupportQuery_CasesAttachmentsList : GTLRCloudSupportQuery

/**
 *  The maximum number of attachments fetched with each request. If not
 *  provided, the default is 10. The maximum page size that will be returned is
 *  100.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A token identifying the page of results to return. If unspecified, the first
 *  page is retrieved.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The resource name of Case object for which attachments should be
 *  listed.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudSupport_ListAttachmentsResponse.
 *
 *  Retrieve all attachments associated with a support case. Here is an example
 *  of calling this endpoint using cURL: ```shell
 *  case="projects/some-project/cases/23598314" curl \\ --header "Authorization:
 *  Bearer $(gcloud auth print-access-token)" \\
 *  "https://cloudsupport.googleapis.com/v2/$case/attachments" ```
 *
 *  @param parent Required. The resource name of Case object for which
 *    attachments should be listed.
 *
 *  @return GTLRCloudSupportQuery_CasesAttachmentsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Close the specified case. Here is an example of calling this endpoint using
 *  cURL: ```shell case="projects/some-project/cases/43595344" curl \\ --request
 *  POST \\ --header "Authorization: Bearer $(gcloud auth print-access-token)"
 *  \\ "https://cloudsupport.googleapis.com/v2/$case:close" ```
 *
 *  Method: cloudsupport.cases.close
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSupportCloudPlatform
 */
@interface GTLRCloudSupportQuery_CasesClose : GTLRCloudSupportQuery

/** Required. The fully qualified name of the case resource to be closed. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudSupport_Case.
 *
 *  Close the specified case. Here is an example of calling this endpoint using
 *  cURL: ```shell case="projects/some-project/cases/43595344" curl \\ --request
 *  POST \\ --header "Authorization: Bearer $(gcloud auth print-access-token)"
 *  \\ "https://cloudsupport.googleapis.com/v2/$case:close" ```
 *
 *  @param object The @c GTLRCloudSupport_CloseCaseRequest to include in the
 *    query.
 *  @param name Required. The fully qualified name of the case resource to be
 *    closed.
 *
 *  @return GTLRCloudSupportQuery_CasesClose
 */
+ (instancetype)queryWithObject:(GTLRCloudSupport_CloseCaseRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Add a new comment to the specified Case. The comment object must have the
 *  following fields set: body. Here is an example of calling this endpoint
 *  using cURL: ```shell case="projects/some-project/cases/43591344" curl \\
 *  --request POST \\ --header "Authorization: Bearer $(gcloud auth
 *  print-access-token)" \\ --header 'Content-Type: application/json' \\ --data
 *  '{ "body": "This is a test comment." }' \\
 *  "https://cloudsupport.googleapis.com/v2/$case/comments" ```
 *
 *  Method: cloudsupport.cases.comments.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSupportCloudPlatform
 */
@interface GTLRCloudSupportQuery_CasesCommentsCreate : GTLRCloudSupportQuery

/**
 *  Required. The resource name of Case to which this comment should be added.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudSupport_Comment.
 *
 *  Add a new comment to the specified Case. The comment object must have the
 *  following fields set: body. Here is an example of calling this endpoint
 *  using cURL: ```shell case="projects/some-project/cases/43591344" curl \\
 *  --request POST \\ --header "Authorization: Bearer $(gcloud auth
 *  print-access-token)" \\ --header 'Content-Type: application/json' \\ --data
 *  '{ "body": "This is a test comment." }' \\
 *  "https://cloudsupport.googleapis.com/v2/$case/comments" ```
 *
 *  @param object The @c GTLRCloudSupport_Comment to include in the query.
 *  @param parent Required. The resource name of Case to which this comment
 *    should be added.
 *
 *  @return GTLRCloudSupportQuery_CasesCommentsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudSupport_Comment *)object
                         parent:(NSString *)parent;

@end

/**
 *  Retrieve all comments associated with the Case object. Here is an example of
 *  calling this endpoint using cURL: ```shell
 *  case="projects/cloud-support-qa-premium/cases/43595344" curl \\ --header
 *  "Authorization: Bearer $(gcloud auth print-access-token)" \\
 *  "https://cloudsupport.googleapis.com/v2/$case/comments" ```
 *
 *  Method: cloudsupport.cases.comments.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSupportCloudPlatform
 */
@interface GTLRCloudSupportQuery_CasesCommentsList : GTLRCloudSupportQuery

/**
 *  The maximum number of comments fetched with each request. Defaults to 10.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A token identifying the page of results to return. If unspecified, the first
 *  page is retrieved.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The resource name of Case object for which comments should be
 *  listed.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudSupport_ListCommentsResponse.
 *
 *  Retrieve all comments associated with the Case object. Here is an example of
 *  calling this endpoint using cURL: ```shell
 *  case="projects/cloud-support-qa-premium/cases/43595344" curl \\ --header
 *  "Authorization: Bearer $(gcloud auth print-access-token)" \\
 *  "https://cloudsupport.googleapis.com/v2/$case/comments" ```
 *
 *  @param parent Required. The resource name of Case object for which comments
 *    should be listed.
 *
 *  @return GTLRCloudSupportQuery_CasesCommentsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Create a new case and associate it with a Google Cloud Resource. The case
 *  object must have the following fields set: `display_name`, `description`,
 *  `classification`, and `priority`. If you're just testing the API and don't
 *  want to route your case to an agent, set `testCase=true`. Here is an example
 *  of calling this endpoint using cURL: ```shell parent="projects/some-project"
 *  curl \\ --request POST \\ --header "Authorization: Bearer $(gcloud auth
 *  print-access-token)" \\ --header 'Content-Type: application/json' \\ --data
 *  '{ "display_name": "Test case created by me.", "description": "a random test
 *  case, feel free to close", "classification": { "id":
 *  "100IK2AKCLHMGRJ9CDGMOCGP8DM6UTB4BT262T31BT1M2T31DHNMENPO6KS36CPJ786L2TBFEHGN6NPI64R3CDHN8880G08I1H3MURR7DHII0GRCDTQM8"
 *  }, "time_zone": "-07:00", "subscriber_email_addresses": [ "foo\@domain.com",
 *  "bar\@domain.com" ], "testCase": true, "priority": "P3" }' \\
 *  "https://cloudsupport.googleapis.com/v2/$parent/cases" ```
 *
 *  Method: cloudsupport.cases.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSupportCloudPlatform
 */
@interface GTLRCloudSupportQuery_CasesCreate : GTLRCloudSupportQuery

/**
 *  Required. The name of the Google Cloud Resource under which the case should
 *  be created.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudSupport_Case.
 *
 *  Create a new case and associate it with a Google Cloud Resource. The case
 *  object must have the following fields set: `display_name`, `description`,
 *  `classification`, and `priority`. If you're just testing the API and don't
 *  want to route your case to an agent, set `testCase=true`. Here is an example
 *  of calling this endpoint using cURL: ```shell parent="projects/some-project"
 *  curl \\ --request POST \\ --header "Authorization: Bearer $(gcloud auth
 *  print-access-token)" \\ --header 'Content-Type: application/json' \\ --data
 *  '{ "display_name": "Test case created by me.", "description": "a random test
 *  case, feel free to close", "classification": { "id":
 *  "100IK2AKCLHMGRJ9CDGMOCGP8DM6UTB4BT262T31BT1M2T31DHNMENPO6KS36CPJ786L2TBFEHGN6NPI64R3CDHN8880G08I1H3MURR7DHII0GRCDTQM8"
 *  }, "time_zone": "-07:00", "subscriber_email_addresses": [ "foo\@domain.com",
 *  "bar\@domain.com" ], "testCase": true, "priority": "P3" }' \\
 *  "https://cloudsupport.googleapis.com/v2/$parent/cases" ```
 *
 *  @param object The @c GTLRCloudSupport_Case to include in the query.
 *  @param parent Required. The name of the Google Cloud Resource under which
 *    the case should be created.
 *
 *  @return GTLRCloudSupportQuery_CasesCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudSupport_Case *)object
                         parent:(NSString *)parent;

@end

/**
 *  Escalate a case. Escalating a case initiates the Google Cloud Support
 *  escalation management process. This operation is only available to certain
 *  Customer Care support services. Go to https://cloud.google.com/support and
 *  look for 'Technical support escalations' in the feature list to find out
 *  which support services let you perform escalations. Here is an example of
 *  calling this endpoint using cURL: ```shell
 *  case="projects/some-project/cases/43595344" curl \\ --request POST \\
 *  --header "Authorization: Bearer $(gcloud auth print-access-token)" \\
 *  --header "Content-Type: application/json" \\ --data '{ "escalation": {
 *  "reason": "BUSINESS_IMPACT", "justification": "This is a test escalation." }
 *  }' \\ "https://cloudsupport.googleapis.com/v2/$case:escalate" ```
 *
 *  Method: cloudsupport.cases.escalate
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSupportCloudPlatform
 */
@interface GTLRCloudSupportQuery_CasesEscalate : GTLRCloudSupportQuery

/**
 *  Required. The fully qualified name of the Case resource to be escalated.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudSupport_Case.
 *
 *  Escalate a case. Escalating a case initiates the Google Cloud Support
 *  escalation management process. This operation is only available to certain
 *  Customer Care support services. Go to https://cloud.google.com/support and
 *  look for 'Technical support escalations' in the feature list to find out
 *  which support services let you perform escalations. Here is an example of
 *  calling this endpoint using cURL: ```shell
 *  case="projects/some-project/cases/43595344" curl \\ --request POST \\
 *  --header "Authorization: Bearer $(gcloud auth print-access-token)" \\
 *  --header "Content-Type: application/json" \\ --data '{ "escalation": {
 *  "reason": "BUSINESS_IMPACT", "justification": "This is a test escalation." }
 *  }' \\ "https://cloudsupport.googleapis.com/v2/$case:escalate" ```
 *
 *  @param object The @c GTLRCloudSupport_EscalateCaseRequest to include in the
 *    query.
 *  @param name Required. The fully qualified name of the Case resource to be
 *    escalated.
 *
 *  @return GTLRCloudSupportQuery_CasesEscalate
 */
+ (instancetype)queryWithObject:(GTLRCloudSupport_EscalateCaseRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Retrieve the specified case. Here is an example of calling this endpoint
 *  using cURL: ```shell case="projects/some-project/cases/16033687" curl \\
 *  --header "Authorization: Bearer $(gcloud auth print-access-token)" \\
 *  "https://cloudsupport.googleapis.com/v2/$case" ```
 *
 *  Method: cloudsupport.cases.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSupportCloudPlatform
 */
@interface GTLRCloudSupportQuery_CasesGet : GTLRCloudSupportQuery

/** Required. The fully qualified name of a case to be retrieved. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudSupport_Case.
 *
 *  Retrieve the specified case. Here is an example of calling this endpoint
 *  using cURL: ```shell case="projects/some-project/cases/16033687" curl \\
 *  --header "Authorization: Bearer $(gcloud auth print-access-token)" \\
 *  "https://cloudsupport.googleapis.com/v2/$case" ```
 *
 *  @param name Required. The fully qualified name of a case to be retrieved.
 *
 *  @return GTLRCloudSupportQuery_CasesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Retrieve all cases under the specified parent. Note: Listing cases under an
 *  organization returns only the cases directly parented by that organization.
 *  To retrieve all cases under an organization, including cases parented by
 *  projects under that organization, use `cases.search`. Here is an example of
 *  calling this endpoint using cURL: ```shell parent="projects/some-project"
 *  curl \\ --header "Authorization: Bearer $(gcloud auth print-access-token)"
 *  \\ "https://cloudsupport.googleapis.com/v2/$parent/cases" ```
 *
 *  Method: cloudsupport.cases.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSupportCloudPlatform
 */
@interface GTLRCloudSupportQuery_CasesList : GTLRCloudSupportQuery

/**
 *  An expression written in filter language. If non-empty, the query returns
 *  the cases that match the filter. Else, the query doesn't filter the cases.
 *  Filter expressions use the following fields with the operators equals (`=`)
 *  and `AND`: - `state`: The accepted values are `OPEN` or `CLOSED`. -
 *  `priority`: The accepted values are `P0`, `P1`, `P2`, `P3`, or `P4`. You can
 *  specify multiple values for priority using the `OR` operator. For example,
 *  `priority=P1 OR priority=P2`. - `creator.email`: The email address of the
 *  case creator. Examples: - `state=CLOSED` - `state=OPEN AND
 *  creator.email="tester\@example.com"` - `state=OPEN AND (priority=P0 OR
 *  priority=P1)`
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** The maximum number of cases fetched with each request. Defaults to 10. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A token identifying the page of results to return. If unspecified, the first
 *  page is retrieved.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The fully qualified name of parent resource to list cases under.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudSupport_ListCasesResponse.
 *
 *  Retrieve all cases under the specified parent. Note: Listing cases under an
 *  organization returns only the cases directly parented by that organization.
 *  To retrieve all cases under an organization, including cases parented by
 *  projects under that organization, use `cases.search`. Here is an example of
 *  calling this endpoint using cURL: ```shell parent="projects/some-project"
 *  curl \\ --header "Authorization: Bearer $(gcloud auth print-access-token)"
 *  \\ "https://cloudsupport.googleapis.com/v2/$parent/cases" ```
 *
 *  @param parent Required. The fully qualified name of parent resource to list
 *    cases under.
 *
 *  @return GTLRCloudSupportQuery_CasesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Update the specified case. Only a subset of fields can be updated. Here is
 *  an example of calling this endpoint using cURL: ```shell
 *  case="projects/some-project/cases/43595344" curl \\ --request PATCH \\
 *  --header "Authorization: Bearer $(gcloud auth print-access-token)" \\
 *  --header "Content-Type: application/json" \\ --data '{ "priority": "P1" }'
 *  \\ "https://cloudsupport.googleapis.com/v2/$case?updateMask=priority" ```
 *
 *  Method: cloudsupport.cases.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSupportCloudPlatform
 */
@interface GTLRCloudSupportQuery_CasesPatch : GTLRCloudSupportQuery

/** The resource name for the case. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  A list of attributes of the case object that should be updated as part of
 *  this request. Supported values are `priority`, `display_name`, and
 *  `subscriber_email_addresses`. If no fields are specified, all supported
 *  fields are updated. WARNING: If you do not provide a field mask, then you
 *  might accidentally clear some fields. For example, if you leave the field
 *  mask empty and do not provide a value for `subscriber_email_addresses`, then
 *  `subscriber_email_addresses` is updated to empty.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRCloudSupport_Case.
 *
 *  Update the specified case. Only a subset of fields can be updated. Here is
 *  an example of calling this endpoint using cURL: ```shell
 *  case="projects/some-project/cases/43595344" curl \\ --request PATCH \\
 *  --header "Authorization: Bearer $(gcloud auth print-access-token)" \\
 *  --header "Content-Type: application/json" \\ --data '{ "priority": "P1" }'
 *  \\ "https://cloudsupport.googleapis.com/v2/$case?updateMask=priority" ```
 *
 *  @param object The @c GTLRCloudSupport_Case to include in the query.
 *  @param name The resource name for the case.
 *
 *  @return GTLRCloudSupportQuery_CasesPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudSupport_Case *)object
                           name:(NSString *)name;

@end

/**
 *  Search cases using the specified query. Here is an example of calling this
 *  endpoint using cURL: ```shell parent="projects/some-project" curl \\
 *  --header "Authorization: Bearer $(gcloud auth print-access-token)" \\
 *  "https://cloudsupport.googleapis.com/v2/$parent/cases:search" ```
 *
 *  Method: cloudsupport.cases.search
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSupportCloudPlatform
 */
@interface GTLRCloudSupportQuery_CasesSearch : GTLRCloudSupportQuery

/**
 *  The maximum number of cases fetched with each request. The default page size
 *  is 10.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A token identifying the page of results to return. If unspecified, the first
 *  page is retrieved.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The fully qualified name of parent resource to search cases under. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  An expression written in filter language. A query uses the following fields
 *  with the operators equals (`=`) and `AND`: - `organization`: An organization
 *  name in the form `organizations/`. - `project`: A project name in the form
 *  `projects/`. - `state`: The accepted values are `OPEN` or `CLOSED`. -
 *  `priority`: The accepted values are `P0`, `P1`, `P2`, `P3`, or `P4`. You can
 *  specify multiple values for priority using the `OR` operator. For example,
 *  `priority=P1 OR priority=P2`. - `creator.email`: The email address of the
 *  case creator. - `billingAccount`: A billing account in the form
 *  `billingAccounts/` You must specify either `organization` or `project`. To
 *  search across `displayName`, `description`, and comments, use a global
 *  restriction with no keyword or operator. For example, `"my search"`. To
 *  search only cases updated after a certain date, use `update_time` restricted
 *  with that particular date, time, and timezone in ISO datetime format. For
 *  example, `update_time>"2020-01-01T00:00:00-05:00"`. `update_time` only
 *  supports the greater than operator (`>`). Examples: -
 *  `organization="organizations/123456789"` -
 *  `project="projects/my-project-id"` - `project="projects/123456789"` -
 *  `billing_account="billingAccounts/123456-A0B0C0-CUZ789"` -
 *  `organization="organizations/123456789" AND state=CLOSED` -
 *  `project="projects/my-project-id" AND creator.email="tester\@example.com"` -
 *  `project="projects/my-project-id" AND (priority=P0 OR priority=P1)`
 */
@property(nonatomic, copy, nullable) NSString *query;

/**
 *  Fetches a @c GTLRCloudSupport_SearchCasesResponse.
 *
 *  Search cases using the specified query. Here is an example of calling this
 *  endpoint using cURL: ```shell parent="projects/some-project" curl \\
 *  --header "Authorization: Bearer $(gcloud auth print-access-token)" \\
 *  "https://cloudsupport.googleapis.com/v2/$parent/cases:search" ```
 *
 *  @param parent The fully qualified name of parent resource to search cases
 *    under.
 *
 *  @return GTLRCloudSupportQuery_CasesSearch
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Download a file attachment on a case. Note: HTTP requests must append
 *  "?alt=media" to the URL. Here is an example of calling this endpoint using
 *  cURL: ```shell
 *  name="projects/some-project/cases/43594844/attachments/0674M00000WijAnZAJ"
 *  curl \\ --header "Authorization: Bearer $(gcloud auth print-access-token)"
 *  \\ "https://cloudsupport.googleapis.com/v2/$name:download?alt=media" ```
 *
 *  Method: cloudsupport.media.download
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSupportCloudPlatform
 */
@interface GTLRCloudSupportQuery_MediaDownload : GTLRCloudSupportQuery

/** The resource name of the attachment to be downloaded. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudSupport_Media.
 *
 *  Download a file attachment on a case. Note: HTTP requests must append
 *  "?alt=media" to the URL. Here is an example of calling this endpoint using
 *  cURL: ```shell
 *  name="projects/some-project/cases/43594844/attachments/0674M00000WijAnZAJ"
 *  curl \\ --header "Authorization: Bearer $(gcloud auth print-access-token)"
 *  \\ "https://cloudsupport.googleapis.com/v2/$name:download?alt=media" ```
 *
 *  @param name The resource name of the attachment to be downloaded.
 *
 *  @return GTLRCloudSupportQuery_MediaDownload
 */
+ (instancetype)queryWithName:(NSString *)name;

/**
 *  Fetches the requested resource data as a @c GTLRDataObject.
 *
 *  Download a file attachment on a case. Note: HTTP requests must append
 *  "?alt=media" to the URL. Here is an example of calling this endpoint using
 *  cURL: ```shell
 *  name="projects/some-project/cases/43594844/attachments/0674M00000WijAnZAJ"
 *  curl \\ --header "Authorization: Bearer $(gcloud auth print-access-token)"
 *  \\ "https://cloudsupport.googleapis.com/v2/$name:download?alt=media" ```
 *
 *  @param name The resource name of the attachment to be downloaded.
 *
 *  @return GTLRCloudSupportQuery_MediaDownload
 */
+ (instancetype)queryForMediaWithName:(NSString *)name;

@end

/**
 *  Create a file attachment on a case or Cloud resource. The attachment object
 *  must have the following fields set: filename. Here is an example of calling
 *  this endpoint using cURL: ```shell echo "This text is in a file I'm
 *  uploading using CSAPI." \\ > "./example_file.txt"
 *  case="projects/some-project/cases/43594844" curl \\ --header "Authorization:
 *  Bearer $(gcloud auth print-access-token)" \\ --data-binary
 *  \@"./example_file.txt" \\
 *  "https://cloudsupport.googleapis.com/upload/v2beta/$case/attachments?attachment.filename=uploaded_via_curl.txt"
 *  ```
 *
 *  Method: cloudsupport.media.upload
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudSupportCloudPlatform
 */
@interface GTLRCloudSupportQuery_MediaUpload : GTLRCloudSupportQuery

/**
 *  Required. The resource name of the case (or case parent) to which the
 *  attachment should be attached.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudSupport_Attachment.
 *
 *  Create a file attachment on a case or Cloud resource. The attachment object
 *  must have the following fields set: filename. Here is an example of calling
 *  this endpoint using cURL: ```shell echo "This text is in a file I'm
 *  uploading using CSAPI." \\ > "./example_file.txt"
 *  case="projects/some-project/cases/43594844" curl \\ --header "Authorization:
 *  Bearer $(gcloud auth print-access-token)" \\ --data-binary
 *  \@"./example_file.txt" \\
 *  "https://cloudsupport.googleapis.com/upload/v2beta/$case/attachments?attachment.filename=uploaded_via_curl.txt"
 *  ```
 *
 *  @param object The @c GTLRCloudSupport_CreateAttachmentRequest to include in
 *    the query.
 *  @param parent Required. The resource name of the case (or case parent) to
 *    which the attachment should be attached.
 *  @param uploadParameters The media to include in this query. Accepted MIME
 *    type: * / *
 *
 *  @return GTLRCloudSupportQuery_MediaUpload
 */
+ (instancetype)queryWithObject:(GTLRCloudSupport_CreateAttachmentRequest *)object
                         parent:(NSString *)parent
               uploadParameters:(nullable GTLRUploadParameters *)uploadParameters;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
