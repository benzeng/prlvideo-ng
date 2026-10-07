
void FUN_100516750(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  
  *param_1 = &PTR_FUN_100bc4778;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    uVar1 = param_2 + 9;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x18);
  }
  std::string::assign((char *)(param_1 + 1),uVar1);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return;
}

