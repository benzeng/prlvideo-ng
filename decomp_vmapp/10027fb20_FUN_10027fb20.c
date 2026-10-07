
undefined4 FUN_10027fb20(undefined8 param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *local_30;
  
  uVar4 = 0;
  lVar5 = 0x31c40;
  do {
    FUN_100280150(&local_30,uVar4 & 0xffff);
    plVar2 = *(long **)(local_30[2] + 8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
      lVar3 = FUN_100257d80(param_1);
      LOCK();
      *(undefined4 *)(lVar3 + lVar5) = 0;
      UNLOCK();
    }
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 4;
  } while ((long)uVar4 < 0x10);
  lVar5 = FUN_100257d80(param_1);
  LOCK();
  uVar1 = *(undefined4 *)(lVar5 + 0x31c3c);
  *(undefined4 *)(lVar5 + 0x31c3c) = 0;
  UNLOCK();
  return uVar1;
}

