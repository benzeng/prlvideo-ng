
int FUN_10036bd30(long param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 == '\0') {
    uVar1 = *(uint *)(param_1 + 0x260);
    iVar2 = (uVar1 >> 5 & 1) +
            (uVar1 >> 4 & 1) + (uVar1 >> 3 & 1) + (uVar1 >> 2 & 1) + (uVar1 >> 1 & 1) + (uVar1 & 1);
  }
  return iVar2;
}

