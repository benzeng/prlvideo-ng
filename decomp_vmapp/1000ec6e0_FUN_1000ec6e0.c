
undefined8
FUN_1000ec6e0(long param_1,uint *param_2,uint *param_3,long param_4,uint param_5,uint *param_6,
             uint param_7,uint param_8,uint param_9)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  long local_58;
  
  uVar13 = (ulong)param_7;
  if (0x7f < param_7) {
LAB_1000ec70a:
    uVar6 = *(undefined8 *)(param_2 + 0xb);
    param_6 = (uint *)(uVar13 & 0xffffffff);
    pcVar7 = "Too deep recursion. Item %s[%u], lev=0x%x";
LAB_1000ec727:
    FUN_1008e3970("","vm",0,pcVar7,uVar6,param_9,param_6);
    return 0;
  }
  uVar13 = (ulong)param_7;
  puVar8 = (undefined8 *)(&DAT_1011b6d80 + uVar13 * 8);
  local_58 = param_1;
LAB_1000ec76e:
  if ((uint *)(param_4 + (ulong)param_5) < param_6 + 4) {
    uVar6 = *(undefined8 *)(param_2 + 0xb);
    pcVar7 = "Ptr is out of range. Item %s[%u] (%p,0x%zx,%p,0x%x), line=%u";
    goto LAB_1000ec727;
  }
  if (param_3 < param_2) {
    uVar6 = *(undefined8 *)(param_3 + 0xb);
    uVar20 = 0x3dd;
LAB_1000ece33:
    FUN_1008e3970("","vm",0,"Current item is out of range. Cur=%p, End=%p %s[%u], line=%u",param_2,
                  param_3,uVar6,param_9,uVar20);
    return 0;
  }
  *puVar8 = param_2;
  if ((int)DAT_1011c37a0 != 0) {
    FUN_1000eabc0("Loading",param_2,param_4,param_6,uVar13 & 0xffffffff);
  }
  uVar2 = param_6[1];
  iVar12 = (int)uVar13;
  if ((int)uVar2 < -0x75600003) {
    if (uVar2 != 0x8a9ffffa) {
      if (uVar2 == 0x8a9ffffb) {
        return 1;
      }
      goto LAB_1000ecf00;
    }
    uVar9 = (ulong)param_6[3];
    param_6 = (uint *)(param_4 + uVar9);
    if ((ulong)param_5 < uVar9 + *(uint *)(param_4 + 8 + uVar9)) {
      uVar6 = *(undefined8 *)(param_2 + 0xb);
      pcVar7 = "Ptr is out of range. Item %s[%u] (%p,0x%x,%p,0x%x), line=%u";
    }
    else {
      uVar2 = *param_2;
      if (9 < (int)uVar2) {
        switch(uVar2) {
        case 10:
        case 0xb:
          goto switchD_1000ec823_caseD_a;
        case 0xc:
        case 0x10:
          if ((param_2[7] & param_8) != 0) {
            uVar6 = FUN_1000eb330(local_58,param_2,param_3,param_4,param_5,param_6,iVar12 + 1,
                                  *(undefined8 *)(param_2 + 9));
            return uVar6;
          }
          return 1;
        default:
          goto switchD_1000ec823_caseD_d;
        case 0x11:
          if ((int)DAT_1011c37a0 == 0) {
            return 1;
          }
          FUN_1008e3970("","vm",0,"Subsystem %s[%u] is ignored",*(undefined8 *)(param_2 + 0xb),
                        param_9);
          return 1;
        }
      }
      if (uVar2 == 0) goto LAB_1000ec8a0;
switchD_1000ec823_caseD_d:
      uVar6 = *(undefined8 *)(param_2 + 0xb);
      param_6 = (uint *)(ulong)uVar2;
      pcVar7 = "Item %s[%u], unexpected data type 0x%x, line=%u";
    }
    goto LAB_1000ec727;
  }
  if (uVar2 != 0x8a9ffffd) {
    if (uVar2 == 0) {
      return 1;
    }
LAB_1000ecf00:
    uVar6 = *(undefined8 *)(param_2 + 0xb);
    param_6 = (uint *)(ulong)uVar2;
    pcVar7 = "Unexpected file data. Item %s[%u], type=0x%x, line=%u";
    goto LAB_1000ec727;
  }
  uVar2 = param_6[3];
  bVar18 = false;
  piVar11 = (int *)0x0;
  if (iVar12 != 0) {
    bVar18 = **(int **)(&DAT_1011b6d80 + (ulong)(iVar12 - 1) * 8) == 0xb;
    piVar11 = (int *)0x0;
    if (bVar18) {
      piVar11 = *(int **)(&DAT_1011b6d80 + (ulong)(iVar12 - 1) * 8);
    }
  }
  uVar9 = (ulong)param_9;
  if (uVar2 >> 4 == 0) {
    return 1;
  }
  puVar15 = param_2 + 0xf;
  iVar17 = 0;
  uVar14 = 0;
  goto LAB_1000ec9a0;
switchD_1000ec823_caseD_a:
  if ((param_8 & param_2[7]) == 0) {
    return 1;
  }
  puVar15 = *(uint **)(param_2 + 1);
  if (uVar2 == 0xb) {
    param_3 = puVar15 + 0x1e;
  }
  else {
    param_3 = puVar15 + (long)(int)param_2[3] * 0xf + 0xf;
  }
  if ((param_2[7] & 0x40) == 0) {
    if ((puVar15[7] & 0x100) == 0) {
      param_2 = puVar15;
      if ((puVar15[7] & 0x200) == 0) goto LAB_1000ec8a0;
      local_58 = **(long **)(puVar15 + 1);
    }
    else {
      local_58 = *(long *)(puVar15 + 1);
    }
    param_2 = puVar15;
    if (local_58 == 0) {
      return 1;
    }
  }
  else {
    local_58 = local_58 + (ulong)param_2[8];
    param_2 = puVar15;
  }
LAB_1000ec8a0:
  uVar13 = uVar13 + 1;
  puVar8 = puVar8 + 1;
  if (0x7f < (uint)uVar13) goto LAB_1000ec70a;
  goto LAB_1000ec76e;
LAB_1000ec9a0:
  puVar1 = param_6 + 4;
  uVar4 = param_6[4];
  param_9 = (uint)uVar9;
  uVar10 = uVar9;
  if (uVar14 < (uVar4 & 0xffffff)) {
    do {
      param_2 = puVar15 + 0xf;
      if ((int)DAT_1011c37a0 != 0) {
        FUN_1008e3970("","vm",0,"Skipping %u item %s[%u] to sync with var=%u",uVar14,
                      *(undefined8 *)(puVar15 + 0xb),uVar9,uVar4);
        uVar10 = extraout_RDX;
      }
      if (param_3 < param_2) {
        uVar6 = *(undefined8 *)(param_3 + 0xb);
        uVar20 = 0x468;
        goto LAB_1000ece33;
      }
      uVar14 = uVar14 + 1;
      uVar4 = *puVar1;
      puVar15 = param_2;
    } while (uVar14 < (uVar4 & 0xffffff));
  }
  if (param_6[5] == 0x8a9ffffc) {
    if ((int)DAT_1011c37a0 != 0) {
      FUN_1000eabc0("Data loading",puVar15,param_4,puVar1,uVar13);
      uVar10 = extraout_RDX_00;
    }
    uVar4 = *puVar15;
    while ((uVar4 == 0xb && (param_2 = puVar15 + 0xf, (puVar15[7] & 0x80) != 0))) {
      if ((int)DAT_1011c37a0 != 0) {
        FUN_1008e3970("","vm",0,"Skipping %u item %s[%u] to sync with var=%u",uVar14,
                      *(undefined8 *)(puVar15 + 0xb),uVar9,*puVar1);
        uVar10 = extraout_RDX_01;
      }
      if (param_3 < param_2) {
        uVar6 = *(undefined8 *)(param_3 + 0xb);
        uVar20 = 0x47f;
        goto LAB_1000ece33;
      }
      uVar14 = uVar14 + 1;
      uVar4 = *param_2;
      puVar15 = param_2;
    }
    if ((piVar11 == (int *)0x0) || ((*(byte *)((long)piVar11 + 0x1d) & 4) == 0)) {
LAB_1000ecd6c:
      cVar3 = FUN_1000ebba0(local_58,puVar15,uVar10,puVar1,param_4,param_5,uVar9,uVar14);
      if (cVar3 == '\0') {
        return 0;
      }
      puVar15 = puVar15 + 0xf;
    }
    else if (*(code **)(piVar11 + 5) == (code *)0x0) {
      FUN_1008e3970("","vm",0,
                    "Invalid fArrSysPtrOpt option for item %s[%u], pGetPtr is NULL, line=%u",
                    *(undefined8 *)(piVar11 + 0xb),uVar14,0x114);
    }
    else {
      auVar19 = (**(code **)(piVar11 + 5))(uVar14);
      uVar10 = auVar19._8_8_;
      if ((auVar19._0_8_ == 0) && ((int)DAT_1011c37a0 != 0)) {
        FUN_1008e3970("","vm",0,"Skipping absent item %s[%u], line=%u",
                      *(undefined8 *)(piVar11 + 0xb),uVar14,0x11d);
      }
      else if (auVar19._0_8_ != 0) goto LAB_1000ecd6c;
    }
  }
  else {
    lVar5 = local_58;
    if (piVar11 != (int *)0x0) {
      param_9 = uVar14;
      if ((*(byte *)((long)piVar11 + 0x1d) & 4) != 0) {
        if (*(code **)(piVar11 + 5) == (code *)0x0) {
          FUN_1008e3970("","vm",0,
                        "Invalid fArrSysPtrOpt option for item %s[%u], pGetPtr is NULL, line=%u",
                        *(undefined8 *)(piVar11 + 0xb),uVar14,0x114);
        }
        else {
          lVar5 = (**(code **)(piVar11 + 5))(uVar14);
          if ((lVar5 == 0) && ((int)DAT_1011c37a0 != 0)) {
            FUN_1008e3970("","vm",0,"Skipping absent item %s[%u], line=%u",
                          *(undefined8 *)(piVar11 + 0xb),uVar14,0x11d);
          }
          else if (lVar5 != 0) goto LAB_1000ecb30;
        }
        goto LAB_1000ecdb0;
      }
      lVar5 = (ulong)(piVar11[4] * uVar14) + local_58;
    }
LAB_1000ecb30:
    cVar3 = FUN_1000ec6e0(lVar5,puVar15,param_3,param_4,param_5,puVar1,iVar12 + 1,param_8,param_9);
    if (cVar3 == '\0') {
      return 0;
    }
    if (*puVar15 == 1) {
      iVar16 = iVar17 + -1;
      if ((iVar17 < 1) || (iVar17 = iVar16, param_6[5] != 0)) {
        FUN_1008e3970("","vm",0,"Item %s[%u], Empty data mistiming %d, 0x%x, line=%u",
                      *(undefined8 *)(puVar15 + 0xb),param_9,iVar16,param_6[5],0x4bc);
        uVar9 = (ulong)param_9;
        iVar17 = iVar16;
        goto LAB_1000ecdb0;
      }
    }
    else if (!bVar18) {
      puVar15 = puVar15 + 0xf;
    }
    uVar9 = (ulong)param_9;
  }
LAB_1000ecdb0:
  uVar14 = uVar14 + 1;
  param_6 = puVar1;
  if (uVar2 >> 4 <= uVar14) {
    return 1;
  }
  goto LAB_1000ec9a0;
}

