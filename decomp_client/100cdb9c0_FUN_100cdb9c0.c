
void FUN_100cdb9c0(long param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QVariant local_68;
  QArrayData *local_58;
  QVariant local_50;
  QVariant local_40;
  undefined1 local_29;
  
  if ((*(char *)(param_1 + 0x410) != '\0') || (*(char *)(param_1 + 0x420) != '\0')) {
    if (DAT_10230ffd0 < 2) {
      return;
    }
    FUN_100df99c0(*(undefined8 *)(param_1 + 0x418),*(undefined8 *)(param_1 + 0x428),"","hid",2,
                  "[CHIDMacHook] Mouse acceleration already disabled, mouse: %g trackpad: %g");
    return;
  }
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  QSettings::QSettings((QSettings *)&local_50,(QObject *)0x0);
  local_58 = (QArrayData *)QString::fromAscii_helper("HID Host Hook/MouseAcceleration",0x1f);
  QVariant::QVariant(&local_68,-1);
  QSettings::value((QString *)&local_40,&local_50);
  uVar5 = QVariant::toDouble((bool *)&local_40);
  QVariant::~QVariant(&local_40);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cdbadc;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cdbadc:
  QSettings::~QSettings((QSettings *)&local_50);
  iVar1 = _NXOpenEventStatus();
  if (iVar1 == 0) {
    FUN_100df99c0("","hid",0,"[CHIDMacHook] Disable mouse acceleration: can\'t get handle");
    return;
  }
  iVar2 = _IOHIDGetAccelerationWithKey
                    (iVar1,&cf_HIDMouseAcceleration,(undefined8 *)(param_1 + 0x418));
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x410) = 1;
    iVar2 = _IOHIDSetAccelerationWithKey(uVar5,iVar1,&cf_HIDMouseAcceleration);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x410) = 0;
      pcVar3 = "[CHIDMacHook] Can\'t disable mouse acceleration, err: 0x%x";
      uVar4 = 0;
      goto LAB_100cdbbaa;
    }
  }
  else if (1 < DAT_10230ffd0) {
    pcVar3 = "[CHIDMacHook] No mouse found (err: 0x%x)";
    uVar4 = 2;
LAB_100cdbbaa:
    FUN_100df99c0("","hid",uVar4,pcVar3);
  }
  iVar2 = _IOHIDGetAccelerationWithKey
                    (iVar1,&cf_HIDTrackpadAcceleration,(undefined8 *)(param_1 + 0x428));
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x420) = 1;
    iVar2 = _IOHIDSetAccelerationWithKey(uVar5,iVar1,&cf_HIDTrackpadAcceleration);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x420) = 0;
      pcVar3 = "[CHIDMacHook] Can\'t disable trackpad acceleration, err: 0x%x";
      uVar5 = 0;
      goto LAB_100cdbc38;
    }
  }
  else {
    if (DAT_10230ffd0 < 2) goto LAB_100cdbc77;
    pcVar3 = "[CHIDMacHook] No trackpad found (err: 0x%x)";
    uVar5 = 2;
LAB_100cdbc38:
    FUN_100df99c0("","hid",uVar5,pcVar3);
  }
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0(*(undefined8 *)(param_1 + 0x418),*(undefined8 *)(param_1 + 0x428),"","hid",2,
                  "[CHIDMacHook] Disable mouse acceleration, mouse: %g trackpad: %g");
  }
LAB_100cdbc77:
  _NXCloseEventStatus(iVar1);
  return;
}

