
void FUN_10039f470(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1003b0ad0(param_1 + 0x20);
  bVar1 = FUN_1003e5e80(uVar2);
  if (bVar1 != 0) {
    CAuthorizationLock::setLockState(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),0);
  }
  uVar2 = FUN_1003b0ad0(param_1 + 0x20);
  FUN_1003e5c00(uVar2,bVar1 ^ 1);
  return;
}

