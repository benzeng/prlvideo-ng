
void FUN_1000e1a80(undefined8 param_1,ushort *param_2,undefined8 param_3,ushort *param_4,
                  undefined8 param_5)

{
  ushort *puVar1;
  ushort uVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  ushort uVar9;
  long lVar10;
  ulong uVar11;
  ushort *puVar12;
  long lVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  undefined8 local_78;
  
  local_78 = param_3;
LAB_1000e1ae0:
  do {
    puVar17 = param_2;
    puVar1 = puVar17 + -1;
LAB_1000e1b1d:
    lVar10 = (long)puVar17 - (long)param_4;
    lVar8 = lVar10 >> 1;
    switch(lVar8) {
    case 0:
    case 1:
      goto switchD_1000e1f3c_caseD_0;
    case 2:
      uVar6 = *puVar1;
      if (uVar6 <= *param_4) {
        return;
      }
      *puVar1 = *param_4;
      *param_4 = uVar6;
      return;
    case 3:
      uVar6 = puVar17[-2];
      uVar9 = puVar17[-1];
      uVar2 = *param_4;
      if (uVar6 < uVar9) {
        if (uVar2 < uVar6) {
          *puVar1 = uVar2;
          *param_4 = uVar9;
          return;
        }
        puVar17[-1] = uVar6;
        puVar17[-2] = uVar9;
        if (uVar9 <= *param_4) {
          return;
        }
        puVar17[-2] = *param_4;
        *param_4 = uVar9;
        return;
      }
      if (uVar6 <= uVar2) {
        return;
      }
      puVar17[-2] = uVar2;
      *param_4 = uVar6;
      uVar6 = puVar17[-2];
      uVar9 = puVar17[-1];
      if (uVar9 <= uVar6) {
        return;
      }
      goto LAB_1000e21cf;
    case 4:
      uVar6 = puVar17[-2];
      uVar9 = puVar17[-1];
      uVar2 = puVar17[-3];
      uVar5 = uVar2;
      if (uVar6 < uVar9) {
        if (uVar2 < uVar6) {
          puVar17[-1] = uVar2;
        }
        else {
          puVar17[-1] = uVar6;
          puVar17[-2] = uVar9;
          if (uVar9 <= uVar2) goto LAB_1000e2197;
          puVar17[-2] = uVar2;
        }
        puVar17[-3] = uVar9;
        uVar5 = uVar9;
      }
      else if (uVar2 < uVar6) {
        puVar17[-2] = uVar2;
        puVar17[-3] = uVar6;
        uVar5 = uVar6;
        if (uVar2 < uVar9) {
          puVar17[-1] = uVar2;
          puVar17[-2] = uVar9;
        }
      }
LAB_1000e2197:
      if (uVar5 <= *param_4) {
        return;
      }
      puVar17[-3] = *param_4;
      *param_4 = uVar5;
      uVar6 = puVar17[-3];
      uVar9 = puVar17[-2];
      if (uVar9 <= uVar6) {
        return;
      }
      puVar17[-2] = uVar6;
      puVar17[-3] = uVar9;
      uVar9 = puVar17[-1];
      if (uVar9 <= uVar6) {
        return;
      }
LAB_1000e21cf:
      puVar17[-1] = uVar6;
      puVar17[-2] = uVar9;
      return;
    case 5:
      FUN_1000e2210(param_1,puVar17,puVar1,puVar1,puVar17 + -2,puVar17 + -2,puVar17 + -3,
                    puVar17 + -3,local_78,param_4 + 1,param_5);
      return;
    default:
      if (lVar10 < 0x3e) {
        puVar12 = puVar17 + -2;
        uVar6 = puVar17[-2];
        uVar9 = puVar17[-1];
        puVar16 = puVar17 + -3;
        uVar2 = puVar17[-3];
        if (uVar6 < uVar9) {
          if (uVar2 < uVar6) {
            *puVar1 = uVar2;
          }
          else {
            *puVar1 = uVar6;
            *puVar12 = uVar9;
            if (uVar9 <= uVar2) goto LAB_1000e20de;
            *puVar12 = uVar2;
          }
          *puVar16 = uVar9;
        }
        else if (uVar2 < uVar6) {
          *puVar12 = uVar2;
          *puVar16 = uVar6;
          if (uVar2 < uVar9) {
            *puVar1 = uVar2;
            *puVar12 = uVar9;
          }
        }
LAB_1000e20de:
        if (puVar16 == param_4) {
          return;
        }
        lVar8 = -6;
        goto LAB_1000e20f0;
      }
      puVar12 = param_4 + 1;
      uVar11 = lVar8 - (lVar10 >> 0x3f);
      lVar13 = (long)uVar11 >> 1;
      puVar16 = (ushort *)((long)puVar17 - (uVar11 & 0xfffffffffffffffe));
      if (lVar10 < 1999) {
        uVar6 = puVar17[-1 - lVar13];
        uVar9 = puVar17[-1];
        uVar2 = *param_4;
        if (uVar6 < uVar9) {
          if (uVar2 < uVar6) {
            *puVar1 = uVar2;
            *param_4 = uVar9;
            iVar7 = 1;
          }
          else {
            puVar17[-1] = uVar6;
            puVar17[-1 - lVar13] = uVar9;
            iVar7 = 1;
            if (*param_4 < uVar9) {
              puVar17[-1 - lVar13] = *param_4;
              *param_4 = uVar9;
LAB_1000e1ca4:
              iVar7 = 2;
            }
          }
        }
        else {
          iVar7 = 0;
          if (uVar2 < uVar6) {
            puVar17[-1 - lVar13] = uVar2;
            *param_4 = uVar6;
            uVar6 = puVar17[-1];
            iVar7 = 1;
            if (puVar17[-1 - lVar13] < uVar6) {
              puVar17[-1] = puVar17[-1 - lVar13];
              puVar17[-1 - lVar13] = uVar6;
              goto LAB_1000e1ca4;
            }
          }
        }
      }
      else {
        lVar8 = (long)(((ulong)(lVar10 >> 0x3f) >> 0x3e) + lVar8) >> 2;
        iVar7 = FUN_1000e2210(param_1,puVar17,puVar17 + -lVar8,puVar17 + -lVar8,param_1,puVar16,
                              puVar17 + (-lVar13 - lVar8),puVar17 + (-lVar13 - lVar8),local_78,
                              puVar12,param_5);
      }
      uVar6 = puVar17[-1];
      puVar14 = puVar12;
      if (uVar6 < puVar17[-lVar13 + -1]) goto LAB_1000e1d18;
      while (puVar15 = puVar14, puVar14 = puVar15 + 1, puVar17 != puVar14) {
        if (*puVar15 < puVar17[-lVar13 + -1]) goto code_r0x0001000e1d0a;
      }
      puVar16 = puVar1;
      if (*param_4 <= uVar6) {
        if (puVar1 == puVar12) {
          return;
        }
        while( true ) {
          puVar14 = puVar16;
          uVar9 = puVar17[-2];
          puVar16 = puVar17 + -2;
          if (uVar6 < uVar9) break;
          puVar17 = puVar14;
          if (puVar16 == puVar12) {
            return;
          }
        }
        *puVar16 = *param_4;
        *param_4 = uVar9;
      }
      if (puVar16 == puVar12) {
        return;
      }
      while( true ) {
        uVar6 = puVar16[-1];
        puVar17 = puVar16 + -1;
        param_2 = puVar16;
        while (puVar16 = puVar17, uVar6 <= *puVar1) {
          uVar6 = param_2[-2];
          puVar17 = param_2 + -2;
          param_2 = puVar16;
        }
        do {
          puVar17 = puVar12;
          puVar12 = puVar17 + 1;
        } while (*puVar1 < *puVar17);
        if (param_2 <= puVar12) break;
        *puVar16 = *puVar17;
        *puVar17 = uVar6;
      }
    }
  } while( true );
LAB_1000e20f0:
  puVar1 = puVar16 + -1;
  uVar6 = puVar16[-1];
  if (uVar6 < puVar12[-1]) {
    *puVar1 = puVar12[-1];
    lVar10 = lVar8;
    if (puVar12 == puVar17) {
      puVar12 = puVar12 + -1;
    }
    else {
      do {
        uVar9 = *(ushort *)((long)puVar17 + lVar10 + 2);
        if (uVar9 <= uVar6) break;
        *(ushort *)((long)puVar17 + lVar10) = uVar9;
        lVar10 = lVar10 + 2;
      } while (lVar10 != -2);
      puVar12 = (ushort *)(lVar10 + (long)puVar17);
    }
    *puVar12 = uVar6;
  }
  lVar8 = lVar8 + -2;
  puVar12 = puVar16;
  puVar16 = puVar1;
  if (puVar1 == param_4) {
switchD_1000e1f3c_caseD_0:
    return;
  }
  goto LAB_1000e20f0;
code_r0x0001000e1d0a:
  *puVar1 = *puVar15;
  *puVar15 = uVar6;
  iVar7 = iVar7 + 1;
  puVar12 = puVar14;
LAB_1000e1d18:
  puVar14 = puVar1;
  puVar15 = puVar1;
  if (puVar12 < puVar1) {
    while( true ) {
      uVar6 = puVar14[-1];
      puVar18 = puVar14 + -1;
      puVar15 = puVar14;
      while (puVar14 = puVar18, uVar6 < puVar16[-1]) {
        uVar6 = puVar15[-2];
        puVar18 = puVar15 + -2;
        puVar15 = puVar14;
      }
      do {
        puVar18 = puVar12;
        puVar12 = puVar18 + 1;
      } while (puVar16[-1] <= *puVar18);
      if (puVar15 < puVar12) break;
      *puVar14 = *puVar18;
      *puVar18 = uVar6;
      iVar7 = iVar7 + 1;
      if (puVar16 == puVar15) {
        puVar16 = puVar12;
      }
    }
  }
  if (puVar15 != puVar16) {
    uVar6 = puVar15[-1];
    if (puVar16[-1] < uVar6) {
      puVar15[-1] = puVar16[-1];
      puVar16[-1] = uVar6;
      iVar7 = iVar7 + 1;
    }
  }
  if (iVar7 == 0) {
    cVar3 = FUN_1000e2390(param_1,puVar17,param_1,puVar15,param_5);
    param_2 = puVar15 + -1;
    cVar4 = FUN_1000e2390(param_2,param_2,local_78,param_4,param_5);
    if (cVar4 != '\0') {
      param_4 = puVar15;
      local_78 = param_1;
      if (cVar3 != '\0') {
        return;
      }
      goto LAB_1000e1b1d;
    }
    if (cVar3 != '\0') goto LAB_1000e1ae0;
  }
  if ((long)puVar15 - (long)param_4 <= (long)puVar17 - (long)puVar15) {
    FUN_1000e1a80(puVar15 + -1,puVar15 + -1,local_78,param_4,param_5);
    param_4 = puVar15;
    local_78 = param_1;
    goto LAB_1000e1b1d;
  }
  FUN_1000e1a80(param_1,puVar17,param_1,puVar15,param_5);
  param_2 = puVar15 + -1;
  goto LAB_1000e1ae0;
}

