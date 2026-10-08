
undefined4 FUN_1007058c0(long param_1,char param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 == '\0') {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  return uVar1;
}

