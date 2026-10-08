
ulong FUN_100c9b900(long param_1,undefined8 param_2,int param_3)

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
    uVar6 = FUN_100c9b560(param_1);
    return uVar6;
  }
  lVar3 = FUN_100c59dd0(param_2,"r");
  if (lVar3 == 0) {
    uVar7 = 2;
    uVar8 = 0xfd;
  }
  else {
    uVar6 = 0;
    lVar4 = FUN_100c8d3e0(lVar3,0,0,0);
    FUN_100c586e0(lVar3);
    if (lVar4 != 0) {
      iVar1 = FUN_100c60800(lVar4);
      if (0 < iVar1) {
        uVar6 = 0;
        iVar1 = 0;
        do {
          plVar5 = (long *)FUN_100c60820(lVar4,iVar1);
          if (*plVar5 != 0) {
            FUN_100c99440(*(undefined8 *)(param_1 + 0x18));
            uVar6 = (ulong)((int)uVar6 + 1);
          }
          if (plVar5[1] != 0) {
            FUN_100c99700(*(undefined8 *)(param_1 + 0x18));
            uVar6 = (ulong)((int)uVar6 + 1);
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_100c60800(lVar4);
        } while (iVar1 < iVar2);
      }
      FUN_100c60790(lVar4,FUN_100c7dfd0);
      return uVar6;
    }
    uVar7 = 9;
    uVar8 = 0x103;
  }
  FUN_100c62ee0(0xb,0x84,uVar7,"by_file.c",uVar8);
  return 0;
}

