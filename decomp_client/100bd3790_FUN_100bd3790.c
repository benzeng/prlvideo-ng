
undefined8 FUN_100bd3790(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long local_38;
  
  uVar3 = 0;
  iVar1 = FUN_100c7cd30(param_3,0);
  iVar2 = FUN_100c58060(param_1,(long)(((ulong)(uint)((int)*param_2 + iVar1) << 0x20) + 0x300000000)
                                >> 0x20);
  if (iVar2 == 0) {
    FUN_100c62ee0(0x14,0x128,7,"s3_both.c",0x150);
    uVar3 = 0xffffffff;
  }
  else {
    local_38 = *(long *)(param_1 + 8) + *param_2;
    *(char *)(*(long *)(param_1 + 8) + *param_2) = (char)((uint)iVar1 >> 0x10);
    *(char *)(local_38 + 1) = (char)((uint)iVar1 >> 8);
    *(char *)(local_38 + 2) = (char)iVar1;
    local_38 = local_38 + 3;
    FUN_100c7cd30(param_3,&local_38);
    *param_2 = *param_2 + (long)(iVar1 + 3);
  }
  return uVar3;
}

