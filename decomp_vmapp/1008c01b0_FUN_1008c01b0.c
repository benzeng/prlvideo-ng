
int FUN_1008c01b0(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar3 = FUN_10087ece0();
  lVar4 = FUN_10087d330(uVar3);
  if ((lVar4 == 0) || (lVar5 = FUN_10087db60(lVar4,0x6c,3,param_2), lVar5 < 1)) {
    uVar3 = 2;
    uVar7 = 0xc4;
LAB_1008c0254:
    FUN_100887ce0(0xb,0x70,uVar3,"by_file.c",uVar7);
    iVar8 = 0;
  }
  else if (param_3 == 2) {
    iVar8 = 0;
    lVar5 = FUN_1008beed0(lVar4,0);
    if (lVar5 == 0) {
      FUN_100887ce0(0xb,0x70,0xd,"by_file.c",0xe0);
      goto LAB_1008c033b;
    }
    iVar1 = FUN_1008be180(*(undefined8 *)(param_1 + 0x18),lVar5);
LAB_1008c02e2:
    iVar8 = iVar1;
    FUN_1008a20a0(lVar5);
  }
  else {
    if (param_3 != 1) {
      FUN_100887ce0(0xb,0x70,100,"by_file.c",0xe8);
      iVar8 = 0;
      goto LAB_1008c033b;
    }
    iVar8 = 0;
    lVar5 = FUN_1008b4600(lVar4,0,0,0);
    if (lVar5 != 0) {
      iVar8 = 0;
      do {
        iVar2 = FUN_1008be180(*(undefined8 *)(param_1 + 0x18),lVar5);
        iVar1 = 0;
        if (iVar2 == 0) goto LAB_1008c02e2;
        iVar8 = iVar8 + 1;
        FUN_1008a20a0(lVar5);
        lVar5 = FUN_1008b4600(lVar4,0,0,0);
      } while (lVar5 != 0);
    }
    uVar6 = FUN_1008885f0();
    if ((iVar8 < 1) || ((uVar6 & 0xfff) != 0x6c)) {
      uVar3 = 9;
      uVar7 = 0xd1;
      goto LAB_1008c0254;
    }
    FUN_100888070();
  }
  if (lVar4 == 0) {
    return iVar8;
  }
LAB_1008c033b:
  FUN_10087d4e0(lVar4);
  return iVar8;
}

