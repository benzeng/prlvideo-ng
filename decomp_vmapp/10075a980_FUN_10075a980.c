
void FUN_10075a980(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  size_t sVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  
  pvVar1 = (void *)*param_1;
  uVar4 = (param_1[1] - (long)pvVar1 >> 6) + 1;
  if (uVar4 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(param_1[2] - (long)pvVar1 >> 6) < 0x1ffffffffffffff) {
    uVar7 = param_1[2] - (long)pvVar1 >> 5;
    if (uVar7 < uVar4) {
      uVar7 = uVar4;
    }
    sVar3 = param_1[1] - (long)pvVar1;
    lVar6 = (long)sVar3 >> 6;
    uVar4 = 0;
    pvVar5 = (void *)0x0;
    if (uVar7 == 0) goto LAB_10075aa41;
  }
  else {
    uVar7 = 0x3ffffffffffffff;
    sVar3 = param_1[1] - (long)pvVar1;
    lVar6 = (long)sVar3 >> 6;
  }
  pvVar5 = operator_new(uVar7 << 6);
  uVar4 = uVar7;
LAB_10075aa41:
  lVar6 = lVar6 * 0x40;
  *(undefined8 *)((long)pvVar5 + lVar6 + 0x38) = param_2[7];
  *(undefined8 *)((long)pvVar5 + lVar6 + 0x30) = param_2[6];
  *(undefined8 *)((long)pvVar5 + lVar6 + 0x28) = param_2[5];
  *(undefined8 *)((long)pvVar5 + lVar6 + 0x20) = param_2[4];
  *(undefined8 *)((long)pvVar5 + lVar6 + 0x18) = param_2[3];
  *(undefined8 *)((long)pvVar5 + lVar6 + 0x10) = param_2[2];
  uVar2 = *param_2;
  *(undefined8 *)((long)pvVar5 + lVar6 + 8) = param_2[1];
  *(undefined8 *)((long)pvVar5 + lVar6) = uVar2;
  _memcpy(pvVar5,pvVar1,sVar3);
  *param_1 = pvVar5;
  param_1[1] = (long)pvVar5 + lVar6 + 0x40;
  param_1[2] = (void *)(uVar4 * 0x40 + (long)pvVar5);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar1);
  return;
}

