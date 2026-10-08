
void FUN_100be53a0(long param_1,long *param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(param_1 + 0x278);
  *param_2 = lVar1;
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x280);
  }
  *param_3 = uVar2;
  return;
}

