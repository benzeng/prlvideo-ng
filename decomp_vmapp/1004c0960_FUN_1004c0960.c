
void FUN_1004c0960(undefined8 *param_1,long *param_2)

{
  void *pvVar1;
  size_t sVar2;
  ulong uVar3;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar3 = param_2[1] - *param_2 >> 3;
  if (uVar3 != 0) {
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pvVar1 = operator_new(param_2[1] - *param_2);
    param_1[1] = pvVar1;
    *param_1 = pvVar1;
    param_1[2] = (void *)((long)pvVar1 + uVar3 * 8);
    sVar2 = param_2[1] - *param_2;
    _memcpy(pvVar1,(void *)*param_2,sVar2);
    param_1[1] = (sVar2 & 0xfffffffffffffff8) + (long)pvVar1;
  }
  return;
}

