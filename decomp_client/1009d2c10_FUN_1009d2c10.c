
void FUN_1009d2c10(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  
LAB_1009d2c50:
  plVar14 = param_2 + -1;
  plVar16 = param_1;
LAB_1009d2c86:
  param_1 = plVar16;
  lVar13 = (long)param_2 - (long)param_1;
  lVar8 = lVar13 >> 3;
  switch(lVar8) {
  case 0:
  case 1:
    goto switchD_1009d3050_caseD_0;
  case 2:
    lVar8 = *param_1;
    if (*(ulong *)(*plVar14 + 0x20) < *(ulong *)(lVar8 + 0x20)) {
      *param_1 = *plVar14;
      *plVar14 = lVar8;
      return;
    }
    return;
  case 3:
    lVar8 = *param_1;
    lVar13 = param_1[1];
    uVar3 = *(ulong *)(lVar13 + 0x20);
    uVar2 = *(ulong *)(lVar8 + 0x20);
    lVar11 = *plVar14;
    if (uVar2 <= uVar3) {
      if (uVar3 <= *(ulong *)(lVar11 + 0x20)) {
        return;
      }
      param_1[1] = lVar11;
      *plVar14 = lVar13;
      lVar8 = *param_1;
      if (*(ulong *)(param_1[1] + 0x20) < *(ulong *)(lVar8 + 0x20)) {
        *param_1 = param_1[1];
        param_1[1] = lVar8;
        return;
      }
      return;
    }
    if (*(ulong *)(lVar11 + 0x20) < uVar3) {
      *param_1 = lVar11;
      *plVar14 = lVar8;
      return;
    }
    *param_1 = lVar13;
    param_1[1] = lVar8;
    if (*(ulong *)(*plVar14 + 0x20) < uVar2) {
      param_1[1] = *plVar14;
      *plVar14 = lVar8;
      return;
    }
    return;
  case 4:
    FUN_1009d32b0(param_1,param_1 + 1,param_1 + 2,plVar14,param_3);
    return;
  case 5:
    plVar16 = param_1 + 2;
    plVar9 = param_1 + 3;
    FUN_1009d32b0(param_1,param_1 + 1,plVar16,plVar9,param_3);
    lVar8 = param_1[3];
    if (*(ulong *)(lVar8 + 0x20) <= *(ulong *)(*plVar14 + 0x20)) {
      return;
    }
    *plVar9 = *plVar14;
    *plVar14 = lVar8;
    lVar8 = *plVar9;
    lVar13 = *plVar16;
    if (*(ulong *)(lVar13 + 0x20) <= *(ulong *)(lVar8 + 0x20)) {
      return;
    }
    *plVar16 = lVar8;
    *plVar9 = lVar13;
    lVar13 = param_1[1];
    if (*(ulong *)(lVar13 + 0x20) <= *(ulong *)(lVar8 + 0x20)) {
      return;
    }
    param_1[1] = lVar8;
    param_1[2] = lVar13;
    lVar13 = *param_1;
    if (*(ulong *)(lVar13 + 0x20) <= *(ulong *)(lVar8 + 0x20)) {
      return;
    }
    *param_1 = lVar8;
    param_1[1] = lVar13;
    return;
  default:
    if (0x37 < lVar13) {
      lVar11 = lVar8 - (lVar13 >> 0x3f) >> 1;
      plVar16 = param_1 + lVar11;
      if (lVar13 < 0x1f39) {
        lVar8 = *plVar16;
        lVar13 = *param_1;
        uVar3 = *(ulong *)(lVar8 + 0x20);
        uVar2 = *(ulong *)(lVar13 + 0x20);
        lVar11 = *plVar14;
        if (uVar3 < uVar2) {
          if (*(ulong *)(lVar11 + 0x20) < uVar3) {
            *param_1 = lVar11;
            *plVar14 = lVar13;
            iVar7 = 1;
          }
          else {
            *param_1 = lVar8;
            *plVar16 = lVar13;
            if (*(ulong *)(*plVar14 + 0x20) < uVar2) {
              *plVar16 = *plVar14;
              *plVar14 = lVar13;
LAB_1009d2e13:
              iVar7 = 2;
            }
            else {
              iVar7 = 1;
            }
          }
        }
        else if (*(ulong *)(lVar11 + 0x20) < uVar3) {
          *plVar16 = lVar11;
          *plVar14 = lVar8;
          lVar8 = *param_1;
          if (*(ulong *)(*plVar16 + 0x20) < *(ulong *)(lVar8 + 0x20)) {
            *param_1 = *plVar16;
            *plVar16 = lVar8;
            goto LAB_1009d2e13;
          }
          iVar7 = 1;
        }
        else {
          iVar7 = 0;
        }
      }
      else {
        lVar8 = (long)(((ulong)(lVar13 >> 0x3f) >> 0x3e) + lVar8) >> 2;
        plVar9 = param_1 + lVar8;
        lVar8 = lVar8 + lVar11;
        plVar12 = param_1 + lVar8;
        iVar7 = FUN_1009d32b0(param_1,plVar9,plVar16,plVar12,param_3);
        lVar8 = param_1[lVar8];
        if (*(ulong *)(*plVar14 + 0x20) < *(ulong *)(lVar8 + 0x20)) {
          *plVar12 = *plVar14;
          *plVar14 = lVar8;
          lVar8 = *plVar16;
          if (*(ulong *)(*plVar12 + 0x20) < *(ulong *)(lVar8 + 0x20)) {
            *plVar16 = *plVar12;
            *plVar12 = lVar8;
            lVar8 = *plVar9;
            if (*(ulong *)(*plVar16 + 0x20) < *(ulong *)(lVar8 + 0x20)) {
              *plVar9 = *plVar16;
              *plVar16 = lVar8;
              lVar8 = *param_1;
              if (*(ulong *)(*plVar9 + 0x20) < *(ulong *)(lVar8 + 0x20)) {
                *param_1 = *plVar9;
                *plVar9 = lVar8;
                iVar7 = iVar7 + 4;
              }
              else {
                iVar7 = iVar7 + 3;
              }
            }
            else {
              iVar7 = iVar7 + 2;
            }
          }
          else {
            iVar7 = iVar7 + 1;
          }
        }
      }
      lVar8 = *param_1;
      uVar3 = *(ulong *)(lVar8 + 0x20);
      plVar9 = plVar14;
      plVar12 = param_2;
      if (*(ulong *)(*plVar16 + 0x20) <= uVar3) break;
      goto LAB_1009d2e88;
    }
    lVar8 = *param_1;
    lVar13 = param_1[1];
    uVar3 = *(ulong *)(lVar13 + 0x20);
    uVar2 = *(ulong *)(lVar8 + 0x20);
    lVar11 = param_1[2];
    uVar4 = *(ulong *)(lVar11 + 0x20);
    lVar10 = lVar11;
    if (uVar3 < uVar2) {
      if (uVar4 < uVar3) {
        *param_1 = lVar11;
      }
      else {
        *param_1 = lVar13;
        param_1[1] = lVar8;
        if (uVar2 <= uVar4) goto LAB_1009d321e;
        param_1[1] = lVar11;
      }
      param_1[2] = lVar8;
      lVar10 = lVar8;
    }
    else if (uVar4 < uVar3) {
      param_1[1] = lVar11;
      param_1[2] = lVar13;
      lVar10 = lVar13;
      if (uVar4 < uVar2) {
        *param_1 = lVar11;
        param_1[1] = lVar8;
      }
    }
LAB_1009d321e:
    lVar8 = 0;
    plVar14 = param_1 + 3;
    if (param_1 + 3 == param_2) {
      return;
    }
    goto LAB_1009d323a;
  }
  while (plVar15 = plVar9, plVar9 = plVar12 + -2, param_1 != plVar9) {
    plVar12 = plVar15;
    if (*(ulong *)(*plVar9 + 0x20) < *(ulong *)(*plVar16 + 0x20)) goto code_r0x0001009d2e7f;
  }
  plVar9 = param_1 + 1;
  plVar16 = param_1;
  if (*(ulong *)(*plVar14 + 0x20) <= uVar3) {
    while( true ) {
      plVar12 = plVar9;
      if (plVar12 == plVar14) {
        return;
      }
      lVar8 = *plVar12;
      if (uVar3 < *(ulong *)(lVar8 + 0x20)) break;
      plVar9 = plVar16 + 2;
      plVar16 = plVar12;
    }
    *plVar12 = *plVar14;
    *plVar14 = lVar8;
    plVar9 = plVar12 + 1;
  }
  plVar12 = plVar14;
  if (plVar9 == plVar14) {
    return;
  }
  while( true ) {
    do {
      plVar16 = plVar9;
      lVar8 = *plVar16;
      plVar9 = plVar16 + 1;
    } while (*(ulong *)(lVar8 + 0x20) <= *(ulong *)(*param_1 + 0x20));
    do {
      plVar15 = plVar12 + -1;
      plVar12 = plVar12 + -1;
    } while (*(ulong *)(*param_1 + 0x20) < *(ulong *)(*plVar15 + 0x20));
    if (plVar12 <= plVar16) break;
    *plVar16 = *plVar15;
    *plVar12 = lVar8;
  }
  goto LAB_1009d2c86;
code_r0x0001009d2e7f:
  *param_1 = *plVar9;
  *plVar9 = lVar8;
  iVar7 = iVar7 + 1;
LAB_1009d2e88:
  plVar12 = param_1 + 1;
  plVar15 = plVar12;
  if (plVar12 < plVar9) {
    while( true ) {
      do {
        plVar15 = plVar12;
        lVar8 = *plVar15;
        plVar12 = plVar15 + 1;
      } while (*(ulong *)(lVar8 + 0x20) < *(ulong *)(*plVar16 + 0x20));
      do {
        plVar1 = plVar9 + -1;
        plVar9 = plVar9 + -1;
      } while (*(ulong *)(*plVar16 + 0x20) <= *(ulong *)(*plVar1 + 0x20));
      if (plVar9 < plVar15) break;
      *plVar15 = *plVar1;
      *plVar9 = lVar8;
      iVar7 = iVar7 + 1;
      if (plVar16 == plVar15) {
        plVar16 = plVar9;
      }
    }
  }
  if (plVar15 != plVar16) {
    lVar8 = *plVar15;
    if (*(ulong *)(*plVar16 + 0x20) < *(ulong *)(lVar8 + 0x20)) {
      *plVar15 = *plVar16;
      *plVar16 = lVar8;
      iVar7 = iVar7 + 1;
    }
  }
  if (iVar7 == 0) {
    cVar5 = FUN_1009d3390(param_1,plVar15,param_3);
    cVar6 = FUN_1009d3390(plVar15 + 1,param_2,param_3);
    if (cVar6 != '\0') goto LAB_1009d302c;
    plVar16 = plVar15 + 1;
    if (cVar5 != '\0') goto LAB_1009d2c86;
  }
  if ((long)param_2 - (long)plVar15 <= (long)plVar15 - (long)param_1) {
    FUN_1009d2c10(plVar15 + 1,param_2,param_3);
    param_2 = plVar15;
    goto LAB_1009d2c50;
  }
  FUN_1009d2c10(param_1,plVar15,param_3);
  plVar16 = plVar15 + 1;
  goto LAB_1009d2c86;
LAB_1009d302c:
  param_2 = plVar15;
  if (cVar5 != '\0') {
    return;
  }
  goto LAB_1009d2c50;
LAB_1009d323a:
  lVar13 = *plVar14;
  uVar3 = *(ulong *)(lVar13 + 0x20);
  lVar11 = lVar8;
  if (uVar3 < *(ulong *)(lVar10 + 0x20)) {
    do {
      lVar10 = lVar11;
      *(undefined8 *)((long)param_1 + lVar10 + 0x18) =
           *(undefined8 *)((long)param_1 + lVar10 + 0x10);
      if (lVar10 == -0x10) break;
      lVar11 = lVar10 + -8;
    } while (uVar3 < *(ulong *)(*(long *)((long)param_1 + lVar10 + 8) + 0x20));
    *(long *)((long)param_1 + lVar10 + 0x10) = lVar13;
  }
  if (plVar14 + 1 == param_2) {
switchD_1009d3050_caseD_0:
    return;
  }
  lVar10 = *plVar14;
  lVar8 = lVar8 + 8;
  plVar14 = plVar14 + 1;
  goto LAB_1009d323a;
}

