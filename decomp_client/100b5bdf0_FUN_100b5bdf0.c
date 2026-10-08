
void FUN_100b5bdf0(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int local_34;
  long local_30;
  
  uVar3 = _CFRunLoopGetCurrent();
  local_30 = 0;
  local_34 = 0;
  uVar4 = FUN_100b5bf10(FUN_100b5c250,uVar3);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  iVar2 = _IORegisterForSystemPower(param_1,&local_30,FUN_100b5c2b0,&local_34);
  *(int *)(param_1 + 0x28) = iVar2;
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar5 = _IONotificationPortGetRunLoopSource(local_30);
    if (lVar5 == 0) {
      bVar1 = false;
    }
    else {
      uVar4 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_1021e1950;
      _CFRunLoopAddSource(uVar3,lVar5,uVar4);
      *(undefined8 *)(param_1 + 0x20) = uVar3;
      FUN_100b5ce80(param_1);
      _CFRunLoopRun();
      _CFRunLoopRemoveSource(*(undefined8 *)(param_1 + 0x20),lVar5,uVar4);
      bVar1 = true;
    }
  }
  if (local_34 != 0) {
    _IODeregisterForSystemPower(&local_34);
  }
  if (local_30 != 0) {
    _IONotificationPortDestroy();
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    _IOServiceClose();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x20))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (bVar1) {
    FUN_100b5cea0(param_1);
  }
  return;
}

