
void FUN_100365d90(long *param_1,ulong param_2)

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
  if (param_2 <= (ulong)(param_1[2] - (long)puVar5 >> 4)) {
    do {
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5 = (undefined8 *)(param_1[1] + 0x10);
      param_1[1] = (long)puVar5;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    return;
  }
  lVar6 = *param_1;
  uVar4 = ((long)puVar5 - lVar6 >> 4) + param_2;
  if (uVar4 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - lVar6;
  if ((ulong)(lVar7 >> 4) < 0x7ffffffffffffff) {
    uVar8 = lVar7 >> 3;
    if (uVar8 < uVar4) {
      uVar8 = uVar4;
    }
    lVar6 = param_1[1] - lVar6 >> 4;
    uVar4 = 0;
    pvVar2 = (void *)0x0;
    if (uVar8 == 0) goto LAB_100365e69;
  }
  else {
    lVar6 = param_1[1] - lVar6 >> 4;
    uVar8 = 0xfffffffffffffff;
  }
  uVar4 = uVar8;
  pvVar2 = operator_new(uVar4 << 4);
LAB_100365e69:
  puVar5 = (undefined8 *)(lVar6 * 0x10 + (long)pvVar2);
  do {
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 2;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  pvVar1 = (void *)*param_1;
  pvVar3 = (void *)((long)pvVar2 + (lVar6 - ((ulong)(param_1[1] - (long)pvVar1) >> 4)) * 0x10);
  _memcpy(pvVar3,pvVar1,param_1[1] - (long)pvVar1);
  *param_1 = (long)pvVar3;
  param_1[1] = (long)puVar5;
  param_1[2] = (long)(uVar4 * 0x10 + (long)pvVar2);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar1);
  return;
}

