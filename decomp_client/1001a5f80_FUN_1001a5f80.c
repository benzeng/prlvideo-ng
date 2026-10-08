
void FUN_1001a5f80(undefined8 param_1)

{
  undefined8 uVar1;
  
  (*DAT_1023119c8)(FUN_1001a5f00,0x2db,param_1);
  (*DAT_1023119c8)(FUN_1001a5f00,0x4b4,param_1);
  uVar1 = _CFNotificationCenterGetDistributedCenter();
  _CFNotificationCenterAddObserver(uVar1,param_1,FUN_1001a6080,&cf_com_apple_logoutInitiated,0,4);
  _CFNotificationCenterAddObserver(uVar1,param_1,FUN_1001a6090,&cf_com_apple_restartInitiated,0,4);
  _CFNotificationCenterAddObserver(uVar1,param_1,FUN_1001a60a0,&cf_com_apple_shutdownInitiated,0,4);
  _CFNotificationCenterAddObserver(uVar1,param_1,FUN_1001a60b0,&cf_com_apple_logoutContinued,0,4);
  _CFNotificationCenterAddObserver(uVar1,param_1,FUN_1001a60c0,&cf_com_apple_logoutCancelled,0,4);
  FUN_10005adb0(param_1);
  return;
}

