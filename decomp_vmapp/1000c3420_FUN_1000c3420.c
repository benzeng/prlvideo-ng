
undefined8
FUN_1000c3420(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
             undefined1 param_5)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = _malloc(0x4a0);
  uVar3 = 0;
  if (pvVar2 != (void *)0x0) {
    ___bzero(pvVar2,0x4a0);
    *(undefined4 *)((long)pvVar2 + 8) = 9;
    *(undefined1 *)((long)pvVar2 + 0x18) = param_4;
    *(undefined1 *)((long)pvVar2 + 0x19) = param_5;
    *(undefined8 *)((long)pvVar2 + 0x1a) = param_2;
    *(undefined4 *)((long)pvVar2 + 0x22) = param_3;
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

