
void FUN_1004a1550(long *param_1,ulong param_2,byte *param_3)

{
  void *pvVar1;
  byte *pbVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  pvVar1 = (void *)*param_1;
  uVar3 = param_1[2];
  if (uVar3 - (long)pvVar1 < param_2) {
    if (pvVar1 != (void *)0x0) {
      if ((void *)param_1[1] != pvVar1) {
        param_1[1] = (long)pvVar1;
      }
      operator_delete(pvVar1);
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      uVar3 = 0;
    }
    if ((long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar3 < 0x3fffffffffffffff) {
      uVar5 = uVar3 * 2;
      if ((uVar3 * 2 < param_2) && (uVar5 = param_2, (long)param_2 < 0)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
    }
    else {
      uVar5 = 0x7fffffffffffffff;
    }
    pbVar2 = operator_new(uVar5);
    param_1[1] = (long)pbVar2;
    *param_1 = (long)pbVar2;
    param_1[2] = (long)(pbVar2 + uVar5);
    do {
      *pbVar2 = *param_3;
      pbVar2 = (byte *)(param_1[1] + 1);
      param_1[1] = (long)pbVar2;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  else {
    uVar5 = param_1[1] - (long)pvVar1;
    uVar3 = param_2;
    if (uVar5 < param_2) {
      uVar3 = uVar5;
    }
    if (uVar3 != 0) {
      _memset(pvVar1,(uint)*param_3,uVar3);
    }
    lVar4 = uVar5 - param_2;
    if (uVar5 < param_2) {
      pbVar2 = (byte *)param_1[1];
      do {
        *pbVar2 = *param_3;
        pbVar2 = (byte *)(param_1[1] + 1);
        param_1[1] = (long)pbVar2;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0);
    }
    else if (param_1[1] != param_2 + *param_1) {
      param_1[1] = param_2 + *param_1;
    }
  }
  return;
}

