
undefined1 FUN_1001c5c90(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  
  DAT_102312118 = param_1[3];
  DAT_102312110 = param_1[2];
  DAT_102312100 = *param_1;
  DAT_102312108 = param_1[1];
  DAT_1023120f8 = 1;
  DAT_102312130 = _CFRunLoopGetCurrent();
  if (DAT_102312130 == 0) {
    if (DAT_10230ffd0 < 1) {
      DAT_1023120f8 = 0;
      return 0;
    }
    pcVar4 = "CFRunLoopGetCurrent() err";
LAB_1001c5e62:
    FUN_100df99c0("AIRCTL","prl_client_app",1,pcVar4);
    DAT_1023120f8 = 0;
    return 0;
  }
  DAT_102312138 = _IONotificationPortCreate(*(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0);
  if (DAT_102312138 == 0) {
    if (DAT_10230ffd0 < 1) {
      DAT_1023120f8 = 0;
      return 0;
    }
    pcVar4 = "IONotificationPortCreate() err";
    DAT_102312138 = 0;
    goto LAB_1001c5e62;
  }
  DAT_102312140 = _IONotificationPortGetRunLoopSource(DAT_102312138);
  if (DAT_102312140 == 0) {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("AIRCTL","prl_client_app",1,"IONotificationPortGetRunLoopSource() err");
    }
    goto LAB_1001c5f06;
  }
  uVar1 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_1021e1950;
  _CFRunLoopAddSource(DAT_102312130,DAT_102312140,uVar1);
  lVar3 = _IOServiceNameMatching("AppleIRController");
  lVar5 = 0;
  if (lVar3 == 0) {
LAB_1001c5eac:
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("AIRCTL","prl_client_app",1,"IOServiceNameMatching() err, name=\"%s\"",
                    "AppleIRController");
    }
  }
  else {
    lVar5 = 0;
    iVar2 = _IOServiceAddMatchingNotification
                      (DAT_102312138,"IOServiceFirstMatch",lVar3,FUN_1001c64e0,0,&DAT_102312148);
    if (iVar2 == 0) {
      FUN_1001c64e0(0,DAT_102312148);
      lVar3 = _IOServiceNameMatching("AppleIRController");
      lVar5 = 1;
      if (lVar3 == 0) goto LAB_1001c5eac;
      iVar2 = _IOServiceAddMatchingNotification
                        (DAT_102312138,"IOServiceTerminate",lVar3,FUN_1001c6ee0,0,&DAT_10231214c);
      lVar5 = 1;
      if (iVar2 == 0) {
        FUN_1001c6ee0(0,DAT_10231214c);
        DAT_1023120f8 = 1;
        return 1;
      }
    }
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("AIRCTL","prl_client_app",1,
                    "IOServiceAddMatchingNotification() err %#x, notifyK=%u",iVar2,lVar5);
    }
  }
  if (lVar5 != 0) {
    _IOObjectRelease(DAT_102312148);
  }
  _CFRunLoopRemoveSource(DAT_102312130,DAT_102312140,uVar1);
LAB_1001c5f06:
  _IONotificationPortDestroy(DAT_102312138);
  DAT_1023120f8 = 0;
  return 0;
}

