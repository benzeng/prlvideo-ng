
undefined8 FUN_10037ead0(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = 0x203;
  if (*(int *)(param_2 + 0x82cc) - 1U < 8) {
    iVar1 = *(int *)(param_2 + 0x82cc) + 0x1ff;
  }
  (*DAT_1011c5b98)(iVar1);
  return 0;
}

