
void FUN_100340bc0(long *param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  void *pvVar11;
  void *pvVar12;
  
  pvVar12 = (void *)*param_1;
  uVar6 = (param_1[1] - (long)pvVar12 >> 4) + 1;
  if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(param_1[2] - (long)pvVar12 >> 4) < 0x7ffffffffffffff) {
    uVar10 = param_1[2] - (long)pvVar12 >> 3;
    if (uVar10 < uVar6) {
      uVar10 = uVar6;
    }
    pvVar9 = (void *)param_1[1];
    lVar8 = (long)pvVar9 - (long)pvVar12 >> 4;
    uVar6 = 0;
    pvVar7 = (void *)0x0;
    if (uVar10 == 0) goto LAB_100340c7b;
  }
  else {
    pvVar9 = (void *)param_1[1];
    lVar8 = (long)pvVar9 - (long)pvVar12 >> 4;
    uVar10 = 0xfffffffffffffff;
  }
  uVar6 = uVar10;
  pvVar7 = operator_new(uVar6 << 4);
LAB_100340c7b:
  lVar8 = lVar8 * 0x10;
  pvVar11 = (void *)((long)pvVar7 + lVar8);
  *(undefined4 *)((long)pvVar7 + lVar8) = *param_2;
  uVar3 = param_2[1];
  uVar10 = (ulong)uVar3;
  *(uint *)((long)pvVar7 + lVar8 + 4) = uVar3;
  puVar4 = operator_new__(uVar10 * 4);
  *(undefined4 **)((long)pvVar7 + lVar8 + 8) = puVar4;
  if (uVar3 != 0) {
    puVar5 = *(undefined4 **)(param_2 + 2);
    do {
      *puVar4 = *puVar5;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (pvVar9 != pvVar12) {
    do {
      *(undefined4 *)((long)pvVar11 + -0x10) = *(undefined4 *)((long)pvVar9 + -0x10);
      *(undefined4 *)((long)pvVar11 + -0xc) = *(undefined4 *)((long)pvVar9 + -0xc);
      uVar3 = *(uint *)((long)pvVar9 + -0xc);
      uVar10 = (ulong)uVar3;
      puVar4 = operator_new__(uVar10 * 4);
      pvVar1 = (void *)((long)pvVar9 + -0x10);
      *(undefined4 **)((long)pvVar11 + -8) = puVar4;
      if (uVar3 != 0) {
        puVar5 = *(undefined4 **)((long)pvVar9 + -8);
        do {
          *puVar4 = *puVar5;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      pvVar11 = (void *)((long)pvVar11 + -0x10);
      pvVar9 = pvVar1;
    } while (pvVar1 != pvVar12);
    pvVar12 = (void *)*param_1;
    pvVar9 = (void *)param_1[1];
  }
  *param_1 = (long)pvVar11;
  param_1[1] = lVar8 + 0x10 + (long)pvVar7;
  param_1[2] = (long)((long)pvVar7 + uVar6 * 0x10);
  while (pvVar9 != pvVar12) {
    puVar2 = (undefined8 *)((long)pvVar9 + -8);
    pvVar9 = (void *)((long)pvVar9 + -0x10);
    if ((void *)*puVar2 != (void *)0x0) {
      operator_delete__((void *)*puVar2);
    }
  }
  if (pvVar12 != (void *)0x0) {
    operator_delete(pvVar12);
    return;
  }
  return;
}

