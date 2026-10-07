
undefined8 FUN_1000c14c0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x48) + 0x14);
  if (iVar1 == 0) {
    uVar2 = 5;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    uVar2 = 4;
  }
  FUN_10008ec80(param_1,uVar2);
  FUN_10008f910(param_1,0);
  return 1;
}

