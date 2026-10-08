
bool FUN_100ca9010(long param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  
  pbVar1 = (byte *)*param_2;
  if (((*(byte *)(param_1 + 0x19) & 4) == 0) && ((*pbVar1 & 3) != 0)) {
    iVar2 = FUN_100c60800(*(undefined8 *)(pbVar1 + 0x18));
    if (iVar2 < 1) {
      bVar5 = false;
    }
    else {
      iVar2 = 0;
      do {
        uVar4 = FUN_100c60820(*(undefined8 *)(pbVar1 + 0x18),iVar2);
        iVar3 = FUN_100bf8810(uVar4,param_3);
        if (iVar3 == 0) {
          return true;
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_100c60800(*(undefined8 *)(pbVar1 + 0x18));
      } while (iVar2 < iVar3);
      bVar5 = false;
    }
  }
  else {
    iVar2 = FUN_100bf8810(*(undefined8 *)(pbVar1 + 8),param_3);
    bVar5 = iVar2 == 0;
  }
  return bVar5;
}

