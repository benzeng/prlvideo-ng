
void FUN_100d72dd0(void)

{
  undefined8 uVar1;
  
  if (DAT_1023188e8 != 0) {
    FUN_100d727e0();
    uVar1 = _CFNotificationCenterGetDistributedCenter();
    _CFNotificationCenterRemoveEveryObserver(uVar1,DAT_1023188e8);
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_time_machine_helper",2,"Time Machine running state listener was removed"
                   );
      return;
    }
  }
  return;
}

