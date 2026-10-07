
undefined8 FUN_1007fe020(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long local_38;
  
  uVar3 = 0;
  iVar1 = FUN_1008a17b0(param_3,0);
  iVar2 = FUN_10087ce60(param_1,(long)(((ulong)(uint)((int)*param_2 + iVar1) << 0x20) + 0x300000000)
                                >> 0x20);
  if (iVar2 == 0) {
    FUN_100887ce0(0x14,0x128,7,"s3_both.c",0x150);
    uVar3 = 0xffffffff;
  }
  else {
    local_38 = *(long *)(param_1 + 8) + *param_2;
    *(char *)(*(long *)(param_1 + 8) + *param_2) = (char)((uint)iVar1 >> 0x10);
    *(char *)(local_38 + 1) = (char)((uint)iVar1 >> 8);
    *(char *)(local_38 + 2) = (char)iVar1;
    local_38 = local_38 + 3;
    FUN_1008a17b0(param_3,&local_38);
    *param_2 = *param_2 + (long)(iVar1 + 3);
  }
  return uVar3;
}

