
ulong FUN_100283b10(long *param_1)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  char *pcVar9;
  ulong *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  ulong *puVar15;
  char *pcVar16;
  int iVar17;
  size_t sVar18;
  ulong *puVar19;
  size_t local_c0;
  int local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulong local_68;
  undefined4 local_60;
  ulong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar12 = param_1[0x1a];
  bVar6 = *(byte *)(lVar12 + 2);
  if ((bVar6 & 0x40) != 0 || *(char *)(lVar12 + 3) != '\0') {
    lVar12 = param_1[0x1f];
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x58);
    uVar4 = (undefined1)param_1[0x20];
    uVar14 = 0x52600;
LAB_100283cb2:
                    /* WARNING: Could not recover jumptable at 0x000100283cc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar14,lVar12,uVar4,0);
    return uVar11;
  }
  bVar2 = *(byte *)(lVar12 + 4);
  if (bVar2 == 0) {
    lVar12 = param_1[0x1f];
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x58);
    uVar4 = (undefined1)param_1[0x20];
    uVar14 = 0x52400;
    goto LAB_100283cb2;
  }
  bVar3 = *(byte *)(lVar12 + 1);
  local_c0 = 0xc;
  if (0xc < bVar2) {
    local_c0 = (size_t)(uint)bVar2;
  }
  pcVar9 = _calloc(local_c0,1);
  puVar10 = operator_new__(8);
  *puVar10 = 0;
  uVar8 = *(uint *)(param_1 + 0x32);
  *puVar10 = *puVar10 & 0xffffffff00 |
             (ulong)(((uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18) >> 8) << 0x28
             | 0xff;
  uVar8 = *(uint *)(param_1 + 0x59);
  *puVar10 = *puVar10 & 0xffffffff000000ff |
             (ulong)((uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18);
  bVar5 = bVar3 & 8 ^ 8;
  puVar15 = (ulong *)0x0;
  if ((bVar3 & 8) == 0) {
    puVar15 = puVar10;
  }
  if (pcVar9 == (char *)0x0) {
    uVar8 = (**(code **)(*param_1 + 0x58))(param_1,0x52400,param_1[0x1f],(char)param_1[0x20],0);
    uVar11 = (ulong)uVar8;
    puVar19 = (ulong *)0x0;
  }
  else {
    puVar19 = (ulong *)(pcVar9 + 4);
    *pcVar9 = '\x03';
    uVar8 = (uint)local_c0;
    local_c0 = (ulong)(uVar8 - 4);
    if (uVar8 < 4) {
      local_c0 = 0;
    }
    pcVar9[2] = '\0';
    pcVar9[1] = '\0';
    pcVar9[3] = bVar5;
    uVar11 = 0;
    iVar17 = (int)local_c0;
    if (puVar15 != (ulong *)0x0) {
      local_c0 = (size_t)(iVar17 - (uint)bVar5);
      if ((int)(iVar17 - (uint)bVar5) < 0) {
        local_c0 = 0;
        if (iVar17 == 0) {
          uVar11 = 0;
        }
        else {
          _memcpy(puVar19,puVar15,(long)iVar17);
          puVar19 = (ulong *)(pcVar9 + (long)iVar17 + 4);
          uVar11 = 0;
        }
      }
      else {
        _memcpy(puVar19,puVar15,(ulong)bVar5);
        puVar19 = (ulong *)(pcVar9 + ((ulong)bVar5 | 4));
        uVar11 = 0;
      }
    }
  }
  if (puVar10 != (ulong *)0x0) {
    operator_delete__(puVar10);
  }
  if ((int)uVar11 != 0) goto LAB_10028416a;
  bVar6 = bVar6 & 0x3f;
  cVar7 = (char)local_c0;
  iVar17 = (int)local_c0;
  if (bVar6 < 0x3f) {
    if (bVar6 < 10) {
      if (bVar6 != 0) {
        if (bVar6 != 4) goto LAB_100283fc6;
        uStack_40 = 0;
        uVar8 = *(uint *)((long)param_1 + 700);
        local_48 = (ulong)CONCAT42(((uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18)
                                   >> 8 | (int)param_1[0x57] << 0x18,0x1604);
        local_38 = 0x201c00000000;
        if (iVar17 < 0x18) {
          if (iVar17 != 0) {
            _memcpy(puVar19,&local_48,(long)iVar17);
          }
          *pcVar9 = *pcVar9 + cVar7;
        }
        else {
          puVar19[2] = 0x201c00000000;
          puVar19[1] = 0;
          *puVar19 = local_48;
          *pcVar9 = *pcVar9 + '\x18';
        }
      }
    }
    else {
      if (bVar6 == 10) {
        local_50 = 0xffffffff;
        local_58 = 0xffffffffffff0a0a;
        if (0xb < iVar17) {
          *(undefined4 *)(puVar19 + 1) = 0xffffffff;
          uVar11 = local_58;
LAB_1002840ce:
          *puVar19 = uVar11;
          *pcVar9 = *pcVar9 + '\f';
          goto LAB_1002840d7;
        }
        if (iVar17 != 0) {
          puVar15 = &local_58;
LAB_100283fa8:
          _memcpy(puVar19,puVar15,(long)iVar17);
        }
      }
      else {
        if (bVar6 != 0x1c) goto LAB_100283fc6;
        local_60 = 0;
        local_68 = 0xa1c;
        if (0xb < iVar17) {
          *(undefined4 *)(puVar19 + 1) = 0;
          uVar11 = 0xa1c;
          goto LAB_1002840ce;
        }
        if (iVar17 != 0) {
          puVar15 = &local_68;
          goto LAB_100283fa8;
        }
      }
      *pcVar9 = *pcVar9 + cVar7;
    }
  }
  else if (bVar6 == 0x3f) {
    uStack_80 = 0;
    uVar8 = *(uint *)((long)param_1 + 700);
    local_88 = (ulong)CONCAT42(((uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18) >>
                               8 | (int)param_1[0x57] << 0x18,0x1604);
    local_78 = 0x201c00000000;
    if (iVar17 < 0x18) {
      iVar13 = 0;
      sVar18 = 0;
      if (iVar17 != 0) {
        sVar18 = (size_t)iVar17;
        _memcpy(puVar19,&local_88,sVar18);
      }
      cVar7 = *pcVar9 + cVar7;
      puVar19 = (ulong *)((long)puVar19 + sVar18);
    }
    else {
      iVar13 = iVar17 + -0x18;
      puVar19[2] = 0x201c00000000;
      puVar19[1] = 0;
      *puVar19 = local_88;
      cVar7 = *pcVar9 + '\x18';
      puVar19 = puVar19 + 3;
    }
    *pcVar9 = cVar7;
    local_90 = 0xffffffff;
    local_98 = 0xffffffffffff0a0a;
    if (iVar13 < 0xc) {
      iVar17 = 0;
      sVar18 = 0;
      if (iVar13 != 0) {
        sVar18 = (size_t)iVar13;
        _memcpy(puVar19,&local_98,sVar18);
        cVar7 = *pcVar9;
      }
      cVar7 = cVar7 + (char)iVar13;
      pcVar16 = (char *)((long)puVar19 + sVar18);
    }
    else {
      iVar17 = iVar13 + -0xc;
      *(undefined4 *)(puVar19 + 1) = 0xffffffff;
      *puVar19 = 0xffffffffffff0a0a;
      cVar7 = *pcVar9 + '\f';
      pcVar16 = (char *)((long)puVar19 + 0xc);
    }
    *pcVar9 = cVar7;
    local_a0 = 0;
    local_a8 = 0xa1c;
    if (iVar17 < 0xc) {
      if (iVar17 != 0) {
        _memcpy(pcVar16,&local_a8,(long)iVar17);
        cVar7 = *pcVar9;
      }
      *pcVar9 = cVar7 + (char)iVar17;
    }
    else {
      pcVar16[8] = '\0';
      pcVar16[9] = '\0';
      pcVar16[10] = '\0';
      pcVar16[0xb] = '\0';
      pcVar16[0] = '\x1c';
      pcVar16[1] = '\n';
      pcVar16[2] = '\0';
      pcVar16[3] = '\0';
      pcVar16[4] = '\0';
      pcVar16[5] = '\0';
      pcVar16[6] = '\0';
      pcVar16[7] = '\0';
      *pcVar9 = *pcVar9 + '\f';
    }
  }
  else {
LAB_100283fc6:
    uVar8 = (**(code **)(*param_1 + 0x58))(param_1,0x52400,param_1[0x1f],(char)param_1[0x20],0);
    uVar11 = (ulong)uVar8;
    if (uVar8 != 0) goto LAB_10028416a;
  }
LAB_1002840d7:
  local_ac = 0;
  plVar1 = param_1 + 0x12;
  FUN_100284da0(plVar1,param_1[0x1e],*(undefined4 *)((long)param_1 + 0xec),&local_ac);
  if (local_ac == 0) {
    uVar8 = (**(code **)(*param_1 + 0x58))(param_1,0x52400,param_1[0x1f],(char)param_1[0x20],0);
    uVar11 = (ulong)uVar8;
  }
  else {
    _memcpy((void *)param_1[0x14],pcVar9,(ulong)bVar2);
    FUN_100284b10(plVar1,local_ac);
    uVar11 = 0;
    FUN_100284d60(plVar1);
  }
LAB_10028416a:
  if (pcVar9 != (char *)0x0) {
    _free(pcVar9);
  }
  return uVar11;
}

