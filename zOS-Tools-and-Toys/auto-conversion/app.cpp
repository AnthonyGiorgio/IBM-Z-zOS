/**********************************************************************
* Copyright 2022 IBM Corp.
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing,
*  software distributed under the License is distributed on an
*  "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
*  either express or implied. See the License for the specific
*  language governing permissions and limitations under the
*  License.
*
* -----------------------------------------------------------------
*
* Disclaimer of Warranties:
*
*   The following enclosed code is sample code created by IBM
*   Corporation.  This sample code is not part of any standard
*   IBM product and is provided to you solely for the purpose
*   of assisting you in the development of your applications.
*   The code is provided "AS IS", without warranty of any kind.
*   IBM shall not be liable for any damages arising out of your
*   use of the sample code, even if they have been advised of
*   the possibility of such damages.
*
***********************************************************************/

#include <iostream>
#include <fcntl.h>
#include <_Nascii.h>

bool autoConversionStateIsOff() {
  return  (_CVTSTATE_OFF == __ae_autoconvert_state(_CVTSTATE_QUERY));
}

int main()
{
  std::cout << "Hello World\n";
  std::cout << "Auto-conversion is ";
  if (autoConversionStateIsOff())
    std::cout << "OFF\n";
  else
    std::cout << "ON\n";
  return 55;
}
