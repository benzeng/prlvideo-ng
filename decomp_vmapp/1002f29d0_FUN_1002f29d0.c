
void FUN_1002f29d0(undefined8 *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  
  uVar3 = (long)param_3 - (long)param_2 >> 2;
  pvVar2 = (void *)*param_1;
  lVar4 = param_1[2];
  if ((ulong)(lVar4 - (long)pvVar2 >> 2) < uVar3) {
    if (pvVar2 != (void *)0x0) {
      pvVar6 = (void *)param_1[1];
      if (pvVar6 != pvVar2) {
        param_1[1] = (~((long)pvVar6 + (-4 - (long)pvVar2)) & 0xfffffffffffffffcU) + (long)pvVar6;
      }
      operator_delete(pvVar2);
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      lVar4 = 0;
    }
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar4 >> 2) < 0x1fffffffffffffff) {
      uVar5 = lVar4 >> 1;
      if ((ulong)(lVar4 >> 1) < uVar3) {
        uVar5 = uVar3;
      }
      if (0x3fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
    }
    else {
      uVar5 = 0x3fffffffffffffff;
    }
    pvVar1 = operator_new(uVar5 * 4);
    param_1[1] = pvVar1;
    *param_1 = pvVar1;
    param_1[2] = (void *)((long)pvVar1 + uVar5 * 4);
    _memcpy(pvVar1,param_2,(long)param_3 - (long)param_2);
    pvVar1 = (void *)((long)pvVar1 + uVar3 * 4);
  }
  else {
    uVar5 = param_1[1] - (long)pvVar2 >> 2;
    pvVar6 = param_3;
    if (uVar5 < uVar3) {
      pvVar6 = (void *)((long)param_2 + uVar5 * 4);
    }
    _memmove(pvVar2,param_2,(long)pvVar6 - (long)param_2);
    pvVar1 = (void *)param_1[1];
    if (uVar5 < uVar3) {
      _memcpy(pvVar1,pvVar6,(long)param_3 - (long)pvVar6);
      param_1[1] = param_1[1] + ((long)param_3 - (long)pvVar6 & 0xfffffffffffffffcU);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + ((long)pvVar6 - (long)param_2 & 0xfffffffffffffffcU));
    if (pvVar1 == pvVar2) {
      return;
    }
    pvVar1 = (void *)((~((long)pvVar1 + (-4 - (long)pvVar2)) & 0xfffffffffffffffcU) + (long)pvVar1);
  }
  param_1[1] = pvVar1;
  return;
}

