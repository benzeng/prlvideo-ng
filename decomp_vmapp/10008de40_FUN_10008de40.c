
void FUN_10008de40(long *param_1,ulong param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  void *pvVar4;
  undefined1 *puVar5;
  void *pvVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  
  puVar5 = (undefined1 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar5)) {
    do {
      *puVar5 = 0;
      puVar5 = (undefined1 *)(param_1[1] + 1);
      param_1[1] = (long)puVar5;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    return;
  }
  lVar7 = *param_1;
  puVar5 = puVar5 + (param_2 - lVar7);
  if ((long)puVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar9 = param_1[2] - lVar7;
  if (uVar9 < 0x3fffffffffffffff) {
    puVar3 = (undefined1 *)(uVar9 * 2);
    if (puVar3 < puVar5) {
      puVar3 = puVar5;
    }
    lVar7 = param_1[1] - lVar7;
    puVar5 = (undefined1 *)0x0;
    pvVar2 = (void *)0x0;
    if (puVar3 == (undefined1 *)0x0) goto LAB_10008def4;
  }
  else {
    lVar7 = param_1[1] - lVar7;
    puVar3 = (undefined1 *)0x7fffffffffffffff;
  }
  puVar5 = puVar3;
  pvVar2 = operator_new((ulong)puVar5);
LAB_10008def4:
  puVar8 = (undefined1 *)(lVar7 + (long)pvVar2);
  puVar3 = puVar8;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  pvVar6 = (void *)*param_1;
  pvVar4 = (void *)param_1[1];
  if (pvVar4 != pvVar6) {
    do {
      puVar1 = (undefined1 *)((long)pvVar4 + -1);
      pvVar4 = (void *)((long)pvVar4 + -1);
      puVar8[-1] = *puVar1;
      puVar8 = puVar8 + -1;
    } while (pvVar6 != pvVar4);
    pvVar6 = (void *)*param_1;
  }
  *param_1 = (long)puVar8;
  param_1[1] = (long)puVar3;
  param_1[2] = (long)(puVar5 + (long)pvVar2);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar6);
  return;
}

