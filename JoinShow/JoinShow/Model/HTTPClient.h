//
//  HTTPClient.h
//  KeyLinks2
//
//  Created by Heaven on 14-3-12.
//  Copyright (c) 2014年 Heaven. All rights reserved.
//
// 网络请求类
#import <UIKit/UIKit.h>
#import "RequestHelper.h"

@interface HTTPClient : RequestHelper
AS_SINGLETON(HTTPClient)
@end

/////////
@interface HTTPClient2 : RequestHelper
AS_SINGLETON(HTTPClient2)
@end

@interface HTTPClient3 : DownloadHelper
AS_SINGLETON(HTTPClient3)
@end
