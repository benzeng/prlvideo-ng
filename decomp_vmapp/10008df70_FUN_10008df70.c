
void FUN_10008df70(undefined8 *param_1,ulong param_2)

{
  undefined4 *puVar1;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar1 = operator_new(param_2 * 4);
    param_1[1] = puVar1;
    *param_1 = puVar1;
    param_1[2] = puVar1 + param_2;
    do {
      *puVar1 = 0;
      puVar1 = (undefined4 *)(param_1[1] + 4);
      param_1[1] = puVar1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

