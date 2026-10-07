
undefined8 FUN_1000c2d20(long *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  
  pvVar3 = _malloc(0x4a0);
  uVar5 = 0;
  if (pvVar3 != (void *)0x0) {
    ___bzero(pvVar3,0x4a0);
    *(undefined4 *)((long)pvVar3 + 8) = 1;
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar1 != 0) {
      lVar4 = 0;
      do {
        *(undefined4 *)((long)pvVar3 + lVar4 * 4 + 0x18) = 4;
        uVar2 = (**(code **)(*param_1 + 0x28))(param_1);
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < uVar2);
    }
    iVar1 = FUN_1000c2900(param_1,pvVar3);
    if (iVar1 == 0) {
      _free(pvVar3);
    }
    else {
      QWaitCondition::wakeOne();
      (**(code **)(*param_1 + 0x18))(param_1,2);
      uVar5 = 1;
      if (*(int *)((long)param_1 + 0x34) == 0) {
        FUN_1000b4150(param_1[5],2,0xffffffff);
      }
    }
  }
  return uVar5;
}

