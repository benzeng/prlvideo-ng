
void FUN_100a32b40(undefined8 *param_1,long *param_2)

{
  void *pvVar1;
  ulong uVar2;
  size_t sVar3;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar2 = param_2[1] - *param_2;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pvVar1 = operator_new(uVar2);
    param_1[1] = pvVar1;
    *param_1 = pvVar1;
    param_1[2] = uVar2 + (long)pvVar1;
    sVar3 = param_2[1] - *param_2;
    _memcpy(pvVar1,(void *)*param_2,sVar3);
    param_1[1] = sVar3 + (long)pvVar1;
  }
  return;
}

