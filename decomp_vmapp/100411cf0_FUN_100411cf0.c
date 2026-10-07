
/* WARNING: Removing unreachable block (ram,0x000100411e19) */
/* WARNING: Removing unreachable block (ram,0x000100411e33) */

ulong FUN_100411cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,uint param_10,short *param_11,uint param_12,undefined8 param_13,
                   undefined4 param_14,long param_15,int param_16)

{
  char in_AL;
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  short *psVar7;
  byte bVar8;
  ulong uVar9;
  short *psVar10;
  short sVar11;
  undefined8 uVar12;
  byte bVar13;
  uint uVar14;
  long lVar16;
  undefined1 local_108 [48];
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined1 *local_48;
  long local_38;
  int iVar15;
  
  uVar6 = (ulong)param_12;
  if (in_AL != '\0') {
    local_d8 = param_1;
    local_c8 = param_2;
    local_b8 = param_3;
    local_a8 = param_4;
    local_98 = param_5;
    local_88 = param_6;
    local_78 = param_7;
    local_68 = param_8;
  }
  lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar16;
  if ((((param_9 == 0) || (param_12 == 0)) || (param_10 < 10)) || (param_11 == (short *)0x0)) {
    uVar6 = FUN_1004103f0(0x52400,param_13,param_14,0);
    return uVar6;
  }
  if ((*(char *)(param_9 + 3) == '\0') &&
     (bVar8 = *(byte *)(param_9 + 2), (byte)(bVar8 >> 6 | 2) == 2)) {
    if ((*(short *)(param_9 + 7) == 0) || ((0x8000000010000511U >> (bVar8 & 0x3f) & 1) == 0)) {
      uVar12 = 0x52400;
      goto LAB_100411dd9;
    }
  }
  else {
    uVar12 = 0x52600;
LAB_100411dd9:
    iVar3 = FUN_1004103f0(uVar12,param_13,param_14,0);
    uVar9 = 0xffffffff;
    if (iVar3 != 0) goto LAB_10041220d;
    bVar8 = *(byte *)(param_9 + 2);
  }
  local_48 = local_108;
  local_54 = 0x30;
  local_50 = &stack0x00000018;
  local_58 = 0x30;
  bVar8 = bVar8 & 0x3f;
  if (CONCAT11((char)*(undefined2 *)(param_9 + 7),(char)((ushort)*(undefined2 *)(param_9 + 7) >> 8))
      < param_12) {
    uVar6 = (ulong)CONCAT11((char)*(undefined2 *)(param_9 + 7),
                            (char)((ushort)*(undefined2 *)(param_9 + 7) >> 8));
  }
  if (bVar8 < 0x3f) {
    if (bVar8 < 10) {
      iVar3 = 0x18;
      if (bVar8 != 4) {
        if (bVar8 != 8) goto LAB_100411f0c;
        iVar3 = 0x14;
      }
    }
    else {
      if ((bVar8 != 10) && (bVar8 != 0x1c)) goto LAB_100411f0c;
      iVar3 = 0xc;
    }
  }
  else if (bVar8 == 0x3f) {
    iVar3 = 0x44;
  }
  else {
LAB_100411f0c:
    iVar3 = 0;
  }
  bVar13 = *(byte *)(param_9 + 1) & 0x10;
  iVar15 = iVar3 + 8;
  if (bVar13 == 0) {
    iVar15 = iVar3;
  }
  uVar14 = iVar15 + 0x10;
  uVar5 = (uint)uVar6 & 0xffff;
  psVar7 = param_11;
  if ((uVar5 < uVar14) && (psVar7 = _malloc((ulong)uVar14), psVar7 == (short *)0x0)) {
    uVar5 = FUN_1004103f0(0x52400,param_13,param_14,0);
    uVar9 = (ulong)uVar5;
    lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
    goto LAB_10041220d;
  }
  ___bzero(psVar7,(ulong)uVar14);
  *(undefined1 *)(psVar7 + 1) = 0;
  if (param_16 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80;
  }
  *(undefined1 *)((long)psVar7 + 3) = uVar1;
  *psVar7 = 6;
  if ((*(byte *)(param_9 + 1) & 8) == 0) {
    uVar12 = *(undefined8 *)(param_15 + 0x18);
    if (bVar13 == 0) {
      *(char *)((long)psVar7 + 9) = (char)((ulong)uVar12 >> 0x10);
      *(undefined1 *)(psVar7 + 5) = *(undefined1 *)(param_15 + 0x19);
      *(undefined1 *)((long)psVar7 + 0xb) = *(undefined1 *)(param_15 + 0x18);
      *(undefined1 *)((long)psVar7 + 0xd) = 0;
      *(undefined1 *)(psVar7 + 7) = 2;
      *(undefined1 *)((long)psVar7 + 0xf) = 0;
      *(undefined1 *)(psVar7 + 4) = 0xff;
      psVar7[3] = 8;
      psVar10 = psVar7 + 8;
      sVar2 = 8;
      sVar11 = 6;
    }
    else {
      uVar14 = (uint)uVar12;
      uVar4 = (uint)((ulong)uVar12 >> 0x20);
      *(ulong *)(psVar7 + 4) =
           CONCAT44(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                    uVar14 << 0x18,
                    uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18)
      ;
      psVar7[10] = 0;
      psVar7[0xb] = 2;
      psVar7[3] = 0x10;
      psVar10 = psVar7 + 0xc;
      sVar11 = *psVar7;
      sVar2 = 0x10;
    }
    lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  else {
    psVar10 = psVar7 + 4;
    sVar2 = psVar7[3];
    sVar11 = 6;
    lVar16 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  *psVar7 = sVar11 + sVar2;
  psVar7[3] = CONCAT11((char)sVar2,(char)((ushort)sVar2 >> 8));
  sVar11 = 0;
  if (bVar8 < 0x3f) {
    sVar11 = 0;
    if (bVar8 < 10) {
      if (bVar8 == 4) {
        *(undefined8 *)(psVar10 + 8) = DAT_100b41010;
        *(undefined8 *)(psVar10 + 4) = DAT_100b41008;
        *(undefined8 *)psVar10 = DAT_100b41000;
        *(undefined1 *)(psVar10 + 1) = *(undefined1 *)(param_15 + 10);
        *(undefined1 *)((long)psVar10 + 3) = *(undefined1 *)(param_15 + 9);
        *(undefined1 *)(psVar10 + 2) = *(undefined1 *)(param_15 + 8);
        *(undefined1 *)((long)psVar10 + 5) = *(undefined1 *)(param_15 + 0xc);
        psVar10[10] = CONCAT11((char)*(undefined2 *)(param_15 + 0x68),
                               (char)((ushort)*(undefined2 *)(param_15 + 0x68) >> 8));
        sVar11 = 0x18;
      }
      else if (bVar8 == 8) {
        *(undefined4 *)(psVar10 + 8) = DAT_100b41028;
        *(undefined8 *)(psVar10 + 4) = DAT_100b41020;
        *(undefined8 *)psVar10 = DAT_100b41018;
        sVar11 = 0x14;
      }
    }
    else {
      if (bVar8 == 10) {
        *(undefined4 *)(psVar10 + 4) = DAT_100b41034;
        uVar12 = DAT_100b4102c;
      }
      else {
        if (bVar8 != 0x1c) goto LAB_1004121db;
        *(undefined4 *)(psVar10 + 4) = DAT_100b41040;
        uVar12 = DAT_100b41038;
      }
      *(undefined8 *)psVar10 = uVar12;
      sVar11 = 0xc;
    }
  }
  else if (bVar8 == 0x3f) {
    *(undefined8 *)(psVar10 + 8) = DAT_100b41010;
    *(undefined8 *)(psVar10 + 4) = DAT_100b41008;
    *(undefined8 *)psVar10 = DAT_100b41000;
    *(undefined1 *)(psVar10 + 1) = *(undefined1 *)(param_15 + 10);
    *(undefined1 *)((long)psVar10 + 3) = *(undefined1 *)(param_15 + 9);
    *(undefined1 *)(psVar10 + 2) = *(undefined1 *)(param_15 + 8);
    *(undefined1 *)((long)psVar10 + 5) = *(undefined1 *)(param_15 + 0xc);
    psVar10[10] = CONCAT11((char)*(undefined2 *)(param_15 + 0x68),
                           (char)((ushort)*(undefined2 *)(param_15 + 0x68) >> 8));
    *(undefined4 *)(psVar10 + 0x14) = DAT_100b41028;
    *(undefined8 *)(psVar10 + 0x10) = DAT_100b41020;
    *(undefined8 *)(psVar10 + 0xc) = DAT_100b41018;
    *(undefined4 *)(psVar10 + 0x1a) = DAT_100b41034;
    *(undefined8 *)(psVar10 + 0x16) = DAT_100b4102c;
    *(undefined4 *)(psVar10 + 0x20) = DAT_100b41040;
    *(undefined8 *)(psVar10 + 0x1c) = DAT_100b41038;
    sVar11 = 0x44;
  }
LAB_1004121db:
  *psVar7 = CONCAT11((char)(sVar11 + *psVar7),(char)((ushort)(sVar11 + *psVar7) >> 8));
  if (psVar7 != param_11) {
    _memcpy(param_11,psVar7,uVar6 & 0xffff);
    _free(psVar7);
  }
  uVar9 = (ulong)uVar5;
LAB_10041220d:
  if (lVar16 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

