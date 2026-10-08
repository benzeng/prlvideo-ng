
void FUN_100a2ad30(undefined8 *param_1,undefined1 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  
  pvVar1 = (void *)*param_1;
  uVar3 = (param_1[1] - (long)pvVar1) + 1;
  if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(param_1[2] - (long)pvVar1) < 0x3fffffffffffffff) {
    uVar7 = (param_1[2] - (long)pvVar1) * 2;
    if (uVar7 < uVar3) {
      uVar7 = uVar3;
    }
    lVar6 = param_1[1];
    lVar4 = lVar6 - (long)pvVar1;
    uVar3 = 0;
    pvVar2 = (void *)0x0;
    if (uVar7 == 0) goto LAB_100a2adcf;
  }
  else {
    lVar6 = param_1[1];
    lVar4 = lVar6 - (long)pvVar1;
    uVar7 = 0x7fffffffffffffff;
  }
  uVar3 = uVar7;
  pvVar2 = operator_new(uVar3);
LAB_100a2adcf:
  *(undefined1 *)((long)pvVar2 + lVar4) = *param_2;
  pvVar5 = (void *)((lVar4 - (lVar6 - (long)pvVar1)) + (long)pvVar2);
  _memcpy(pvVar5,pvVar1,lVar6 - (long)pvVar1);
  *param_1 = pvVar5;
  param_1[1] = (long)pvVar2 + lVar4 + 1;
  param_1[2] = uVar3 + (long)pvVar2;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar1);
  return;
}

