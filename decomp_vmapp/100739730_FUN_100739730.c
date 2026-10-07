
void FUN_100739730(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  lVar3 = FUN_100739960();
  if (param_5 != 0) {
    lVar8 = (long)param_4;
    plVar4 = (long *)(param_1 + lVar8 * 8);
    if (param_5 < 0) {
      lVar1 = *(long *)(param_3 + lVar8 * 8);
      *plVar4 = -(lVar1 + lVar3);
      if (param_5 < -1) {
        if (lVar1 != 0) {
          lVar3 = 1;
        }
        lVar1 = param_3 + 0x20 + lVar8 * 8;
        lVar8 = param_1 + 0x20 + lVar8 * 8;
        lVar6 = 0;
        do {
          lVar2 = *(long *)(lVar1 + -0x18 + lVar6 * 8);
          *(long *)(lVar8 + -0x18 + lVar6 * 8) = -(lVar2 + lVar3);
          if (lVar2 != 0) {
            lVar3 = 1;
          }
          iVar7 = (int)lVar6;
          if (-1 < param_5 + iVar7 + 2) {
            return;
          }
          lVar2 = *(long *)(lVar1 + -0x10 + lVar6 * 8);
          *(long *)(lVar8 + -0x10 + lVar6 * 8) = -(lVar2 + lVar3);
          if (lVar2 != 0) {
            lVar3 = 1;
          }
          if (-1 < param_5 + iVar7 + 3) {
            return;
          }
          lVar2 = *(long *)(lVar1 + -8 + lVar6 * 8);
          *(long *)(lVar8 + -8 + lVar6 * 8) = -(lVar2 + lVar3);
          if (-1 < param_5 + iVar7 + 4) {
            return;
          }
          if (lVar2 != 0) {
            lVar3 = 1;
          }
          lVar2 = *(long *)(lVar1 + lVar6 * 8);
          *(long *)(lVar8 + lVar6 * 8) = -(lVar2 + lVar3);
          if (lVar2 != 0) {
            lVar3 = 1;
          }
          lVar6 = lVar6 + 4;
        } while ((int)lVar6 + param_5 < -1);
      }
    }
    else {
      plVar5 = (long *)(param_2 + lVar8 * 8);
      if (lVar3 != 0) {
        lVar8 = 0;
        iVar7 = param_5;
        do {
          lVar1 = *plVar5;
          *plVar4 = lVar1 - lVar3;
          if (lVar1 != 0) {
            lVar3 = lVar8;
          }
          if (iVar7 < 2) {
            return;
          }
          lVar1 = plVar5[1];
          plVar4[1] = lVar1 - lVar3;
          if (lVar1 != 0) {
            lVar3 = lVar8;
          }
          if (iVar7 < 3) {
            return;
          }
          lVar1 = plVar5[2];
          plVar4[2] = lVar1 - lVar3;
          if (lVar1 != 0) {
            lVar3 = lVar8;
          }
          if (iVar7 + -3 < 1) {
            return;
          }
          lVar1 = plVar5[3];
          plVar4[3] = lVar1 - lVar3;
          if (iVar7 + -4 < 1) {
            return;
          }
          param_5 = iVar7 + -4;
          plVar5 = plVar5 + 4;
          plVar4 = plVar4 + 4;
        } while ((lVar3 != 0) && (iVar7 = iVar7 + -4, lVar1 == 0));
      }
      *plVar4 = *plVar5;
      if (1 < param_5) {
        while( true ) {
          plVar4[1] = plVar5[1];
          if ((param_5 < 3) || (plVar4[2] = plVar5[2], param_5 < 4)) break;
          plVar4[3] = plVar5[3];
          iVar7 = param_5 + -4;
          if (iVar7 == 0 || param_5 < 4) {
            return;
          }
          plVar4[4] = plVar5[4];
          param_5 = iVar7;
          plVar4 = plVar4 + 4;
          plVar5 = plVar5 + 4;
          if (iVar7 < 2) {
            return;
          }
        }
      }
    }
  }
  return;
}

