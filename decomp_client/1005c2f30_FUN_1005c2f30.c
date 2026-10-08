
undefined4 FUN_1005c2f30(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x50);
  uVar3 = 0xc;
  if (iVar1 == 6) {
    uVar3 = 0;
  }
  uVar2 = 0xb;
  if (iVar1 != 4) {
    uVar2 = uVar3;
  }
  return uVar2;
}

