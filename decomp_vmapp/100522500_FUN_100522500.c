
void FUN_100522500(long *param_1,ulong param_2)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  
  pvVar8 = (void *)*param_1;
  if ((ulong)(param_1[2] - (long)pvVar8 >> 3) < param_2) {
    pvVar6 = (void *)param_1[1];
    pvVar5 = (void *)0x0;
    if (param_2 != 0) {
      pvVar5 = operator_new(param_2 * 8);
    }
    pvVar2 = (void *)((long)pvVar5 + ((long)pvVar6 - (long)pvVar8 >> 3) * 8);
    pvVar7 = pvVar2;
    if (pvVar6 != pvVar8) {
      do {
        lVar3 = *(long *)((long)pvVar6 + -8);
        pvVar6 = (void *)((long)pvVar6 + -8);
        *(long *)((long)pvVar7 + -8) = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        pvVar7 = (void *)((long)pvVar7 + -8);
      } while (pvVar8 != pvVar6);
      pvVar8 = (void *)*param_1;
      pvVar6 = (void *)param_1[1];
    }
    *param_1 = (long)pvVar7;
    param_1[1] = (long)pvVar2;
    param_1[2] = (long)((long)pvVar5 + param_2 * 8);
    for (; pvVar6 != pvVar8; pvVar6 = (void *)((long)pvVar6 + -8)) {
      plVar4 = *(long **)((long)pvVar6 + -8);
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
    }
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
      return;
    }
  }
  return;
}

