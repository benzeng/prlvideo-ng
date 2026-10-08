
void FUN_1009d29a0(undefined8 *param_1,void *param_2,ulong param_3,undefined8 param_4,
                  string *param_5,undefined8 param_6,undefined4 param_7,uint param_8)

{
  void *pvVar1;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_3 != 0) {
    if ((long)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pvVar1 = operator_new(param_3);
    param_1[1] = pvVar1;
    *param_1 = pvVar1;
    param_1[2] = (long)pvVar1 + param_3;
    _memcpy(pvVar1,param_2,param_3);
    param_1[1] = (long)pvVar1 + param_3;
  }
  param_1[3] = param_3;
  param_1[4] = param_4;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  std::string::string((string *)(param_1 + 9),param_5);
  param_1[0xc] = param_6;
  *(undefined4 *)(param_1 + 0xd) = param_7;
  *(uint *)((long)param_1 + 0x6c) = param_8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if ((param_8 & 0x1000000) == 0) {
    FUN_1009d1cb0();
    return;
  }
  FUN_1009d1bd0(param_1);
  return;
}

