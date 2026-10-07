
int FUN_10035cc30(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == -1) {
    (*DAT_1011c6130)(*(undefined4 *)(param_1 + 0x28),0x8866,param_1 + 0x2c);
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  return iVar1;
}

