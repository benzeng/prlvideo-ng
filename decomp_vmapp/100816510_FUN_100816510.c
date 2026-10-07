
undefined8 FUN_100816510(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  bool bVar14;
  
  iVar10 = 0;
  for (plVar7 = (long *)*param_1; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[2]) {
    if (((int)plVar7[1] != 0) && (iVar10 <= *(int *)(*plVar7 + 0x50))) {
      iVar10 = *(int *)(*plVar7 + 0x50);
    }
  }
  uVar13 = (long)(iVar10 + 1) << 2;
  lVar6 = FUN_10081ddd0(uVar13 & 0xffffffff,"ssl_ciph.c",0x449);
  if (lVar6 == 0) {
    FUN_100887ce0(0x14,0xe7,0x41,"ssl_ciph.c",1099);
    uVar9 = 0;
  }
  else {
    ___bzero(lVar6,uVar13);
    for (plVar7 = (long *)*param_1; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[2]) {
      if ((int)plVar7[1] != 0) {
        piVar1 = (int *)(lVar6 + (long)*(int *)(*plVar7 + 0x50) * 4);
        *piVar1 = *piVar1 + 1;
      }
    }
    if (-1 < iVar10) {
      lVar8 = (long)iVar10;
      do {
        if (0 < *(int *)(lVar6 + lVar8 * 4)) {
          plVar7 = (long *)*param_1;
          plVar2 = (long *)*param_2;
          plVar12 = plVar2;
          plVar5 = plVar7;
          plVar3 = plVar2;
          if (plVar7 != (long *)0x0) {
            do {
              if (plVar3 == (long *)0x0) break;
              plVar3 = (long *)plVar5[2];
              if (((*(int *)(*plVar5 + 0x50) == (int)lVar8) && ((int)plVar5[1] != 0)) &&
                 (plVar12 != plVar5)) {
                if (plVar7 == plVar5) {
                  plVar7 = plVar3;
                }
                lVar4 = plVar5[3];
                plVar11 = plVar3;
                if (lVar4 != 0) {
                  *(long **)(lVar4 + 0x10) = plVar3;
                  plVar11 = (long *)plVar5[2];
                }
                if (plVar11 != (long *)0x0) {
                  plVar11[3] = lVar4;
                }
                plVar12[2] = (long)plVar5;
                plVar5[3] = (long)plVar12;
                plVar5[2] = 0;
                plVar12 = plVar5;
              }
              bVar14 = plVar5 != plVar2;
              plVar5 = plVar3;
            } while (bVar14);
          }
          *param_1 = (long)plVar7;
          *param_2 = (long)plVar12;
        }
        bVar14 = 0 < lVar8;
        lVar8 = lVar8 + -1;
      } while (bVar14);
    }
    FUN_10081e1a0(lVar6);
    uVar9 = 1;
  }
  return uVar9;
}

