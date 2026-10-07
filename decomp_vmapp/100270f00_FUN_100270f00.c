
void FUN_100270f00(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  
  QMutex::lock();
  uVar1 = *(uint *)(param_1 + 0x1fc);
  lVar3 = FUN_100257d80(param_1);
  plVar4 = (long *)(param_1 + 0xd0);
  if (*(long **)(param_1 + 200) != (long *)0x0) {
    plVar4 = *(long **)(param_1 + 200);
  }
  uVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);
  *(undefined4 *)(lVar3 + 0x2ded8 + (ulong)uVar1 * 0x538) = uVar2;
  QMutex::unlock();
  return;
}

