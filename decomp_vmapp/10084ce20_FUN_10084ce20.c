
long FUN_10084ce20(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar3 = FUN_100853e30();
  if (param_5 != 0) {
    lVar6 = (long)param_4;
    plVar4 = (long *)(param_1 + lVar6 * 8);
    if (param_5 < 0) {
      lVar1 = *(long *)(param_3 + lVar6 * 8);
      *plVar4 = -(lVar1 + lVar3);
      lVar8 = 1;
      if (lVar1 == 0) {
        lVar8 = lVar3;
      }
      lVar3 = lVar8;
      if (param_5 < -1) {
        lVar1 = param_3 + 0x20 + lVar6 * 8;
        lVar6 = param_1 + 0x20 + lVar6 * 8;
        lVar8 = 0;
        do {
          lVar2 = *(long *)(lVar1 + -0x18 + lVar8 * 8);
          *(long *)(lVar6 + -0x18 + lVar8 * 8) = -(lVar2 + lVar3);
          if (lVar2 != 0) {
            lVar3 = 1;
          }
          iVar5 = (int)lVar8;
          if (-1 < param_5 + iVar5 + 2) {
            return lVar3;
          }
          lVar2 = *(long *)(lVar1 + -0x10 + lVar8 * 8);
          *(long *)(lVar6 + -0x10 + lVar8 * 8) = -(lVar2 + lVar3);
          if (lVar2 != 0) {
            lVar3 = 1;
          }
          if (-1 < param_5 + iVar5 + 3) {
            return lVar3;
          }
          lVar2 = *(long *)(lVar1 + -8 + lVar8 * 8);
          *(long *)(lVar6 + -8 + lVar8 * 8) = -(lVar2 + lVar3);
          if (lVar2 != 0) {
            lVar3 = 1;
          }
          if (-1 < param_5 + iVar5 + 4) {
            return lVar3;
          }
          lVar2 = *(long *)(lVar1 + lVar8 * 8);
          *(long *)(lVar6 + lVar8 * 8) = -(lVar2 + lVar3);
          if (lVar2 != 0) {
            lVar3 = 1;
          }
          lVar8 = lVar8 + 4;
        } while ((int)lVar8 + param_5 < -1);
      }
    }
    else {
      plVar7 = (long *)(param_2 + lVar6 * 8);
      if (lVar3 != 0) {
        lVar6 = 0;
        do {
          iVar5 = param_5;
          lVar1 = *plVar7;
          *plVar4 = lVar1 - lVar3;
          if (lVar1 != 0) {
            lVar3 = lVar6;
          }
          if (iVar5 < 2) {
            return lVar3;
          }
          lVar1 = plVar7[1];
          plVar4[1] = lVar1 - lVar3;
          if (lVar1 != 0) {
            lVar3 = lVar6;
          }
          if (iVar5 < 3) {
            return lVar3;
          }
          lVar1 = plVar7[2];
          plVar4[2] = lVar1 - lVar3;
          if (lVar1 != 0) {
            lVar3 = lVar6;
          }
          if (iVar5 + -3 < 1) {
            return lVar3;
          }
          lVar1 = plVar7[3];
          plVar4[3] = lVar1 - lVar3;
          lVar8 = 0;
          if (lVar1 == 0) {
            lVar8 = lVar3;
          }
          if (iVar5 + -4 < 1) {
            return lVar8;
          }
          plVar7 = plVar7 + 4;
          plVar4 = plVar4 + 4;
          param_5 = iVar5 + -4;
        } while (lVar8 != 0);
        param_5 = iVar5 + -4;
      }
      *plVar4 = *plVar7;
      lVar3 = 0;
      if (1 < param_5) {
        lVar3 = 0;
        while( true ) {
          plVar4[1] = plVar7[1];
          if ((param_5 < 3) || (plVar4[2] = plVar7[2], param_5 < 4)) break;
          plVar4[3] = plVar7[3];
          iVar5 = param_5 + -4;
          if (iVar5 == 0 || param_5 < 4) {
            return 0;
          }
          plVar4[4] = plVar7[4];
          plVar4 = plVar4 + 4;
          plVar7 = plVar7 + 4;
          param_5 = iVar5;
          if (iVar5 < 2) {
            return 0;
          }
        }
      }
    }
  }
  return lVar3;
}

