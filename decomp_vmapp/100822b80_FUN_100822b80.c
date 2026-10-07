
undefined4 FUN_100822b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = 0;
  iVar1 = FUN_100898d60(0,0,param_1,0xffffffff);
  if (0 < iVar1) {
    lVar4 = FUN_10081ddd0(iVar1,"obj_dat.c",0x312);
    if (lVar4 == 0) {
      FUN_100887ce0(8,100,0x41,"obj_dat.c",0x313);
    }
    else {
      iVar2 = FUN_100898d60(lVar4,iVar1,param_1,0xffffffff);
      iVar1 = DAT_1011ab6e4;
      uVar3 = 0;
      lVar6 = 0;
      if (iVar2 != 0) {
        DAT_1011ab6e4 = DAT_1011ab6e4 + 1;
        lVar5 = FUN_100899910(iVar1,lVar4,iVar2,param_2,param_3);
        uVar3 = 0;
        lVar6 = 0;
        if (lVar5 != 0) {
          uVar3 = FUN_1008215b0(lVar5);
          lVar6 = lVar5;
        }
      }
      FUN_100899890(lVar6);
      FUN_10081e1a0(lVar4);
    }
  }
  return uVar3;
}

