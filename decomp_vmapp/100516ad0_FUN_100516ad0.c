
void FUN_100516ad0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined4 param_5)

{
  *param_1 = PTR_vtable_100ba2308 + 0x10;
  FUN_100516540(param_1 + 1,param_2,param_3,param_5);
  *param_1 = &PTR_FUN_100bc47d0;
  param_1[1] = &PTR_FUN_100bc47f8;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (param_4 != 0) {
    std::string::assign((char *)(param_1 + 6));
  }
  return;
}

