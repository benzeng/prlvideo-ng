
long FUN_100cbca10(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  lVar3 = FUN_100c27a20();
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = FUN_100c26720();
  lVar8 = 0;
  lVar7 = 0;
  lVar6 = 0;
  if (lVar4 != 0) {
    lVar5 = FUN_100c26720();
    lVar8 = 0;
    lVar7 = 0;
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = FUN_100c26720();
      lVar7 = lVar5;
      if (lVar6 == 0) {
        lVar8 = 0;
        lVar6 = 0;
      }
      else {
        iVar2 = FUN_100c239a0(lVar5,param_3,param_1,param_2,lVar3);
        lVar1 = 0;
        if (iVar2 != 0) {
          lVar8 = FUN_100cbcb90(param_2,param_3);
          lVar1 = 0;
          if (((lVar8 != 0) &&
              (iVar2 = FUN_100c29cc0(lVar4,param_4,lVar8,param_2,lVar3), lVar1 = lVar8, iVar2 != 0))
             && (iVar2 = FUN_100c29b30(lVar6,lVar5,lVar4,param_2,lVar3), iVar2 != 0))
          goto LAB_100cbcb4b;
        }
        lVar8 = lVar1;
        FUN_100c266b0(lVar6);
        lVar6 = 0;
      }
    }
  }
LAB_100cbcb4b:
  FUN_100c27ab0(lVar3);
  FUN_100c26640(lVar4);
  FUN_100c26640(lVar7);
  FUN_100c266b0(lVar8);
  return lVar6;
}

