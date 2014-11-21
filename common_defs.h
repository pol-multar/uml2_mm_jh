//=======================================================================
// Basic C++: Common definitions for test programs
//-----------------------------------------------------------------------
// Jean-Paul Rigault --- Copyright 2003-2007
// $Id: common_defs.h,v 1.5 2008/09/20 10:46:05 jpr Exp $
//=======================================================================

/*! 
 * \file common_defs.h
 *
 * \brief Common definitions for test programs.
 */


#ifndef _COMMON_DEFS_H_
#define _COMMON_DEFS_H_

#include <cassert>
#include <iostream>
#include <cstdlib>
using namespace std;

// Useful test macros

/*!
 * \brief Print an expression followed by the result of its evaluation.
 *
 * \param expr the expression to print and evaluate
 */
#define OUT(expr) cout << #expr" : " << (expr) << endl

/*!
 * \brief Print an expression followed by the result of its evaluation.
 *
 * This is identical to #OUT() but it inserts a newline between the expression
 * text and the result.
 *
 * \param expr the expression to print and evaluate
 */
#define OUTNL(expr) cout << #expr" : \n" << (expr) << endl

/*!
 * \brief Print an instruction and execute it.
 *
 * \param instr the instruction to print and execute
 */
#define EXEC(instr) (cout << #instr";" << endl), (instr)

/*!
 * \brief Print a message.
 *
 * \param msg the message to print
 */
#define MSG(msg) cout << "\n********* "#msg" *********\n" << endl; 

/*!
 * \brief Terminate the program.
 * 
 * If running in a Windows Console, we need to pause, asking for some
 * character, in order that the window remains visible. As it is not so easy to
 * differentiate running Cygwin in line mode or through Dev-C++ or Visual
 * Studio, we always call pause: thus we may get a <em>PAUSE: command not found</em>
 * message under Cygwin and Unixes.
 *
 * \param retcode the code the program returns to its parent
 */
inline void pause_terminate(int retcode = 0) 
{
    system("PAUSE");
    exit(retcode);
}


#endif
