
void FUN_10037ff60(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  size_t local_40;
  
  lVar4 = param_1[1];
  if (param_2 <= (ulong)(param_1[2] - lVar4 >> 3)) {
    ___bzero(lVar4,param_2 * 8);
    param_1[1] = lVar4 + param_2 * 8;
    return;
  }
  pvVar1 = (void *)*param_1;
  uVar2 = (lVar4 - (long)pvVar1 >> 3) + param_2;
  if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - (long)pvVar1;
  if ((ulong)(lVar4 >> 3) < 0xfffffffffffffff) {
    uVar5 = lVar4 >> 2;
    if (uVar5 < uVar2) {
      uVar5 = uVar2;
    }
    local_40 = param_1[1] - (long)pvVar1;
    lVar4 = (long)local_40 >> 3;
    uVar2 = 0;
    pvVar3 = (void *)0x0;
    if (uVar5 == 0) goto LAB_100380047;
  }
  else {
    local_40 = param_1[1] - (long)pvVar1;
    lVar4 = (long)local_40 >> 3;
    uVar5 = 0x1fffffffffffffff;
  }
  uVar2 = uVar5;
  pvVar3 = operator_new(uVar2 * 8);
LAB_100380047:
  ___bzero((void *)((long)pvVar3 + lVar4 * 8),param_2 * 8);
  _memcpy(pvVar3,pvVar1,local_40);
  *param_1 = pvVar3;
  param_1[1] = (void *)((long)pvVar3 + (lVar4 + param_2) * 8);
  param_1[2] = (void *)((long)pvVar3 + uVar2 * 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar1);
  return;
}

