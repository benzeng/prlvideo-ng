
void FUN_100424830(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  size_t local_40;
  
  lVar4 = param_1[1];
  if (param_2 <= (ulong)(param_1[2] - lVar4 >> 1)) {
    ___bzero(lVar4,param_2 * 2);
    param_1[1] = lVar4 + param_2 * 2;
    return;
  }
  pvVar1 = (void *)*param_1;
  uVar2 = (lVar4 - (long)pvVar1 >> 1) + param_2;
  if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  uVar5 = param_1[2] - (long)pvVar1;
  if ((ulong)((long)uVar5 >> 1) < 0x3fffffffffffffff) {
    if (uVar5 < uVar2) {
      uVar5 = uVar2;
    }
    local_40 = param_1[1] - (long)pvVar1;
    lVar4 = (long)local_40 >> 1;
    uVar2 = 0;
    pvVar3 = (void *)0x0;
    if (uVar5 == 0) goto LAB_1004248fc;
  }
  else {
    local_40 = param_1[1] - (long)pvVar1;
    lVar4 = (long)local_40 >> 1;
    uVar5 = 0x7fffffffffffffff;
  }
  uVar2 = uVar5;
  pvVar3 = operator_new(uVar2 * 2);
LAB_1004248fc:
  ___bzero((void *)((long)pvVar3 + lVar4 * 2),param_2 * 2);
  _memcpy(pvVar3,pvVar1,local_40);
  *param_1 = pvVar3;
  param_1[1] = (void *)((long)pvVar3 + (lVar4 + param_2) * 2);
  param_1[2] = (void *)((long)pvVar3 + uVar2 * 2);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar1);
  return;
}

