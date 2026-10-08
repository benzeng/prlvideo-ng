
void FUN_100a2ce90(char *param_1,uint *param_2)

{
  uint uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = *param_2;
    if (((uVar1 & 3) != 0) && ((uVar1 & 8) != 0)) {
      uVar1 = uVar1 & 0xffffffbb;
      *param_2 = uVar1;
    }
    *param_2 = uVar1 & 0xffffffe7;
  }
  return;
}

