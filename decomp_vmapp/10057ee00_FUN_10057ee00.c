
void FUN_10057ee00(long *param_1,ulong param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  puVar5 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar5 >> 3)) {
    do {
      *puVar5 = *param_3;
      puVar5 = (undefined8 *)(param_1[1] + 8);
      param_1[1] = (long)puVar5;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    return;
  }
  lVar6 = *param_1;
  uVar4 = ((long)puVar5 - lVar6 >> 3) + param_2;
  if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - lVar6;
  if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
    uVar8 = lVar7 >> 2;
    if (uVar8 < uVar4) {
      uVar8 = uVar4;
    }
    lVar6 = param_1[1] - lVar6 >> 3;
    uVar4 = 0;
    pvVar3 = (void *)0x0;
    if (uVar8 == 0) goto LAB_10057eed7;
  }
  else {
    lVar6 = param_1[1] - lVar6 >> 3;
    uVar8 = 0x1fffffffffffffff;
  }
  uVar4 = uVar8;
  pvVar3 = operator_new(uVar4 * 8);
LAB_10057eed7:
  puVar5 = (undefined8 *)((long)pvVar3 + lVar6 * 8);
  do {
    *puVar5 = *param_3;
    puVar5 = puVar5 + 1;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  pvVar2 = (void *)*param_1;
  pvVar1 = (void *)((long)pvVar3 + (lVar6 - ((ulong)(param_1[1] - (long)pvVar2) >> 3)) * 8);
  _memcpy(pvVar1,pvVar2,param_1[1] - (long)pvVar2);
  *param_1 = (long)pvVar1;
  param_1[1] = (long)puVar5;
  param_1[2] = (long)((long)pvVar3 + uVar4 * 8);
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

