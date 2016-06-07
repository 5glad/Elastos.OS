
#ifndef __ELASTOS_DROID_SERVER_TELECOM_CCALLACTIVITY_H__
#define __ELASTOS_DROID_SERVER_TELECOM_CCALLACTIVITY_H__

#include "_Elastos_Droid_Server_Telecom_CCallActivity.h"
#include "elastos/droid/server/telecom/CallActivity.h"

namespace Elastos {
namespace Droid {
namespace Server {
namespace Telecom {

/**
 * Activity that handles system CALL actions and forwards them to {@link CallReceiver}.
 * Handles all three CALL action types: CALL, CALL_PRIVILEGED, and CALL_EMERGENCY.
 *
 * Pre-L, the only way apps were were allowed to make outgoing emergency calls was the
 * ACTION_CALL_PRIVILEGED action (which requires the system only CALL_PRIVILEGED permission).
 *
 * In L, any app that has the CALL_PRIVILEGED permission can continue to make outgoing emergency
 * calls via ACTION_CALL_PRIVILEGED.
 *
 * In addition, the default dialer (identified via
 * {@link android.telecom.TelecomManager#getDefaultPhoneApp()} will also be granted the ability to
 * make emergency outgoing calls using the CALL action. In order to do this, it must call
 * startActivityForResult on the CALL intent to allow its package name to be passed to
 * {@link CallActivity}. Calling startActivity will continue to work on all non-emergency numbers
 * just like it did pre-L.
 */
CarClass(CCallActivity)
    , public CallActivity
{
public:
    CAR_OBJECT_DECL()
};

} // namespace Telecom
} // namespace Server
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_SERVER_TELECOM_CCALLACTIVITY_H__
