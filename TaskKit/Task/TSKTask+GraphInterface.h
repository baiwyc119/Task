//
//  TSKTask+GraphInterface.h
//  TaskKit
//
//  Created by Prachi Gauriar on 10/14/2014.
//  Copyright (c) 2014 Two Toasters, LLC.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import <TaskKit/TSKTask.h>


/*!
 The GraphInterface category of TSKTask declares a messages that must be exposed so that TSKGraphs
 can modify the internal state of their TSKTasks.
 */
@interface TSKTask (GraphInterface)

@property (nonatomic, weak, readwrite) TSKGraph *graph;

/*!
 @abstract Returns a recursive description of the task and its dependent tasks starting at the
     specified depth.
 @param depth The number of levels deep this task is in the recursive description.
 @result A recursive description of the task and its dependent tasks starting at the specified depth.
 */
- (NSString *)recursiveDescriptionWithDepth:(NSUInteger)depth;

/*!
 @abstract Indicates to the receiver that it has a prerequisite.
 @discussion This has the effect of transitioning the receiver from the ready state to the pending state.
 */
- (void)didAddPrerequisiteTask;

@end