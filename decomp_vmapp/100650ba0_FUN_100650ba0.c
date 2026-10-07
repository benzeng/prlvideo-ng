
undefined8 * FUN_100650ba0(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
  pvVar4 = operator_new(0x30);
  *(undefined4 *)((long)pvVar4 + 0x20) = *param_3;
  piVar1 = *(int **)(param_3 + 2);
  *(int **)((long)pvVar4 + 0x28) = piVar1;
  if (*piVar1 != -1) {
    if (*piVar1 == 0) {
      QListData::detach((int)(long *)((long)pvVar4 + 0x28));
      lVar2 = *(long *)((long)pvVar4 + 0x28);
      lVar5 = (long)*(int *)(lVar2 + 8);
      lVar3 = *(long *)(param_3 + 2);
      if ((lVar3 + (long)*(int *)(lVar3 + 8) * 8 != lVar2 + lVar5 * 8) &&
         (lVar6 = *(int *)(lVar2 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar5 * 8),
                (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar6 * 8);
      }
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  *(undefined4 *)((long)pvVar4 + 0x20) = *param_3;
  *param_1 = pvVar4;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}

