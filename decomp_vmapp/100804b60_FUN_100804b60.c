
undefined8 FUN_100804b60(undefined1 *param_1,int *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (param_3 != 0) {
    iVar1 = FUN_1008946b0(param_3);
    uVar3 = DAT_1011a91e0;
    if (((((((int)DAT_1011a91e0 == iVar1) || (uVar3 = DAT_1011a91e8, (int)DAT_1011a91e8 == iVar1))
          || (uVar3 = DAT_1011a91f0, (int)DAT_1011a91f0 == iVar1)) ||
         ((uVar3 = DAT_1011a91f8, (int)DAT_1011a91f8 == iVar1 ||
          (uVar3 = DAT_1011a9200, (int)DAT_1011a9200 == iVar1)))) ||
        (uVar3 = DAT_1011a9208, (int)DAT_1011a9208 == iVar1)) && (uVar3 >> 0x20 != 0xffffffff)) {
      iVar1 = *param_2;
      uVar2 = DAT_1011a9210;
      uVar4 = 0;
      if (((((int)DAT_1011a9210 == iVar1) || (uVar2 = DAT_1011a9218, (int)DAT_1011a9218 == iVar1))
          || (uVar2 = DAT_1011a9220, (int)DAT_1011a9220 == iVar1)) && (uVar2 >> 0x20 != 0xffffffff))
      {
        *param_1 = (char)(uVar3 >> 0x20);
        param_1[1] = (char)(uVar2 >> 0x20);
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

