
undefined1 FUN_100ab0990(long param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  void *pvVar6;
  
  do {
    do {
      uVar4 = *(uint *)(param_1 + 0x1c);
    } while ((uVar4 & 1) != 0);
    if ((uVar4 & 6) == 0) {
      return 1;
    }
    LOCK();
    uVar2 = *(uint *)(param_1 + 0x1c);
    if (uVar4 == uVar2) {
      *(uint *)(param_1 + 0x1c) = uVar4 | 1;
      uVar2 = uVar4;
    }
    UNLOCK();
  } while (uVar2 != uVar4);
  pvVar6 = *(void **)(param_1 + 8);
  if (pvVar6 == (void *)0x0) {
    pvVar6 = operator_new(0x80);
    FUN_100aaf550(pvVar6,0,0);
    *(undefined4 *)((long)pvVar6 + 0x78) = 1;
    *(void **)(param_1 + 8) = pvVar6;
  }
  LOCK();
  *(int *)((long)pvVar6 + 0x78) = *(int *)((long)pvVar6 + 0x78) + 1;
  UNLOCK();
  *(uint *)(param_1 + 0x1c) = uVar4;
  uVar5 = FUN_100aaf630(pvVar6,param_2);
  LOCK();
  piVar1 = (int *)((long)pvVar6 + 0x78);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((pvVar6 != (void *)0x0) && (iVar3 == 1)) {
    FUN_100aaf5b0(pvVar6);
    operator_delete(pvVar6);
  }
  return uVar5;
}

