
void FUN_100356d60(undefined8 *param_1,long *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  lVar2 = param_2[1] - *param_2;
  uVar4 = param_2[1] - *param_2;
  if (uVar4 != 0) {
    if (0x5555555555555555 < (ulong)(lVar2 * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pvVar1 = operator_new(uVar4);
    param_1[1] = pvVar1;
    *param_1 = pvVar1;
    param_1[2] = lVar2 + (long)pvVar1;
    sVar3 = param_2[1] - *param_2;
    _memcpy(pvVar1,(void *)*param_2,sVar3);
    param_1[1] = sVar3 + (long)pvVar1;
  }
  return;
}

