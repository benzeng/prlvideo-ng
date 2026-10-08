
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100185c50(long *param_1,long param_2)

{
  long *plVar1;
  double *pdVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  double *pdVar7;
  long *plVar8;
  long *plVar9;
  double dVar10;
  double dVar11;
  long lVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double local_48;
  undefined4 local_3e;
  undefined2 local_3a;
  undefined1 local_38;
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  
  plVar1 = (long *)*param_1;
  local_48 = DAT_100e150e0;
  bVar4 = 0;
  dVar11 = 0.0;
  dVar17 = DAT_100e150e0;
  if (plVar1 != param_1 + 1) {
    if (param_2 != 0) {
      dVar10 = *(double *)(param_2 + 8);
      if (dVar10 == DAT_100e150e0) {
        if ((*(double *)(param_2 + 0x10) == DAT_100e150e0) &&
           (!NAN(*(double *)(param_2 + 0x10)) && !NAN(DAT_100e150e0))) goto LAB_100185ced;
      }
      dVar11 = 0.0;
      if (*(char *)(param_2 + 0x18) != '\0') {
        bVar4 = 0;
        if ((dVar10 != 0.0) || (NAN(dVar10))) goto LAB_100185df8;
      }
    }
LAB_100185ced:
    plVar9 = (long *)plVar1[1];
    plVar8 = plVar1;
    if ((long *)plVar1[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar8[2];
        bVar13 = (long *)*plVar6 != plVar8;
        plVar8 = plVar6;
      } while (bVar13);
    }
    else {
      do {
        plVar6 = plVar9;
        plVar9 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
    dVar11 = 0.0;
    bVar4 = 0;
    pdVar7 = (double *)plVar1[4];
    dVar10 = _DAT_100e150f8;
    while (plVar6 != param_1 + 1) {
      pdVar2 = (double *)plVar6[4];
      if ((*(int *)(pdVar7 + 5) == 1) && (*(int *)(pdVar2 + 5) == 0)) {
        dVar14 = *pdVar2 - *pdVar7;
        dVar16 = dVar10;
        if (dVar10 <= dVar14) {
          dVar16 = dVar14;
        }
        dVar16 = (double)(~-(ulong)(0.0 < dVar14) & (ulong)dVar14 |
                         (ulong)dVar16 & -(ulong)(0.0 < dVar14));
        if ((dVar16 < dVar17) && (dVar14 = pdVar2[4], pdVar7[4] != dVar14)) {
          bVar4 = FUN_100181b10();
          bVar4 = bVar4 ^ 1;
          dVar11 = dVar14;
          dVar17 = dVar16;
          dVar10 = _DAT_100e150f8;
        }
      }
      plVar1 = (long *)plVar6[1];
      plVar9 = plVar6;
      pdVar7 = pdVar2;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar9[2];
          bVar13 = (long *)*plVar6 != plVar9;
          plVar9 = plVar6;
        } while (bVar13);
      }
      else {
        do {
          plVar6 = plVar1;
          plVar1 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
  }
LAB_100185df8:
  plVar1 = (long *)param_1[3];
  param_1 = param_1 + 4;
  dVar10 = 0.0;
  bVar5 = 0;
  if (plVar1 == param_1) goto LAB_100185f9e;
  if (param_2 != 0) {
    dVar16 = *(double *)(param_2 + 8);
    if (dVar16 == DAT_100e150e0) {
      if ((*(double *)(param_2 + 0x10) == DAT_100e150e0) &&
         (!NAN(*(double *)(param_2 + 0x10)) && !NAN(DAT_100e150e0))) goto LAB_100185e7e;
    }
    if (*(char *)(param_2 + 0x18) != '\0') {
      dVar10 = 0.0;
      bVar5 = 0;
      if ((dVar16 == 0.0) && (!NAN(dVar16))) goto LAB_100185f9e;
      bVar5 = 0;
      dVar10 = 0.0;
      if ((*(double *)(param_2 + 0x10) != 0.0) || (NAN(*(double *)(param_2 + 0x10))))
      goto LAB_100185f9e;
    }
  }
LAB_100185e7e:
  plVar9 = (long *)plVar1[1];
  plVar8 = plVar1;
  if ((long *)plVar1[1] == (long *)0x0) {
    do {
      plVar6 = (long *)plVar8[2];
      bVar13 = (long *)*plVar6 != plVar8;
      plVar8 = plVar6;
    } while (bVar13);
  }
  else {
    do {
      plVar6 = plVar9;
      plVar9 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
  dVar10 = 0.0;
  bVar5 = 0;
  if (plVar6 == param_1) {
    local_48 = DAT_100e150e0;
  }
  else {
    local_48 = DAT_100e150e0;
    lVar12 = plVar1[4];
    dVar16 = _DAT_100e150f8;
    bVar5 = 0;
    do {
      lVar3 = plVar6[4];
      if ((*(int *)(lVar12 + 0x28) == 3) && (*(int *)(lVar3 + 0x28) == 2)) {
        dVar15 = *(double *)(lVar3 + 8) - *(double *)(lVar12 + 8);
        dVar14 = dVar16;
        if (dVar16 <= dVar15) {
          dVar14 = dVar15;
        }
        dVar14 = (double)(~-(ulong)(0.0 < dVar15) & (ulong)dVar15 |
                         (ulong)dVar14 & -(ulong)(0.0 < dVar15));
        if ((dVar14 < local_48) &&
           (dVar15 = *(double *)(lVar3 + 0x20), *(double *)(lVar12 + 0x20) != dVar15)) {
          bVar5 = FUN_100181b10(lVar12,lVar3);
          bVar5 = bVar5 ^ 1;
          dVar10 = dVar15;
          dVar16 = _DAT_100e150f8;
          local_48 = dVar14;
        }
      }
      plVar1 = (long *)plVar6[1];
      plVar9 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar9[2];
          bVar13 = (long *)*plVar6 != plVar9;
          plVar9 = plVar6;
        } while (bVar13);
      }
      else {
        do {
          plVar6 = plVar1;
          plVar1 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      lVar12 = lVar3;
    } while (plVar6 != param_1);
  }
LAB_100185f9e:
  pdVar7 = operator_new(0x20);
  if (dVar17 <= local_48) {
    *pdVar7 = dVar11;
    pdVar7[1] = dVar17;
    pdVar7[2] = 0.0;
    *(undefined1 *)((long)pdVar7 + 0x1f) = local_31;
    *(undefined2 *)((long)pdVar7 + 0x1d) = local_33;
    *(undefined4 *)((long)pdVar7 + 0x19) = local_37;
  }
  else {
    *pdVar7 = dVar10;
    pdVar7[1] = 0.0;
    pdVar7[2] = local_48;
    *(undefined1 *)((long)pdVar7 + 0x1f) = local_38;
    *(undefined2 *)((long)pdVar7 + 0x1d) = local_3a;
    *(undefined4 *)((long)pdVar7 + 0x19) = local_3e;
    bVar4 = bVar5;
  }
  *(byte *)(pdVar7 + 3) = bVar4;
  return;
}

