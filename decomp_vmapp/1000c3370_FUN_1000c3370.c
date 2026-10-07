
undefined8 FUN_1000c3370(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  pvVar3 = _malloc(0x4a0);
  uVar4 = 0;
  if (pvVar3 != (void *)0x0) {
    ___bzero(pvVar3,0x4a0);
    *(undefined4 *)((long)pvVar3 + 8) = 0x10;
    *(undefined4 *)((long)pvVar3 + 0xc) = *(undefined4 *)((long)param_2 + 4);
    *(undefined8 *)((long)pvVar3 + 0x38) = param_2[4];
    *(undefined8 *)((long)pvVar3 + 0x30) = param_2[3];
    *(undefined8 *)((long)pvVar3 + 0x28) = param_2[2];
    uVar1 = *param_2;
    *(undefined8 *)((long)pvVar3 + 0x20) = param_2[1];
    *(undefined8 *)((long)pvVar3 + 0x18) = uVar1;
    iVar2 = FUN_1000c2900(param_1,pvVar3);
    if (iVar2 == 0) {
      _free(pvVar3);
    }
    else {
      QWaitCondition::wakeOne();
      uVar4 = 1;
    }
  }
  return uVar4;
}

