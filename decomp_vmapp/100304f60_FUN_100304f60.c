
undefined4 FUN_100304f60(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0x8804) {
    uVar1 = *(undefined4 *)(param_1 + 0x25ec);
  }
  else {
    uVar1 = 0;
    if (param_2 == 0x8620) {
      return *(undefined4 *)(param_1 + 0x25e8);
    }
  }
  return uVar1;
}

