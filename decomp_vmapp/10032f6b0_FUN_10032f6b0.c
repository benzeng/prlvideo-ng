
void FUN_10032f6b0(undefined8 *param_1,ulong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  size_t sVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  
  puVar3 = (undefined4 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar3 >> 2)) {
    puVar1 = puVar3 + param_2;
    do {
      *puVar3 = *param_3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    param_1[1] = puVar1;
    return;
  }
  pvVar2 = (void *)*param_1;
  uVar5 = ((long)puVar3 - (long)pvVar2 >> 2) + param_2;
  if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - (long)pvVar2;
  if ((ulong)(lVar7 >> 2) < 0x1fffffffffffffff) {
    uVar8 = lVar7 >> 1;
    if (uVar8 < uVar5) {
      uVar8 = uVar5;
    }
    sVar4 = param_1[1] - (long)pvVar2;
    lVar7 = (long)sVar4 >> 2;
    uVar5 = 0;
    pvVar6 = (void *)0x0;
    if (uVar8 == 0) goto LAB_10032f7b2;
  }
  else {
    sVar4 = param_1[1] - (long)pvVar2;
    lVar7 = (long)sVar4 >> 2;
    uVar8 = 0x3fffffffffffffff;
  }
  uVar5 = uVar8;
  pvVar6 = operator_new(uVar5 * 4);
LAB_10032f7b2:
  puVar3 = (undefined4 *)((long)pvVar6 + lVar7 * 4);
  lVar7 = lVar7 + param_2;
  do {
    *puVar3 = *param_3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  _memcpy(pvVar6,pvVar2,sVar4);
  *param_1 = pvVar6;
  param_1[1] = (void *)((long)pvVar6 + lVar7 * 4);
  param_1[2] = (void *)((long)pvVar6 + uVar5 * 4);
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

