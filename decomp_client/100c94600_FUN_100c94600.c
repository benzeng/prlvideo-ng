
uint FUN_100c94600(int *param_1,time_t *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  undefined4 local_98;
  int local_94;
  char *local_90;
  ulong local_88;
  time_t local_80;
  char local_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  char local_4c [20];
  long local_38;
  
  lVar13 = *(long *)PTR____stack_chk_guard_1021e1840;
  iVar4 = *param_1;
  iVar5 = param_1[1];
  puVar2 = *(undefined8 **)(param_1 + 2);
  local_38 = lVar13;
  if (iVar5 == 0x17) {
    uVar3 = 0;
    if (6 < iVar4 - 0xbU) goto LAB_100c949aa;
    local_50 = CONCAT22(local_50._2_2_,*(undefined2 *)(puVar2 + 1));
    local_58 = *puVar2;
    pcVar12 = (char *)((long)&local_50 + 2);
    pcVar10 = (char *)((long)puVar2 + 10);
    iVar4 = iVar4 + -10;
    uVar14 = 0xc;
    lVar11 = 0xb;
  }
  else {
    uVar3 = 0;
    if (10 < iVar4 - 0xdU) goto LAB_100c949aa;
    local_50 = *(undefined4 *)(puVar2 + 1);
    local_58 = *puVar2;
    pcVar12 = local_4c;
    pcVar10 = (char *)((long)puVar2 + 0xc);
    iVar4 = iVar4 + -0xc;
    uVar14 = 0xe;
    lVar11 = 0xd;
  }
  bVar6 = *pcVar10 - 0x2b;
  if ((0x2f < bVar6) || ((0x800000000005U >> ((ulong)bVar6 & 0x3f) & 1) == 0)) {
    uVar3 = 0;
    if (iVar4 < 2) goto LAB_100c949aa;
    *pcVar12 = *pcVar10;
    *(undefined1 *)((long)&local_58 + lVar11) = *(undefined1 *)((long)puVar2 + lVar11);
    iVar8 = iVar4 + -2;
    if (iVar8 != 0) {
      pcVar10 = (char *)((long)puVar2 + lVar11 + 1);
      cVar1 = *pcVar10;
      if (cVar1 != '.') {
        *(undefined1 *)((long)&local_58 + uVar14) = 0x5a;
        *(undefined1 *)((long)&local_58 + (uVar14 | 1)) = 0;
        goto LAB_100c9479d;
      }
      if (iVar4 + -3 != 0) {
        iVar8 = iVar4 + -4;
        lVar13 = 0;
        iVar4 = iVar4 + -3;
        do {
          lVar9 = lVar13;
          if (9 < (byte)(*(char *)((long)puVar2 + lVar9 + lVar11 + 2) - 0x30U)) {
            lVar9 = lVar9 + 2;
            goto LAB_100c948bd;
          }
          iVar4 = iVar4 + -1;
        } while (((int)lVar9 + 1 < 3) && (lVar13 = lVar9 + 1, iVar8 != (int)lVar9));
        lVar9 = lVar9 + 3;
LAB_100c948bd:
        pcVar10 = (char *)((long)puVar2 + lVar9 + lVar11);
        lVar13 = *(long *)PTR____stack_chk_guard_1021e1840;
        goto LAB_100c946cb;
      }
    }
    *(undefined1 *)((long)&local_58 + uVar14) = 0x5a;
    *(undefined1 *)((long)&local_58 + (uVar14 | 1)) = 0;
    goto LAB_100c949aa;
  }
  *pcVar12 = '0';
  *(undefined1 *)((long)&local_58 + lVar11) = 0x30;
LAB_100c946cb:
  *(undefined1 *)((long)&local_58 + uVar14) = 0x5a;
  *(undefined1 *)((long)&local_58 + (uVar14 | 1)) = 0;
  uVar3 = 0;
  if (iVar4 == 0) goto LAB_100c949aa;
  cVar1 = *pcVar10;
  iVar8 = iVar4;
LAB_100c9479d:
  uVar7 = 0;
  if ((cVar1 == '+') || (cVar1 == '-')) {
    uVar3 = 0;
    if ((((iVar8 != 5) || (uVar3 = uVar7, 9 < (byte)(pcVar10[1] - 0x30U))) ||
        (9 < (byte)(pcVar10[2] - 0x30U))) ||
       ((9 < (byte)(pcVar10[3] - 0x30U) || (9 < (byte)(pcVar10[4] - 0x30U))))) goto LAB_100c949aa;
    lVar9 = ((long)(((ulong)(uint)((int)pcVar10[4] + pcVar10[3] * 10) << 0x20) + -0x21000000000) >>
            0x20) + (((long)pcVar10[2] + (long)pcVar10[1] * 10) * 0x3c00000000 + -0x7bc000000000 >>
                    0x20);
    lVar11 = -lVar9;
    if (cVar1 != '-') {
      lVar11 = lVar9;
    }
    lVar11 = lVar11 * 0x3c;
  }
  else {
    uVar3 = uVar7;
    if (cVar1 != 'Z') goto LAB_100c949aa;
    lVar11 = 0;
    uVar3 = 0;
    if (iVar8 != 1) goto LAB_100c949aa;
  }
  local_88 = 0;
  local_98 = 0x18;
  local_90 = local_78;
  local_94 = iVar5;
  if (param_2 == (time_t *)0x0) {
    _time(&local_80);
    if ((local_88 & 0x40) == 0) goto LAB_100c948dc;
LAB_100c9491a:
    lVar11 = FUN_100c75da0(&local_98,local_80,0,lVar11);
  }
  else {
    local_80 = *param_2;
LAB_100c948dc:
    if (local_94 == 0x18) {
      lVar11 = FUN_100c75b70(&local_98,local_80,0,lVar11);
    }
    else {
      if (local_94 != 0x17) goto LAB_100c9491a;
      lVar11 = FUN_100c755f0(&local_98,local_80,0,lVar11);
    }
  }
  uVar3 = 0;
  if (lVar11 != 0) {
    if (param_1[1] == 0x17) {
      iVar4 = (int)(char)((ulong)local_58 >> 8);
      iVar5 = iVar4 + -0x210 + (char)local_58 * 10;
      iVar4 = iVar4 + -0x1ac + (char)local_58 * 10;
      if (0x31 < iVar5) {
        iVar4 = iVar5;
      }
      iVar8 = SUB21(local_78._0_2_,1) + -0x210 + (char)local_78._0_2_ * 10;
      iVar5 = SUB21(local_78._0_2_,1) + -0x1ac + (char)local_78._0_2_ * 10;
      if (0x31 < iVar8) {
        iVar5 = iVar8;
      }
      uVar3 = 0xffffffff;
      if ((iVar4 < iVar5) || (uVar3 = 1, iVar5 < iVar4)) goto LAB_100c949aa;
    }
    uVar3 = _strcmp((char *)&local_58,local_78);
    uVar3 = -(uint)(uVar3 == 0) | uVar3;
  }
LAB_100c949aa:
  if (lVar13 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

