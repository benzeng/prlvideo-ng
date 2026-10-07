
void FUN_100641dc0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = _CFNotificationCenterGetLocalCenter();
    _CFNotificationCenterRemoveObserver(uVar1,param_1,0,param_2);
    _MDQueryStop(param_2);
    return;
  }
  return;
}

