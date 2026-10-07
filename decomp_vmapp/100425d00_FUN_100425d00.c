
void FUN_100425d00(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  
  pvVar6 = (void *)*param_1;
  uVar4 = (param_1[1] - (long)pvVar6 >> 3) + 1;
  if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(param_1[2] - (long)pvVar6 >> 3) < 0xfffffffffffffff) {
    uVar7 = param_1[2] - (long)pvVar6 >> 2;
    if (uVar7 < uVar4) {
      uVar7 = uVar4;
    }
    pvVar5 = (void *)param_1[1];
    lVar8 = (long)pvVar5 - (long)pvVar6 >> 3;
    uVar4 = 0;
    pvVar2 = (void *)0x0;
    if (uVar7 == 0) goto LAB_100425dad;
  }
  else {
    pvVar5 = (void *)param_1[1];
    lVar8 = (long)pvVar5 - (long)pvVar6 >> 3;
    uVar7 = 0x1fffffffffffffff;
  }
  uVar4 = uVar7;
  pvVar2 = operator_new(uVar4 * 8);
LAB_100425dad:
  pvVar3 = (void *)((long)pvVar2 + lVar8 * 8);
  *(undefined8 *)((long)pvVar2 + lVar8 * 8) = *param_2;
  if (pvVar5 != pvVar6) {
    do {
      puVar1 = (undefined8 *)((long)pvVar5 + -8);
      pvVar5 = (void *)((long)pvVar5 + -8);
      *(undefined8 *)((long)pvVar3 + -8) = *puVar1;
      pvVar3 = (void *)((long)pvVar3 + -8);
    } while (pvVar6 != pvVar5);
    pvVar6 = (void *)*param_1;
  }
  *param_1 = (long)pvVar3;
  param_1[1] = (long)pvVar2 + lVar8 * 8 + 8;
  param_1[2] = (long)((long)pvVar2 + uVar4 * 8);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar6);
  return;
}

