
ulong FUN_100acb590(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 0x58);
  QMutex::unlock();
  uVar2 = 0;
  uVar3 = 0;
  if (iVar1 == 1) {
    uVar3 = FUN_100ad44f0(*(undefined8 *)(param_1 + 0x78),param_2);
    uVar2 = uVar3 & 0xffffffff00000000;
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar2 | uVar3;
}

