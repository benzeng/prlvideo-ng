
long FUN_100cbcf00(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = 0;
  lVar7 = 0;
  if (((((param_5 != 0) && (param_4 != 0)) && (param_3 != 0)) &&
      ((lVar8 = lVar7, param_1 != 0 && (param_2 != 0)))) && (param_6 != 0)) {
    lVar7 = FUN_100c27a20();
    lVar8 = 0;
    if (lVar7 != 0) {
      lVar2 = FUN_100c26720();
      lVar5 = 0;
      lVar4 = 0;
      lVar8 = 0;
      lVar6 = 0;
      if (lVar2 != 0) {
        lVar3 = FUN_100c26720();
        lVar5 = 0;
        lVar4 = 0;
        lVar8 = 0;
        lVar6 = 0;
        if (lVar3 != 0) {
          lVar5 = FUN_100c26720();
          lVar4 = 0;
          lVar6 = lVar3;
          if (lVar5 == 0) {
            lVar5 = 0;
            lVar8 = 0;
          }
          else {
            lVar8 = FUN_100c26720();
            lVar4 = 0;
            if (lVar8 == 0) {
              lVar8 = 0;
            }
            else {
              iVar1 = FUN_100c239a0(lVar2,param_3,param_4,param_1,lVar7);
              lVar4 = 0;
              if (iVar1 != 0) {
                lVar4 = FUN_100cbcb90(param_1,param_3);
                if (lVar4 == 0) {
                  lVar4 = 0;
                }
                else {
                  iVar1 = FUN_100c29cc0(lVar3,lVar2,lVar4,param_1,lVar7);
                  if (((iVar1 != 0) &&
                      (iVar1 = FUN_100c29c00(lVar2,param_2,lVar3,param_1,lVar7), iVar1 != 0)) &&
                     ((iVar1 = FUN_100c29cc0(lVar5,param_6,param_4,param_1,lVar7), iVar1 != 0 &&
                      (iVar1 = FUN_100c29b30(lVar3,param_5,lVar5,param_1,lVar7), iVar1 != 0)))) {
                    FUN_100c239a0(lVar8,lVar2,lVar3,param_1,lVar7);
                  }
                }
              }
            }
          }
        }
      }
      FUN_100c27ab0(lVar7);
      FUN_100c26640(lVar2);
      FUN_100c26640(lVar6);
      FUN_100c26640(lVar5);
      FUN_100c266b0(lVar4);
    }
  }
  return lVar8;
}

