
void FUN_100cdbd60(long param_1)

{
  int iVar1;
  int iVar2;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0(*(undefined8 *)(param_1 + 0x418),*(undefined8 *)(param_1 + 0x428),"","hid",2,
                  "[CHIDMacHook] Restore mouse acceleration to mouse: %g trackpad: %g");
  }
  iVar1 = _NXOpenEventStatus();
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x410) != '\0') {
      iVar2 = _IOHIDSetAccelerationWithKey
                        (*(undefined8 *)(param_1 + 0x418),iVar1,&cf_HIDMouseAcceleration);
      if (iVar2 != 0) {
        FUN_100df99c0(*(undefined8 *)(param_1 + 0x418),"","hid",0,
                      "[CHIDMacHook] Can\'t restore mouse acceleration to %g, err: 0x%x");
      }
    }
    if (*(char *)(param_1 + 0x420) != '\0') {
      iVar2 = _IOHIDSetAccelerationWithKey
                        (*(undefined8 *)(param_1 + 0x428),iVar1,&cf_HIDTrackpadAcceleration);
      if (iVar2 != 0) {
        FUN_100df99c0(*(undefined8 *)(param_1 + 0x428),"","hid",0,
                      "[CHIDMacHook] Can\'t restore trackpad acceleration to %g, err: 0x%x");
      }
    }
    _NXCloseEventStatus(iVar1);
    *(undefined1 *)(param_1 + 0x410) = 0;
    *(undefined8 *)(param_1 + 0x418) = 0;
    *(undefined1 *)(param_1 + 0x420) = 0;
    *(undefined8 *)(param_1 + 0x428) = 0;
    return;
  }
  FUN_100df99c0("","hid",0,"[CHIDMacHook] Restore mouse acceleration: can\'t get handle");
  return;
}

