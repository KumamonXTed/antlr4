/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

//
//  main.cpp
//  antlr4-cpp-demo
//
//  Created by Mike Lischke on 13.03.16.
//

#include <iostream>

#include "antlr4-runtime.h"
#include "TLexer.h"
#include "TParser.h"
#include "ObjectiveCparser.h"
#include "ObjectiveCLexer.h"
#import <CoreFoundation/CoreFoundation.h>

using namespace antlrcpptest;
using namespace antlr4;

using namespace antlrobjc;



int main(int , const char **) {
//    
//    {
//        
//    
//  ANTLRInputStream input(u8"🍴 = 🍐 + \"😎\";(((x * π))) * µ + ∰; a + (x * (y ? 0 : 1) + z);");
//  TLexer lexer(&input);
//  CommonTokenStream tokens(&lexer);
//
//  tokens.fill();
//  for (auto token : tokens.getTokens()) {
//    std::cout << token->toString() << std::endl;
//  }
//
//  TParser parser(&tokens);
//  tree::ParseTree *tree = parser.main();
//
//  std::cout << tree->toStringTree(&parser) << std::endl;
//    }
    
    
    {
        std::cout << "start" << std::endl;
        CFAbsoluteTime startTime = CFAbsoluteTimeGetCurrent();
        ANTLRFileStream input("/Users/away/Downloads/CocoaLumberjack-master/Classes/DDTTYLogger.m");
        ObjectiveCLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
//        tokens.fill();
//        for (auto token : tokens.getTokens()) {
//            std::cout << token->toString() << std::endl;
//        }
        ObjectiveCParser parser(&tokens);
        tree::ParseTree *tree = parser.translationUnit();
//        std::cout << tree->toStringTree(&parser) << std::endl;
        CFAbsoluteTime endTime = CFAbsoluteTimeGetCurrent();
        
        std::cout << endTime - startTime << std::endl;
    }
  return 0;
}
