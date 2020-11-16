/** @file
 *
 *  @course CS1521
 *  @section 1
 *  @term Fall 2020
 *
 *  Header file for an object thrown on violation of precondition.
 *
 *  Adapted from page 250 in Carrano 7e.
 *
 *  @author Frank M. Carrano
 *  @author Timothy Henry
 *  @author Steve Holtz
 *
 *  @date 7 Nov 2020
 *
 *  @version 7.0 */

#ifndef PRECOND_VIOLATED_EXCEP_
#define PRECOND_VIOLATED_EXCEP_

#include <stdexcept>
#include <string>

/** @class PrecondViolatedExcep PrecondViolatedExcep.h "PrecondViolatedExcep.h"
 *
 *  Specification for an object thrown on violation of precondition. */
class PrecondViolatedExcep : public std::logic_error {
public:
   explicit PrecondViolatedExcep(const std::string& message = "");

   virtual ~PrecondViolatedExcep() noexcept = default;
};

#endif
