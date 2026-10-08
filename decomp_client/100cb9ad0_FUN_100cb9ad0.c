
long FUN_100cb9ad0(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  iVar2 = FUN_100bf7220(*param_1);
  if (iVar2 == 0x16) {
    plVar1 = (long *)param_1[1];
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    if (*(int *)(plVar1[2] + 0x10) != 0) {
      iVar2 = FUN_100c60800(plVar1[3]);
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          piVar4 = (int *)FUN_100c60820(plVar1[3],iVar2);
          iVar3 = *piVar4;
          if (iVar3 == 2) {
            if (*plVar1 < 3) {
              *plVar1 = 3;
            }
          }
          else if (iVar3 == 3) {
            if (*plVar1 < 4) {
              *plVar1 = 4;
            }
          }
          else if ((iVar3 == 4) && (*plVar1 < 5)) {
            *plVar1 = 5;
          }
          iVar2 = iVar2 + 1;
          iVar3 = FUN_100c60800(plVar1[3]);
        } while (iVar2 < iVar3);
      }
      iVar2 = FUN_100c60800(plVar1[4]);
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          piVar4 = (int *)FUN_100c60820(plVar1[4],iVar2);
          if ((*piVar4 == 1) && (*plVar1 < 5)) {
            *plVar1 = 5;
          }
          iVar2 = iVar2 + 1;
          iVar3 = FUN_100c60800(plVar1[4]);
        } while (iVar2 < iVar3);
      }
      iVar2 = FUN_100bf7220(*(undefined8 *)plVar1[2]);
      if ((iVar2 != 0x15) && (*plVar1 < 3)) {
        *plVar1 = 3;
      }
      iVar2 = FUN_100c60800(plVar1[5]);
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          plVar5 = (long *)FUN_100c60820(plVar1[5],iVar2);
          if (*(int *)plVar5[1] == 1) {
            if (*plVar5 < 3) {
              *plVar5 = 3;
            }
            if (*plVar1 < 3) {
              *plVar1 = 3;
            }
          }
          else if (*plVar5 < 1) {
            *plVar5 = 1;
          }
          iVar2 = iVar2 + 1;
          iVar3 = FUN_100c60800(plVar1[5]);
        } while (iVar2 < iVar3);
      }
      if (*plVar1 < 1) {
        *plVar1 = 1;
      }
    }
    iVar2 = FUN_100c60800(plVar1[1]);
    iVar3 = 0;
    if (0 < iVar2) {
      lVar8 = 0;
      while( true ) {
        uVar6 = FUN_100c60820(plVar1[1],iVar3);
        lVar7 = FUN_100cb7710(uVar6);
        if (lVar7 == 0) break;
        if (lVar8 != 0) {
          FUN_100c591b0(lVar8,lVar7);
          lVar7 = lVar8;
        }
        iVar3 = iVar3 + 1;
        iVar2 = FUN_100c60800(plVar1[1]);
        lVar8 = lVar7;
        if (iVar2 <= iVar3) {
          return lVar7;
        }
      }
      if (lVar8 == 0) {
        return 0;
      }
      FUN_100c59480(lVar8);
    }
  }
  else {
    FUN_100c62ee0(0x2e,0x85,0x6c,"cms_sd.c",0x47);
  }
  return 0;
}

