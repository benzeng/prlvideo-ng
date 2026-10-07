
undefined8 FUN_1003ed930(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  size_t sVar4;
  
  uVar2 = FUN_1003eea40(*(undefined8 *)(param_1 + 0x720));
  if ((int)uVar2 == 0) {
    FUN_1003f1380(*(long *)(param_1 + 0x720),param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x18);
    sVar4 = (long)iVar1 * 0xb + 4;
    pvVar3 = _malloc(sVar4);
    *(void **)(param_1 + 0x10) = pvVar3;
    if (pvVar3 != (void *)0x0) {
      ___bzero(pvVar3,sVar4);
      uVar2 = FUN_1003f1120(*(undefined8 *)(param_1 + 0x720),pvVar3,iVar1);
      return uVar2;
    }
    *(undefined4 *)(param_1 + 8) = 1;
    uVar2 = 0xfffffff0;
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(long *)(param_1 + 0x720) + 0x1fe8);
  }
  return uVar2;
}

