
void FUN_1003c5860(undefined8 *param_1,undefined2 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  size_t sVar5;
  ulong uVar6;
  
  pvVar1 = (void *)*param_1;
  if (param_1[1] - (long)pvVar1 < -2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar2 = param_1[2] - (long)pvVar1;
  if ((ulong)((long)uVar2 >> 1) < 0x3fffffffffffffff) {
    uVar6 = (param_1[1] - (long)pvVar1 >> 1) + 1;
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    sVar5 = param_1[1] - (long)pvVar1;
    lVar4 = (long)sVar5 >> 1;
    uVar2 = 0;
    pvVar3 = (void *)0x0;
    if (uVar6 == 0) goto LAB_1003c590e;
  }
  else {
    sVar5 = param_1[1] - (long)pvVar1;
    lVar4 = (long)sVar5 >> 1;
    uVar6 = 0x7fffffffffffffff;
  }
  uVar2 = uVar6;
  pvVar3 = operator_new(uVar2 * 2);
LAB_1003c590e:
  *(undefined2 *)((long)pvVar3 + lVar4 * 2) = *param_2;
  _memcpy(pvVar3,pvVar1,sVar5);
  *param_1 = pvVar3;
  param_1[1] = (long)pvVar3 + lVar4 * 2 + 2;
  param_1[2] = (void *)((long)pvVar3 + uVar2 * 2);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar1);
  return;
}

