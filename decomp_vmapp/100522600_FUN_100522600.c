
long * FUN_100522600(long *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *extraout_RAX;
  void *pvVar5;
  ulong uVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  
  pvVar9 = (void *)*param_1;
  uVar6 = (param_1[1] - (long)pvVar9 >> 3) + 1;
  if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(param_1[2] - (long)pvVar9 >> 3) < 0xfffffffffffffff) {
    uVar11 = param_1[2] - (long)pvVar9 >> 2;
    if (uVar11 < uVar6) {
      uVar11 = uVar6;
    }
    pvVar7 = (void *)param_1[1];
    lVar10 = (long)pvVar7 - (long)pvVar9 >> 3;
    uVar6 = 0;
    pvVar5 = (void *)0x0;
    if (uVar11 == 0) goto LAB_1005226a9;
  }
  else {
    pvVar7 = (void *)param_1[1];
    lVar10 = (long)pvVar7 - (long)pvVar9 >> 3;
    uVar11 = 0x1fffffffffffffff;
  }
  uVar6 = uVar11;
  pvVar5 = operator_new(uVar6 * 8);
LAB_1005226a9:
  lVar3 = *param_2;
  *(long *)((long)pvVar5 + lVar10 * 8) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    param_2 = (long *)(ulong)*puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    pvVar9 = (void *)*param_1;
    pvVar7 = (void *)param_1[1];
  }
  pvVar8 = (void *)((long)pvVar5 + lVar10 * 8);
  pvVar12 = pvVar7;
  if (pvVar7 != pvVar9) {
    do {
      lVar3 = *(long *)((long)pvVar7 + -8);
      pvVar7 = (void *)((long)pvVar7 + -8);
      *(long *)((long)pvVar8 + -8) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        param_2 = (long *)(ulong)*puVar1;
        *puVar1 = *puVar1 + 1;
        UNLOCK();
      }
      pvVar8 = (void *)((long)pvVar8 + -8);
    } while (pvVar9 != pvVar7);
    pvVar7 = (void *)param_1[1];
    pvVar12 = (void *)*param_1;
  }
  *param_1 = (long)pvVar8;
  param_1[1] = (long)pvVar5 + lVar10 * 8 + 8;
  param_1[2] = (long)((long)pvVar5 + uVar6 * 8);
  for (; pvVar7 != pvVar12; pvVar7 = (void *)((long)pvVar7 + -8)) {
    plVar4 = *(long **)((long)pvVar7 + -8);
    if (plVar4 != (long *)0x0) {
      LOCK();
      puVar1 = (uint *)(plVar4 + 1);
      uVar2 = *puVar1;
      param_2 = (long *)(ulong)uVar2;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar2 == 1) {
        param_2 = (long *)(**(code **)(*plVar4 + 0x10))();
      }
    }
  }
  if (pvVar12 != (void *)0x0) {
    operator_delete(pvVar12);
    return extraout_RAX;
  }
  return param_2;
}

