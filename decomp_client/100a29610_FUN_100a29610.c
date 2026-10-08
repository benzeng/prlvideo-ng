
void FUN_100a29610(undefined8 *param_1,void *param_2,long param_3)

{
  void *pvVar1;
  size_t sVar2;
  size_t sVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = param_3 - (long)param_2;
  pvVar1 = (void *)*param_1;
  uVar5 = param_1[2];
  if (uVar5 - (long)pvVar1 < uVar4) {
    if (pvVar1 != (void *)0x0) {
      if ((void *)param_1[1] != pvVar1) {
        param_1[1] = pvVar1;
      }
      operator_delete(pvVar1);
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      uVar5 = 0;
    }
    if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar5 < 0x3fffffffffffffff) {
      uVar6 = uVar5 * 2;
      if ((uVar5 * 2 < uVar4) && (uVar6 = uVar4, (long)uVar4 < 0)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
    }
    else {
      uVar6 = 0x7fffffffffffffff;
    }
    pvVar1 = operator_new(uVar6);
    param_1[1] = pvVar1;
    *param_1 = pvVar1;
    param_1[2] = uVar6 + (long)pvVar1;
    _memcpy(pvVar1,param_2,uVar4);
    param_1[1] = (long)pvVar1 + uVar4;
  }
  else {
    sVar2 = param_1[1] - (long)pvVar1;
    if (sVar2 < uVar4) {
      _memmove(pvVar1,param_2,sVar2);
      sVar3 = param_3 - (long)((long)param_2 + sVar2);
      _memcpy((void *)param_1[1],(void *)((long)param_2 + sVar2),sVar3);
      param_1[1] = param_1[1] + sVar3;
    }
    else {
      _memmove(pvVar1,param_2,uVar4);
      if (param_1[1] != (long)pvVar1 + uVar4) {
        param_1[1] = (long)pvVar1 + uVar4;
      }
    }
  }
  return;
}

