
void FUN_1003a6eb0(undefined8 *param_1,long *param_2)

{
  void *pvVar1;
  size_t sVar2;
  ulong uVar3;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar3 = param_2[1] - *param_2 >> 2;
  if (uVar3 != 0) {
    if (uVar3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pvVar1 = operator_new(param_2[1] - *param_2);
    param_1[1] = pvVar1;
    *param_1 = pvVar1;
    param_1[2] = (void *)((long)pvVar1 + uVar3 * 4);
    sVar2 = param_2[1] - *param_2;
    _memcpy(pvVar1,(void *)*param_2,sVar2);
    param_1[1] = (sVar2 & 0xfffffffffffffffc) + (long)pvVar1;
  }
  return;
}

