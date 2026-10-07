
undefined8 FUN_1000bcd00(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x48) + 0x14);
  if ((1 < iVar1 - 0x4e45U) && (iVar1 != 0x4e28)) {
    if (iVar1 != 0x4e29) {
      return 0;
    }
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","vm",1,"Shutdown is already in progress. Cancel the second command");
    }
  }
  FUN_10008f640(param_1,8,1);
  FUN_10008ec80(param_1,0xc);
  FUN_10008f910(param_1,0);
  return 1;
}

