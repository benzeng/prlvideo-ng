
void FUN_10045b1d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 0x10;
  param_1[0x22] = param_1[0x23];
  (**(code **)(param_1 + 0xc))(piVar1,*(undefined8 *)(param_1 + 4),*param_1);
  param_1[0x23] = param_1[0x22];
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_1[0x22] = param_1[0x24];
    (**(code **)(param_1 + 0xc))(piVar1,*(long *)(param_1 + 4) + 1,*param_1 + 1U >> 1);
    param_1[0x24] = param_1[0x22];
    param_1[0x22] = param_1[0x25];
    (**(code **)(param_1 + 0xc))(piVar1,*(long *)(param_1 + 4) + 2,*param_1 + 1U >> 1);
    param_1[0x25] = param_1[0x22];
  }
  return;
}

