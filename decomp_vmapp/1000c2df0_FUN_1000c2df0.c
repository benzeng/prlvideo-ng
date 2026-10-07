
undefined8 FUN_1000c2df0(long param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = _malloc(0x4a0);
  uVar3 = 0;
  if (pvVar2 != (void *)0x0) {
    ___bzero(pvVar2,0x4a0);
    *(undefined4 *)((long)pvVar2 + 8) = 2;
    *(undefined4 *)((long)pvVar2 + 0xc) = *(undefined4 *)(param_1 + 0x30);
    iVar1 = FUN_1000c2900(param_1,pvVar2);
    if (iVar1 == 0) {
      _free(pvVar2);
    }
    else {
      QWaitCondition::wakeOne();
      uVar3 = 1;
    }
  }
  return uVar3;
}

