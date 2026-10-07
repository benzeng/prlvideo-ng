
undefined8 FUN_1000c3030(long param_1,undefined8 param_2,uint param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = _malloc(0x4a0);
  uVar3 = 0;
  if (pvVar2 != (void *)0x0) {
    ___bzero(pvVar2,0x4a0);
    *(undefined4 *)((long)pvVar2 + 8) = 7;
    *(undefined4 *)((long)pvVar2 + 0xc) = *(undefined4 *)(param_1 + 0x30);
    *(undefined8 *)((long)pvVar2 + 0x18) = param_2;
    *(uint *)((long)pvVar2 + 0x20) = param_3;
    _memcpy((void *)((long)pvVar2 + 0xa0),param_4,(ulong)param_3);
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

