
ulong FUN_1008c0380(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_3 != 1) {
    uVar6 = FUN_1008bffe0(param_1);
    return uVar6;
  }
  lVar3 = FUN_10087ebd0(param_2,"r");
  if (lVar3 == 0) {
    uVar7 = 2;
    uVar8 = 0xfd;
  }
  else {
    uVar6 = 0;
    lVar4 = FUN_1008b1e60(lVar3,0,0,0);
    FUN_10087d4e0(lVar3);
    if (lVar4 != 0) {
      iVar1 = FUN_100885600(lVar4);
      if (0 < iVar1) {
        uVar6 = 0;
        iVar1 = 0;
        do {
          plVar5 = (long *)FUN_100885620(lVar4,iVar1);
          if (*plVar5 != 0) {
            FUN_1008bdec0(*(undefined8 *)(param_1 + 0x18));
            uVar6 = (ulong)((int)uVar6 + 1);
          }
          if (plVar5[1] != 0) {
            FUN_1008be180(*(undefined8 *)(param_1 + 0x18));
            uVar6 = (ulong)((int)uVar6 + 1);
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_100885600(lVar4);
        } while (iVar1 < iVar2);
      }
      FUN_100885590(lVar4,FUN_1008a2a50);
      return uVar6;
    }
    uVar7 = 9;
    uVar8 = 0x103;
  }
  FUN_100887ce0(0xb,0x84,uVar7,"by_file.c",uVar8);
  return 0;
}

