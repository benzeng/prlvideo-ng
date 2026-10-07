
long * FUN_1005b53b0(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  
  lVar8 = 0;
  plVar7 = param_1;
  while (plVar7 != param_2) {
    plVar3 = (long *)plVar7[1];
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar7[2];
        bVar10 = (long *)*plVar5 != plVar7;
        plVar7 = plVar5;
      } while (bVar10);
    }
    else {
      do {
        plVar5 = plVar3;
        plVar3 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
    lVar8 = lVar8 + 1;
    plVar7 = plVar5;
  }
  while (lVar9 = lVar8, lVar9 != 0) {
    lVar8 = lVar9 / 2;
    lVar6 = lVar8;
    plVar7 = param_1;
    lVar2 = lVar9;
    if (lVar9 < -1) {
      do {
        plVar3 = (long *)*plVar7;
        plVar5 = plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          do {
            plVar7 = (long *)plVar5[2];
            bVar10 = (long *)*plVar7 == plVar5;
            plVar5 = plVar7;
          } while (bVar10);
        }
        else {
          do {
            plVar7 = plVar3;
            plVar3 = (long *)plVar7[1];
          } while ((long *)plVar7[1] != (long *)0x0);
        }
        bVar10 = lVar6 < -1;
        lVar6 = lVar6 + 1;
      } while (bVar10);
    }
    else {
      while (lVar1 = lVar6, 1 < lVar2) {
        plVar3 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar5 = (long *)plVar7[2];
            bVar10 = (long *)*plVar5 != plVar7;
            plVar7 = plVar5;
          } while (bVar10);
        }
        else {
          do {
            plVar5 = plVar3;
            plVar3 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        lVar6 = lVar1 + -1;
        plVar7 = plVar5;
        lVar2 = lVar1;
      }
    }
    cVar4 = (*(code *)*param_4)(*param_3,*(undefined4 *)(param_3 + 1),plVar7[4],(int)plVar7[5]);
    if (cVar4 == '\0') {
      plVar3 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          param_1 = (long *)plVar7[2];
          bVar10 = (long *)*param_1 != plVar7;
          plVar7 = param_1;
        } while (bVar10);
      }
      else {
        do {
          param_1 = plVar3;
          plVar3 = (long *)*param_1;
        } while ((long *)*param_1 != (long *)0x0);
      }
      lVar8 = (lVar9 + -1) - lVar8;
    }
  }
  return param_1;
}

