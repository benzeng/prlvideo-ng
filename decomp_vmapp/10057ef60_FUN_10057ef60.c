
void FUN_10057ef60(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  size_t sVar5;
  ulong uVar6;
  
  pvVar1 = (void *)*param_1;
  uVar2 = (param_1[1] - (long)pvVar1 >> 3) + 1;
  if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(param_1[2] - (long)pvVar1 >> 3) < 0xfffffffffffffff) {
    uVar6 = param_1[2] - (long)pvVar1 >> 2;
    if (uVar6 < uVar2) {
      uVar6 = uVar2;
    }
    sVar5 = param_1[1] - (long)pvVar1;
    lVar4 = (long)sVar5 >> 3;
    uVar2 = 0;
    pvVar3 = (void *)0x0;
    if (uVar6 == 0) goto LAB_10057f01d;
  }
  else {
    sVar5 = param_1[1] - (long)pvVar1;
    lVar4 = (long)sVar5 >> 3;
    uVar6 = 0x1fffffffffffffff;
  }
  uVar2 = uVar6;
  pvVar3 = operator_new(uVar2 * 8);
LAB_10057f01d:
  *(undefined8 *)((long)pvVar3 + lVar4 * 8) = *param_2;
  _memcpy(pvVar3,pvVar1,sVar5);
  *param_1 = pvVar3;
  param_1[1] = (long)pvVar3 + lVar4 * 8 + 8;
  param_1[2] = (void *)((long)pvVar3 + uVar2 * 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar1);
  return;
}

