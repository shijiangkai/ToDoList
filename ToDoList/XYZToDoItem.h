//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by 史江凯 on 15/5/6.
//
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *createdDate;

@end
