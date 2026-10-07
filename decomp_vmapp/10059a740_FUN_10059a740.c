
void FUN_10059a740(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  size_t sVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  
  pvVar1 = (void *)*param_1;
  uVar4 = (param_1[1] - (long)pvVar1 >> 4) + 1;
  if (uVar4 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(param_1[2] - (long)pvVar1 >> 4) < 0x7ffffffffffffff) {
    uVar7 = param_1[2] - (long)pvVar1 >> 3;
    if (uVar7 < uVar4) {
      uVar7 = uVar4;
    }
    sVar3 = param_1[1] - (long)pvVar1;
    lVar6 = (long)sVar3 >> 4;
    uVar4 = 0;
    pvVar5 = (void *)0x0;
    if (uVar7 == 0) goto LAB_10059a803;
  }
  else {
    sVar3 = param_1[1] - (long)pvVar1;
    lVar6 = (long)sVar3 >> 4;
    uVar7 = 0xfffffffffffffff;
  }
  uVar4 = uVar7;
  pvVar5 = operator_new(uVar4 << 4);
LAB_10059a803:
  lVar6 = lVar6 * 0x10;
  uVar2 = *param_2;
  *(undefined8 *)((long)pvVar5 + lVar6 + 8) = param_2[1];
  *(undefined8 *)((long)pvVar5 + lVar6) = uVar2;
  _memcpy(pvVar5,pvVar1,sVar3);
  *param_1 = pvVar5;
  param_1[1] = (long)pvVar5 + lVar6 + 0x10;
  param_1[2] = (void *)(uVar4 * 0x10 + (long)pvVar5);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar1);
  return;
}

