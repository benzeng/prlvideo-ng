
undefined1 FUN_100330ac0(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar4 = FUN_100319390(uVar5);
  if ((lVar4 != 0) && (iVar3 = FUN_10018f860(lVar4), iVar3 == 0xf)) {
    return 0;
  }
  QMutex::lock();
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
  if (plVar1 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x98))();
  }
  QMutex::unlock();
  return uVar2;
}

