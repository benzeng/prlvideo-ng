
int FUN_100b18b50(long *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(uint *)(param_1 + 0x10) & 1) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
    iVar1 = (**(code **)(*param_1 + 0x20))();
    if (iVar1 < 0) {
      FUN_100df99c0("","dimg",0,"SaveHasData() write failed. 0x%X",iVar1);
    }
  }
  return iVar1;
}

