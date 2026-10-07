
void FUN_100523b10(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pvVar1 = operator_new(param_2 * 0x10);
    param_1[1] = pvVar1;
    *param_1 = pvVar1;
    param_1[2] = (void *)(param_2 * 0x10 + (long)pvVar1);
    do {
      FUN_100522ca0();
      param_1[1] = param_1[1] + 0x10;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

