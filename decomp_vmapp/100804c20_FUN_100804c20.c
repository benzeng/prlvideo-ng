
ulong FUN_100804c20(int *param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *param_1;
  uVar2 = DAT_1011a9210;
  if ((((int)DAT_1011a9210 != iVar1) && (uVar2 = DAT_1011a9218, (int)DAT_1011a9218 != iVar1)) &&
     (uVar2 = DAT_1011a9220, (int)DAT_1011a9220 != iVar1)) {
    return 0xffffffff;
  }
  return uVar2 >> 0x20;
}

