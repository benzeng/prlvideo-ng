
undefined8 FUN_1000c30e0(long *param_1,undefined8 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  
  pvVar2 = _malloc(0x4a0);
  uVar4 = 0;
  if (pvVar2 != (void *)0x0) {
    ___bzero(pvVar2,0x4a0);
    *(undefined4 *)((long)pvVar2 + 8) = 10;
    *(int *)((long)pvVar2 + 0xc) = (int)param_1[6];
    _memcpy((void *)((long)pvVar2 + 0x18),param_3,0x80);
    iVar1 = FUN_1000c2900(param_1,pvVar2);
    if (iVar1 == 0) {
      _free(pvVar2);
    }
    else {
      QWaitCondition::wakeOne();
      lVar3 = 0;
      uVar4 = 1;
      do {
        if (*(int *)((long)param_3 + lVar3 * 4) == 2) {
          return 1;
        }
        if (*(int *)((long)param_3 + (lVar3 + 1U & 0xffffffff) * 4) == 2) {
          return 1;
        }
        if (*(int *)((long)param_3 + (lVar3 + 2U & 0xffffffff) * 4) == 2) {
          return 1;
        }
        if (*(int *)((long)param_3 + (lVar3 + 3U & 0xffffffff) * 4) == 2) {
          return 1;
        }
        lVar3 = lVar3 + 4;
      } while ((uint)lVar3 < 0x20);
      (**(code **)(*param_1 + 0x18))(param_1,2);
      if (*(int *)((long)param_1 + 0x34) == 0) {
        FUN_1000b4150(param_1[5],2,0xffffffff);
      }
    }
  }
  return uVar4;
}

