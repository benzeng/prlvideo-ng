
ulong FUN_1002841e0(long *param_1)

{
  long *plVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined2 *puVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  ulong *puVar17;
  int iVar18;
  undefined8 *puVar19;
  ushort uVar20;
  uint uVar21;
  ulong *puVar22;
  uint local_c0;
  int local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar14 = param_1[0x1a];
  bVar2 = *(byte *)(lVar14 + 2);
  if ((bVar2 & 0x40) != 0 || *(char *)(lVar14 + 3) != '\0') {
    lVar14 = param_1[0x1f];
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x58);
    uVar3 = (undefined1)param_1[0x20];
    uVar16 = 0x52600;
LAB_10028431c:
                    /* WARNING: Could not recover jumptable at 0x000100284333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar16,lVar14,uVar3,0);
    return uVar10;
  }
  uVar5 = CONCAT11((char)*(undefined2 *)(lVar14 + 7),
                   (char)((ushort)*(undefined2 *)(lVar14 + 7) >> 8));
  if (uVar5 == 0) {
    lVar14 = param_1[0x1f];
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x58);
    uVar3 = (undefined1)param_1[0x20];
    uVar16 = 0x52400;
    goto LAB_10028431c;
  }
  bVar4 = *(byte *)(lVar14 + 1);
  uVar20 = bVar4 & 8;
  bVar12 = *(byte *)(param_1[0x1a] + 1) & 0x10;
  local_c0 = bVar12 >> 1 | 0x10;
  if (local_c0 < uVar5) {
    local_c0 = (uint)uVar5;
  }
  puVar8 = _calloc((ulong)local_c0,1);
  if (bVar12 == 0) {
    puVar9 = operator_new__(8);
    *puVar9 = 0;
    uVar7 = *(uint *)(param_1 + 0x32);
    *puVar9 = *puVar9 & 0xffffffff00 |
              (ulong)(((uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) >> 8) <<
              0x28 | 0xff;
    uVar7 = *(uint *)(param_1 + 0x59);
    *puVar9 = *puVar9 & 0xffffffff000000ff |
              (ulong)((uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18);
    uVar20 = uVar20 ^ 8;
    iVar18 = 8;
  }
  else {
    puVar9 = operator_new__(0x10);
    puVar9[1] = 0;
    *puVar9 = 0;
    uVar7 = *(uint *)(param_1 + 0x32);
    *(uint *)((long)puVar9 + 0xc) =
         uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    uVar7 = (uint)param_1[0x59];
    uVar21 = (uint)((ulong)param_1[0x59] >> 0x20);
    *puVar9 = CONCAT44(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                       uVar7 << 0x18,
                       uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                       uVar21 << 0x18);
    uVar20 = uVar20 * 2 ^ 0x10;
    iVar18 = 0x10;
  }
  uVar10 = 0;
  puVar17 = (ulong *)0x0;
  if ((bVar4 & 8) == 0) {
    puVar17 = puVar9;
  }
  if (puVar8 == (undefined2 *)0x0) {
    uVar7 = (**(code **)(*param_1 + 0x58))(param_1,0x52400,param_1[0x1f],(char)param_1[0x20],0);
    uVar10 = (ulong)uVar7;
    puVar22 = (ulong *)0x0;
  }
  else {
    puVar22 = (ulong *)(puVar8 + 2);
    *puVar8 = 0x600;
    uVar11 = (ulong)(local_c0 - 4);
    if (local_c0 < 4) {
      uVar11 = uVar10;
    }
    uVar7 = (uint)uVar11;
    *(uint *)(puVar8 + 1) = *(uint *)(puVar8 + 1) & 0xffff0000;
    puVar8[3] = uVar20;
    local_c0 = uVar7;
    if (puVar17 != (ulong *)0x0) {
      uVar21 = (uint)uVar20;
      if ((int)(uVar7 - uVar21) < 0) {
        local_c0 = 0;
        if (uVar7 == 0) {
          uVar10 = 0;
        }
        else {
          _memcpy(puVar22,puVar17,(long)(int)uVar7);
          puVar22 = (ulong *)((long)(int)uVar7 + 4U + (long)puVar8);
          uVar10 = 0;
        }
      }
      else {
        _memcpy(puVar22,puVar17,(ulong)uVar21);
        puVar22 = (ulong *)(((ulong)uVar21 | 4) + (long)puVar8);
        local_c0 = uVar7 - uVar21;
      }
    }
  }
  if ((iVar18 != 0) && (puVar9 != (ulong *)0x0)) {
    operator_delete__(puVar9);
  }
  if ((int)uVar10 != 0) goto LAB_100284931;
  bVar4 = bVar2 & 0x3f;
  if (bVar4 < 0x3f) {
    if (bVar4 < 10) {
      if ((bVar2 & 0x3f) != 0) {
        if (bVar4 != 4) goto LAB_10028473d;
        uStack_40 = 0;
        uVar7 = *(uint *)((long)param_1 + 700);
        local_48 = (ulong)CONCAT42(((uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18)
                                   >> 8 | (int)param_1[0x57] << 0x18,0x1604);
        local_38 = 0x201c00000000;
        if ((int)local_c0 < 0x18) {
          uVar7 = 0;
          if (local_c0 != 0) {
            _memcpy(puVar22,&local_48,(long)(int)local_c0);
            uVar7 = local_c0;
          }
          uVar7 = CONCAT11((char)*puVar8,(char)((ushort)*puVar8 >> 8)) + uVar7;
        }
        else {
          puVar22[2] = 0x201c00000000;
          puVar22[1] = 0;
          *puVar22 = local_48;
          uVar7 = CONCAT11((char)*puVar8,(char)((ushort)*puVar8 >> 8)) + 0x18;
        }
        *puVar8 = CONCAT11((char)(uVar7 & 0xffff),(char)((uVar7 & 0xffff) >> 8));
      }
    }
    else if (bVar4 == 10) {
      local_50 = 0xffffffff;
      local_58 = 0xffffffffffff0a0a;
      if ((int)local_c0 < 0xc) {
        uVar7 = 0;
        if (local_c0 != 0) {
          _memcpy(puVar22,&local_58,(long)(int)local_c0);
          uVar7 = local_c0;
        }
        uVar7 = CONCAT11((char)*puVar8,(char)((ushort)*puVar8 >> 8)) + uVar7;
      }
      else {
        *(undefined4 *)(puVar22 + 1) = 0xffffffff;
        *puVar22 = 0xffffffffffff0a0a;
        uVar7 = CONCAT11((char)*puVar8,(char)((ushort)*puVar8 >> 8)) + 0xc;
      }
      *puVar8 = CONCAT11((char)(uVar7 & 0xffff),(char)((uVar7 & 0xffff) >> 8));
    }
    else {
      if (bVar4 != 0x1c) goto LAB_10028473d;
      local_60 = 0;
      local_68 = 0xa1c;
      if ((int)local_c0 < 0xc) {
        uVar7 = 0;
        if (local_c0 != 0) {
          _memcpy(puVar22,&local_68,(long)(int)local_c0);
          uVar7 = local_c0;
        }
        uVar7 = CONCAT11((char)*puVar8,(char)((ushort)*puVar8 >> 8)) + uVar7;
      }
      else {
        *(undefined4 *)(puVar22 + 1) = 0;
        *puVar22 = 0xa1c;
        uVar7 = CONCAT11((char)*puVar8,(char)((ushort)*puVar8 >> 8)) + 0xc;
      }
      *puVar8 = CONCAT11((char)(uVar7 & 0xffff),(char)((uVar7 & 0xffff) >> 8));
    }
  }
  else if (bVar4 == 0x3f) {
    uStack_80 = 0;
    uVar7 = *(uint *)((long)param_1 + 700);
    local_88 = (ulong)CONCAT42(((uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) >>
                               8 | (int)param_1[0x57] << 0x18,0x1604);
    local_78 = 0x201c00000000;
    if ((int)local_c0 < 0x18) {
      iVar18 = 0;
      uVar21 = 0;
      if (local_c0 != 0) {
        _memcpy(puVar22,&local_88,(long)(int)local_c0);
        uVar21 = local_c0;
      }
      uVar7 = CONCAT11((char)*puVar8,(char)((ushort)*puVar8 >> 8)) + uVar21;
      puVar22 = (ulong *)((long)puVar22 + (long)(int)uVar21);
    }
    else {
      iVar18 = local_c0 - 0x18;
      puVar22[2] = 0x201c00000000;
      puVar22[1] = 0;
      *puVar22 = local_88;
      uVar7 = CONCAT11((char)*puVar8,(char)((ushort)*puVar8 >> 8)) + 0x18;
      puVar22 = puVar22 + 3;
    }
    uVar6 = CONCAT11((char)(uVar7 & 0xffff),(char)((uVar7 & 0xffff) >> 8));
    *puVar8 = uVar6;
    local_90 = 0xffffffff;
    local_98 = 0xffffffffffff0a0a;
    if (iVar18 < 0xc) {
      iVar15 = 0;
      iVar13 = 0;
      if (iVar18 != 0) {
        _memcpy(puVar22,&local_98,(long)iVar18);
        uVar6 = *puVar8;
        iVar13 = iVar18;
      }
      uVar7 = (uint)CONCAT11((char)uVar6,(char)((ushort)uVar6 >> 8)) + iVar13;
      puVar19 = (undefined8 *)((long)puVar22 + (long)iVar13);
    }
    else {
      iVar15 = iVar18 + -0xc;
      *(undefined4 *)(puVar22 + 1) = 0xffffffff;
      *puVar22 = 0xffffffffffff0a0a;
      uVar7 = CONCAT11((char)*puVar8,(char)((ushort)*puVar8 >> 8)) + 0xc;
      puVar19 = (undefined8 *)((long)puVar22 + 0xc);
    }
    uVar6 = CONCAT11((char)(uVar7 & 0xffff),(char)((uVar7 & 0xffff) >> 8));
    *puVar8 = uVar6;
    local_a0 = 0;
    local_a8 = 0xa1c;
    if (iVar15 < 0xc) {
      iVar18 = 0;
      if (iVar15 != 0) {
        _memcpy(puVar19,&local_a8,(long)iVar15);
        uVar6 = *puVar8;
        iVar18 = iVar15;
      }
      uVar7 = (uint)CONCAT11((char)uVar6,(char)((ushort)uVar6 >> 8)) + iVar18;
    }
    else {
      *(undefined4 *)(puVar19 + 1) = 0;
      *puVar19 = 0xa1c;
      uVar7 = CONCAT11((char)*puVar8,(char)((ushort)*puVar8 >> 8)) + 0xc;
    }
    *puVar8 = CONCAT11((char)(uVar7 & 0xffff),(char)((uVar7 & 0xffff) >> 8));
  }
  else {
LAB_10028473d:
    uVar7 = (**(code **)(*param_1 + 0x58))(param_1,0x52400,param_1[0x1f],(char)param_1[0x20],0);
    uVar10 = (ulong)uVar7;
    if (uVar7 != 0) goto LAB_100284931;
  }
  local_ac = 0;
  plVar1 = param_1 + 0x12;
  FUN_100284da0(plVar1,param_1[0x1e],*(undefined4 *)((long)param_1 + 0xec),&local_ac);
  if (local_ac == 0) {
    uVar7 = (**(code **)(*param_1 + 0x58))(param_1,0x52400,param_1[0x1f],(char)param_1[0x20],0);
    uVar10 = (ulong)uVar7;
  }
  else {
    _memcpy((void *)param_1[0x14],puVar8,(ulong)uVar5);
    FUN_100284b10(plVar1,local_ac);
    uVar10 = 0;
    FUN_100284d60(plVar1);
  }
LAB_100284931:
  if (puVar8 != (undefined2 *)0x0) {
    _free(puVar8);
  }
  return uVar10;
}

