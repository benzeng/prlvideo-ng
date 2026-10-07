
char * FUN_1008e17e0(long param_1,long param_2,long *param_3,undefined8 *param_4,long param_5,
                    undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  char *pcVar15;
  char *pcVar16;
  undefined8 local_1400;
  undefined8 local_13f0;
  undefined8 local_13e8;
  undefined8 local_13e0;
  undefined2 local_13d8;
  byte abStack_13d6 [2510];
  undefined2 local_a08;
  byte abStack_a06 [2510];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_13e0 = 0;
  local_13e8 = 0;
  iVar3 = 0;
  local_1400 = 0;
  pcVar15 = (char *)0x0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (long *)0x0)) {
    local_13f0 = 0;
    pcVar16 = (char *)0x0;
    goto LAB_1008e1d10;
  }
  local_13f0 = 0;
  pcVar16 = (char *)0x0;
  if (param_4 == (undefined8 *)0x0) goto LAB_1008e1d10;
  if (param_5 == 0) {
    puVar6 = (undefined8 *)FUN_1008e0bb0(param_6);
    pcVar16 = (char *)0x0;
    pcVar15 = (char *)0x0;
    iVar3 = 0;
    if (puVar6 == (undefined8 *)0x0) goto LAB_1008e1d2c;
    local_1400 = puVar6[2];
    pcVar16 = (char *)*puVar6;
    local_13f0 = puVar6[1];
LAB_1008e1950:
    if (*param_3 == 0) {
      iVar3 = FUN_100886f90(&local_13d8);
      if (-1 < iVar3) {
        iVar3 = 0x14;
        goto LAB_1008e19a4;
      }
    }
    else {
      iVar3 = FUN_1008e1d90();
      if (iVar3 != 0) {
LAB_1008e19a4:
        local_13e0 = FUN_10084bc20(&local_13d8,iVar3,0);
        iVar3 = FUN_1008e2020(param_1,param_2,&local_13e0,&local_13e8,local_1400,local_13f0);
        if (iVar3 != 0) {
          FUN_10084bdf0(local_13e8,&local_a08);
          iVar3 = FUN_10084b410(local_13e8);
          iVar3 = ((int)(iVar3 + 7 + ((uint)(iVar3 + 7 >> 0x1f) >> 0x1d)) >> 3) * 2;
          pcVar7 = (char *)FUN_10081ddd0(iVar3,"srp_vfy.c",0x267);
          pcVar15 = (char *)0x0;
          if (pcVar7 != (char *)0x0) {
            iVar2 = FUN_10084b410();
            iVar2 = (int)(iVar2 + 7 + ((uint)(iVar2 + 7 >> 0x1f) >> 0x1d)) >> 3;
            iVar4 = iVar2 % 3;
            if (iVar4 == 2) {
              uVar12 = (ulong)local_a08;
              uVar11 = (ulong)(local_a08 >> 8);
              iVar4 = 2;
            }
            else if (iVar4 == 1) {
              iVar4 = 1;
              uVar11 = (ulong)(byte)local_a08;
              uVar12 = 0;
            }
            else {
              uVar12 = 0;
              uVar11 = 0;
            }
            lVar14 = (long)iVar4;
            uVar5 = 0;
            bVar1 = false;
            pcVar15 = pcVar7;
            do {
              if ((uVar5 >> 2 != 0) || (bVar1)) {
                *pcVar15 = s_0123456789ABCDEFGHIJKLMNOPQRSTUV_1011b55a0[uVar5 >> 2];
                pcVar15 = pcVar15 + 1;
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
              uVar5 = (uint)((uVar12 & 0xff) >> 4) | (uVar5 & 3) << 4;
              if ((uVar5 != 0) || (bVar1)) {
                *pcVar15 = s_0123456789ABCDEFGHIJKLMNOPQRSTUV_1011b55a0[uVar5];
                pcVar15 = pcVar15 + 1;
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
              uVar5 = (uint)(uVar11 >> 6) | ((uint)(uVar12 & 0xff) & 0xf) << 2;
              if ((uVar5 != 0) || (bVar1)) {
                *pcVar15 = s_0123456789ABCDEFGHIJKLMNOPQRSTUV_1011b55a0[uVar5];
                pcVar15 = pcVar15 + 1;
LAB_1008e1bbe:
                *pcVar15 = s_0123456789ABCDEFGHIJKLMNOPQRSTUV_1011b55a0[(uint)uVar11 & 0x3f];
                pcVar15 = pcVar15 + 1;
                bVar1 = true;
              }
              else {
                if ((uVar11 & 0x3f) != 0) goto LAB_1008e1bbe;
                bVar1 = false;
              }
              if (iVar2 <= lVar14) goto code_r0x0001008e1bd4;
              uVar5 = (uint)abStack_a06[lVar14 + -2];
              uVar12 = (ulong)abStack_a06[lVar14 + -1];
              uVar11 = (ulong)abStack_a06[lVar14];
              lVar14 = lVar14 + 3;
            } while( true );
          }
          pcVar16 = (char *)0x0;
          goto LAB_1008e1d10;
        }
      }
    }
    iVar3 = 0;
    pcVar16 = (char *)0x0;
    pcVar15 = (char *)0x0;
    goto LAB_1008e1d10;
  }
  iVar2 = FUN_1008e1d90(&local_a08,param_5);
  pcVar16 = (char *)0x0;
  pcVar15 = (char *)0x0;
  iVar3 = 0;
  local_13f0 = 0;
  local_1400 = 0;
  if (iVar2 != 0) {
    local_1400 = FUN_10084bc20(&local_a08,iVar2,0);
    iVar3 = FUN_1008e1d90(&local_a08);
    if (iVar3 != 0) {
      local_13f0 = FUN_10084bc20(&local_a08,iVar3,0);
      pcVar16 = "*";
      goto LAB_1008e1950;
    }
    pcVar16 = (char *)0x0;
    pcVar15 = (char *)0x0;
    iVar3 = 0;
    local_13f0 = 0;
  }
  goto LAB_1008e1d15;
code_r0x0001008e1bd4:
  *pcVar15 = '\0';
  if (*param_3 == 0) {
    pcVar15 = (char *)FUN_10081ddd0(0x28,"srp_vfy.c",0x26e);
    if (pcVar15 != (char *)0x0) {
      uVar5 = (uint)local_13d8;
      uVar13 = (uint)(local_13d8 >> 8);
      bVar10 = 0;
      lVar14 = 2;
      bVar1 = false;
      pcVar9 = pcVar15;
      do {
        if ((bVar10 >> 2 != 0) || (bVar1)) {
          *pcVar9 = s_0123456789ABCDEFGHIJKLMNOPQRSTUV_1011b55a0[(uint)(bVar10 >> 2)];
          pcVar9 = pcVar9 + 1;
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        uVar8 = (uVar5 & 0xff) >> 4 | (bVar10 & 3) << 4;
        if ((uVar8 != 0) || (bVar1)) {
          *pcVar9 = s_0123456789ABCDEFGHIJKLMNOPQRSTUV_1011b55a0[uVar8];
          pcVar9 = pcVar9 + 1;
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        uVar5 = uVar13 >> 6 | (uVar5 & 0xf) << 2;
        if ((uVar5 != 0) || (bVar1)) {
          *pcVar9 = s_0123456789ABCDEFGHIJKLMNOPQRSTUV_1011b55a0[uVar5];
          pcVar9 = pcVar9 + 1;
LAB_1008e1cce:
          *pcVar9 = s_0123456789ABCDEFGHIJKLMNOPQRSTUV_1011b55a0[uVar13 & 0x3f];
          pcVar9 = pcVar9 + 1;
          bVar1 = true;
        }
        else {
          if ((uVar13 & 0x3f) != 0) goto LAB_1008e1cce;
          bVar1 = false;
        }
        if (0x13 < lVar14) goto code_r0x0001008e1ce5;
        bVar10 = abStack_13d6[lVar14 + -2];
        uVar5 = (uint)abStack_13d6[lVar14 + -1];
        uVar13 = (uint)abStack_13d6[lVar14];
        lVar14 = lVar14 + 3;
      } while( true );
    }
    pcVar16 = (char *)0x0;
    pcVar15 = pcVar7;
    goto LAB_1008e1d10;
  }
  goto LAB_1008e1cf2;
code_r0x0001008e1ce5:
  *pcVar9 = '\0';
  *param_3 = (long)pcVar15;
LAB_1008e1cf2:
  *param_4 = pcVar7;
  pcVar15 = (char *)0x0;
LAB_1008e1d10:
  if (param_5 != 0) {
LAB_1008e1d15:
    FUN_10084b4b0(local_1400);
    FUN_10084b4b0(local_13f0);
  }
LAB_1008e1d2c:
  _OPENSSL_cleanse(pcVar15,(long)iVar3);
  FUN_10081e1a0(pcVar15);
  FUN_10084b440(local_13e0);
  FUN_10084b440(local_13e8);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pcVar16;
}

