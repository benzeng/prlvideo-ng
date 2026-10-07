
void FUN_100516b70(undefined8 *param_1,long param_2)

{
  *param_1 = PTR_vtable_100ba2308 + 0x10;
  FUN_1005166c0(param_1 + 1,param_2 + 8);
  *param_1 = &PTR_FUN_100bc47d0;
  param_1[1] = &PTR_FUN_100bc47f8;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  if (((*(byte *)(param_2 + 0x30) & 1) == 0) || (*(long *)(param_2 + 0x40) != 0)) {
    std::string::assign((char *)(param_1 + 6));
  }
  return;
}

