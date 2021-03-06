/**
 * Copyright (c) 2012 Muh Hon Cheng
 * Created by honcheng on 3/4/12.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining 
 * a copy of this software and associated documentation files (the 
 * "Software"), to deal in the Software without restriction, including 
 * without limitation the rights to use, copy, modify, merge, publish, 
 * distribute, sublicense, and/or sell copies of the Software, and to 
 * permit persons to whom the Software is furnished to do so, subject 
 * to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be 
 * included in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT 
 * WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR 
 * PURPOSE AND NONINFRINGEMENT. IN NO EVENT 
 * SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE 
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, 
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR 
 * IN CONNECTION WITH THE SOFTWARE OR 
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * 
 * @author 		Muh Hon Cheng <honcheng@gmail.com>
 * @copyright	2012	Muh Hon Cheng
 * @version
 * 
 */

#import <UIKit/UIKit.h>

typedef enum
{
    DemoTableViewStyle_Cyan = 0,
    DemoTableViewStyle_Green = 1,
    DemoTableViewStyle_Purple = 2,
    DemoTableViewStyle_Yellow = 3,
    DemoTableViewStyle_2Colors = 4,
    DemoTableViewStyle_3Colors = 5,
    DemoTableViewStyle_DottedLine = 6,
    DemoTableViewStyle_Dashes = 7,
    DemoTableViewStyle_GradientVertical = 8,
    DemoTableViewStyle_GradientHorizontal = 9,
    DemoTableViewStyle_GradientDiagonalTopLeftToBottomRight = 10,
    DemoTableViewStyle_GradientDiagonalBottomLeftToTopRight = 11,
} DemoTableViewStyle;

@interface DemoTableViewController : UITableViewController
@property (assign, nonatomic) DemoTableViewStyle demoTableViewStyle;
@end
