//=========================================================================
// Copyright (C) 2012 The Elastos Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//=========================================================================

#include "elastos/droid/widget/CTimePickerClockDelegateHelper.h"

namespace Elastos {
namespace Droid {
namespace Widget {

CAR_SINGLETON_IMPL(CTimePickerClockDelegateHelper)

CAR_INTERFACE_IMPL(CTimePickerClockDelegateHelper, Singleton, ITimePickerClockDelegateHelper)

ECode CTimePickerClockDelegateHelper::GetAmPmStrings(
    /* [in] */ IContext* context,
    /* [out, callee] */ ArrayOf<String>** result)
{
    VALIDATE_NOT_NULL(result);
    *result = TimePickerClockDelegate::GetAmPmStrings(context);
    REFCOUNT_ADD(*result);
    return NOERROR;
}

} // namespace Widget
} // namespace Droid
} // namespace Elastos
