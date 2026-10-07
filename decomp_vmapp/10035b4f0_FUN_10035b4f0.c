
void FUN_10035b4f0(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar2 = operator_new(param_2 * 0x10);
    param_1[1] = puVar2;
    *param_1 = puVar2;
    param_1[2] = puVar2 + param_2 * 2;
    do {
      uVar1 = *param_3;
      puVar2[1] = param_3[1];
      *puVar2 = uVar1;
      puVar2 = (undefined8 *)(param_1[1] + 0x10);
      param_1[1] = puVar2;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

