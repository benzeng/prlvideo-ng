
char * FUN_100752320(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x58) - 1;
  if (uVar1 < 5) {
    return (&PTR_s_lzrw1_100bcec20)[(int)uVar1];
  }
  return "invalid";
}

