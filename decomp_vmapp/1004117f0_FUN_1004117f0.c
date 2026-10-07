
/* WARNING: Removing unreachable block (ram,0x000100411910) */
/* WARNING: Removing unreachable block (ram,0x00010041192a) */

ulong FUN_1004117f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,uint param_10,char *param_11,uint param_12,undefined8 param_13,
                   undefined4 param_14,long param_15,int param_16)

{
  char in_AL;
  byte bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  char cVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
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
  lVar17 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar17;
  if ((((param_9 == 0) || (param_12 == 0)) || (param_10 < 6)) || (param_11 == (char *)0x0)) {
    uVar6 = FUN_1004103f0(0x52400,param_13,param_14,0);
    return uVar6;
  }
  if ((*(char *)(param_9 + 3) == '\0') &&
     (bVar1 = *(byte *)(param_9 + 2), (byte)(bVar1 >> 6 | 2) == 2)) {
    if ((*(char *)(param_9 + 4) == '\0') ||
       ((0x8000000010000511U >> (ulong)(bVar1 & 0x3f) & 1) == 0)) {
      uVar10 = 0x52400;
      goto LAB_1004118c4;
    }
  }
  else {
    uVar10 = 0x52600;
LAB_1004118c4:
    iVar2 = FUN_1004103f0(uVar10,param_13,param_14,0);
    uVar6 = 0xffffffff;
    if (iVar2 != 0) goto LAB_100411cc3;
    bVar1 = *(byte *)(param_9 + 2);
  }
  bVar1 = bVar1 & 0x3f;
  local_48 = local_108;
  local_54 = 0x30;
  local_50 = &stack0x00000018;
  local_58 = 0x30;
  if (*(byte *)(param_9 + 4) < param_12) {
    param_12 = (uint)*(byte *)(param_9 + 4);
  }
  if (bVar1 < 0x3f) {
    if (bVar1 < 10) {
      uVar3 = 0x24;
      if (bVar1 != 4) {
        if (bVar1 != 8) goto LAB_1004119eb;
        uVar3 = 0x20;
      }
    }
    else {
      if ((bVar1 != 10) && (bVar1 != 0x1c)) goto LAB_1004119eb;
      uVar3 = 0x18;
    }
  }
  else if (bVar1 == 0x3f) {
    uVar3 = 0x50;
  }
  else {
LAB_1004119eb:
    uVar3 = 0xc;
  }
  pcVar4 = param_11;
  if (((param_12 & 0xffff) < uVar3) && (pcVar4 = _malloc((ulong)uVar3), pcVar4 == (char *)0x0)) {
    uVar3 = FUN_1004103f0(0x52400,param_13,param_14,0);
    uVar6 = (ulong)uVar3;
    lVar17 = *(long *)PTR____stack_chk_guard_100ba2320;
    goto LAB_100411cc3;
  }
  ___bzero(pcVar4,(ulong)uVar3);
  pcVar4[1] = '\0';
  if (param_16 == 0) {
    cVar8 = '\0';
  }
  else {
    cVar8 = -0x80;
  }
  lVar17 = *(long *)PTR____stack_chk_guard_100ba2320;
  pcVar4[2] = cVar8;
  *pcVar4 = '\x03';
  if ((*(byte *)(param_9 + 1) & 8) == 0) {
    pcVar4[5] = *(char *)(param_15 + 0x1a);
    pcVar4[6] = *(char *)(param_15 + 0x19);
    pcVar4[7] = *(char *)(param_15 + 0x18);
    pcVar4[9] = *(char *)(param_15 + 0x7a);
    pcVar4[10] = *(char *)(param_15 + 0x79);
    pcVar4[0xb] = *(char *)(param_15 + 0x78);
    pcVar4[4] = -1;
    pcVar4[3] = '\b';
    pcVar5 = pcVar4 + 0xc;
    cVar8 = '\v';
    lVar12 = 0x44;
    lVar14 = 0x38;
    lVar7 = 0x24;
    lVar11 = 0x20;
    lVar13 = 0x11;
    lVar16 = 0x10;
    lVar15 = 0xf;
    lVar9 = 0xe;
  }
  else {
    pcVar5 = pcVar4 + 4;
    cVar8 = pcVar4[3] + '\x03';
    lVar12 = 0x3c;
    lVar14 = 0x30;
    lVar7 = 0x1c;
    lVar11 = 0x18;
    lVar13 = 9;
    lVar16 = 8;
    lVar15 = 7;
    lVar9 = 6;
  }
  *pcVar4 = cVar8;
  cVar8 = '\0';
  if (bVar1 < 0x3f) {
    cVar8 = '\0';
    if (bVar1 < 10) {
      if (bVar1 == 4) {
        *(undefined8 *)(pcVar5 + 0x10) = DAT_100b41010;
        *(undefined8 *)(pcVar5 + 8) = DAT_100b41008;
        *(undefined8 *)pcVar5 = DAT_100b41000;
        pcVar4[lVar9] = *(char *)(param_15 + 10);
        pcVar4[lVar15] = *(char *)(param_15 + 9);
        pcVar4[lVar16] = *(char *)(param_15 + 8);
        pcVar4[lVar13] = *(char *)(param_15 + 0xc);
        *(ushort *)(pcVar4 + lVar11) =
             CONCAT11((char)*(undefined2 *)(param_15 + 0x68),
                      (char)((ushort)*(undefined2 *)(param_15 + 0x68) >> 8));
        cVar8 = '\x18';
      }
      else if (bVar1 == 8) {
        *(undefined4 *)(pcVar5 + 0x10) = DAT_100b41028;
        *(undefined8 *)(pcVar5 + 8) = DAT_100b41020;
        *(undefined8 *)pcVar5 = DAT_100b41018;
        cVar8 = '\x14';
      }
    }
    else {
      if (bVar1 == 10) {
        *(undefined4 *)(pcVar5 + 8) = DAT_100b41034;
        uVar10 = DAT_100b4102c;
      }
      else {
        if (bVar1 != 0x1c) goto LAB_100411c95;
        *(undefined4 *)(pcVar5 + 8) = DAT_100b41040;
        uVar10 = DAT_100b41038;
      }
      *(undefined8 *)pcVar5 = uVar10;
      cVar8 = '\f';
    }
  }
  else if (bVar1 == 0x3f) {
    *(undefined8 *)(pcVar5 + 0x10) = DAT_100b41010;
    *(undefined8 *)(pcVar5 + 8) = DAT_100b41008;
    *(undefined8 *)pcVar5 = DAT_100b41000;
    pcVar4[lVar9] = *(char *)(param_15 + 10);
    pcVar4[lVar15] = *(char *)(param_15 + 9);
    pcVar4[lVar16] = *(char *)(param_15 + 8);
    pcVar4[lVar13] = *(char *)(param_15 + 0xc);
    *(ushort *)(pcVar4 + lVar11) =
         CONCAT11((char)*(undefined2 *)(param_15 + 0x68),
                  (char)((ushort)*(undefined2 *)(param_15 + 0x68) >> 8));
    *(undefined4 *)(pcVar4 + lVar7 + 0x10) = DAT_100b41028;
    *(undefined8 *)(pcVar4 + lVar7 + 8) = DAT_100b41020;
    *(undefined8 *)(pcVar4 + lVar7) = DAT_100b41018;
    *(undefined4 *)(pcVar4 + lVar14 + 8) = DAT_100b41034;
    *(undefined8 *)(pcVar4 + lVar14) = DAT_100b4102c;
    *(undefined4 *)(pcVar4 + lVar12 + 8) = DAT_100b41040;
    *(undefined8 *)(pcVar4 + lVar12) = DAT_100b41038;
    cVar8 = 'D';
  }
LAB_100411c95:
  *pcVar4 = *pcVar4 + cVar8;
  if (pcVar4 != param_11) {
    _memcpy(param_11,pcVar4,(ulong)param_12 & 0xffff);
    _free(pcVar4);
  }
  uVar6 = (ulong)(param_12 & 0xffff);
LAB_100411cc3:
  if (lVar17 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

