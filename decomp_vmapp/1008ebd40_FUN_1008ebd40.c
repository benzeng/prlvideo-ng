
void FUN_1008ebd40(void)

{
  undefined8 uVar1;
  
  if (DAT_1011c3550 != 0) {
    FUN_1008eb750();
    uVar1 = _CFNotificationCenterGetDistributedCenter();
    _CFNotificationCenterRemoveEveryObserver(uVar1,DAT_1011c3550);
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","prl_time_machine_helper",2,"Time Machine running state listener was removed"
                   );
      return;
    }
  }
  return;
}

