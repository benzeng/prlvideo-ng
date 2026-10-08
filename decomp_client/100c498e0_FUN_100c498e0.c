
undefined4
FUN_100c498e0(long param_1,byte *param_2,undefined8 param_3,long param_4,long param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte bVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined4 uVar22;
  uint uVar23;
  byte *local_68;
  undefined1 local_60 [48];
  
  if (param_5 == 0) {
    param_5 = param_4;
  }
  uVar4 = FUN_100c6fc50(param_4);
  if ((int)uVar4 < 0) {
    return 0;
  }
  uVar23 = uVar4;
  if (param_6 == 0xffffffff) {
LAB_100c49968:
    cVar3 = FUN_100c26610(*(undefined8 *)(param_1 + 0x20));
    iVar5 = FUN_100c4c150(param_1);
    bVar13 = cVar3 + 7U & 7;
    local_68 = param_2;
    if (bVar13 == 0) {
      *param_2 = 0;
      local_68 = param_2 + 1;
      iVar5 = iVar5 + -1;
    }
    if (uVar23 == 0xfffffffe) {
      uVar23 = (-2 - uVar4) + iVar5;
    }
    else if (iVar5 < (int)(uVar4 + 2 + uVar23)) {
      FUN_100c62ee0(4,0x94,0x6e,"rsa_pss.c",0xe5);
      return 0;
    }
    puVar16 = (uint *)0x0;
    if ((int)uVar23 < 1) {
LAB_100c49a33:
      uVar22 = 0;
      FUN_100c65850(local_60);
      iVar6 = FUN_100c65920(local_60,param_4,0);
      uVar11 = extraout_RDX_00;
      if ((iVar6 != 0) &&
         (iVar6 = FUN_100c65b10(local_60,"",8), uVar11 = extraout_RDX_01, iVar6 != 0)) {
        iVar6 = FUN_100c65b10(local_60,param_3,(long)(int)uVar4);
        uVar11 = extraout_RDX_02;
        if ((iVar6 != 0) &&
           ((uVar23 == 0 ||
            (iVar6 = FUN_100c65b10(local_60,puVar16,(long)(int)uVar23), uVar11 = extraout_RDX_03,
            uVar22 = 0, iVar6 != 0)))) {
          uVar22 = 0;
          iVar6 = FUN_100c65bc0(local_60,local_68 + (int)(~uVar4 + iVar5),0);
          uVar11 = extraout_RDX_04;
          if (iVar6 != 0) {
            FUN_100c65c50(local_60);
            iVar6 = FUN_100c491f0(local_68,(long)(int)(~uVar4 + iVar5),
                                  local_68 + (int)(~uVar4 + iVar5),(long)(int)uVar4,param_5);
            uVar11 = extraout_RDX_05;
            if (iVar6 == 0) {
              lVar21 = (long)(int)(((-2 - uVar4) + iVar5) - uVar23);
              local_68[lVar21] = local_68[lVar21] ^ 1;
              if (0 < (int)uVar23) {
                pbVar7 = local_68 + lVar21 + 1;
                uVar19 = (ulong)(uVar23 - 1);
                uVar20 = uVar19 + 1 & 0x1fffffff0;
                uVar11 = 0;
                if (uVar20 != 0) {
                  lVar8 = (long)(int)(((iVar5 + -2) - uVar4) - uVar23);
                  puVar15 = (uint *)(local_68 + lVar8 + 1);
                  if (((uint *)((long)puVar16 + uVar19) < puVar15) ||
                     (uVar11 = 0, local_68 + lVar8 + uVar19 + 1 < puVar16)) {
                    pbVar7 = local_68 + lVar21 + 1 + uVar20;
                    uVar10 = uVar19 + 1 & 0xfffffffffffffff0;
                    puVar17 = puVar16;
                    do {
                      uVar4 = puVar17[1];
                      uVar1 = puVar17[2];
                      uVar2 = puVar17[3];
                      *puVar15 = *puVar15 ^ *puVar17;
                      puVar15[1] = puVar15[1] ^ uVar4;
                      puVar15[2] = puVar15[2] ^ uVar1;
                      puVar15[3] = puVar15[3] ^ uVar2;
                      puVar17 = puVar17 + 4;
                      puVar15 = puVar15 + 4;
                      uVar10 = uVar10 - 0x10;
                      uVar11 = uVar20;
                    } while (uVar10 != 0);
                  }
                }
                if (uVar19 + 1 != uVar11) {
                  iVar6 = (int)uVar11;
                  if ((uVar23 & 3) != 0) {
                    iVar14 = -(uVar23 & 3);
                    do {
                      *pbVar7 = *pbVar7 ^ *(byte *)((long)puVar16 + uVar11);
                      pbVar7 = pbVar7 + 1;
                      uVar11 = uVar11 + 1;
                      iVar14 = iVar14 + 1;
                    } while (iVar14 != 0);
                  }
                  if (2 < (uVar23 - 1) - iVar6) {
                    pbVar9 = (byte *)((long)puVar16 + uVar11 + 3);
                    iVar6 = (uVar23 + 3) - ((int)uVar11 + 3);
                    do {
                      *pbVar7 = *pbVar7 ^ pbVar9[-3];
                      pbVar7[1] = pbVar7[1] ^ pbVar9[-2];
                      pbVar7[2] = pbVar7[2] ^ pbVar9[-1];
                      pbVar7[3] = pbVar7[3] ^ *pbVar9;
                      uVar11 = uVar11 + 4;
                      pbVar9 = pbVar9 + 4;
                      pbVar7 = pbVar7 + 4;
                      iVar6 = iVar6 + -4;
                    } while (iVar6 != 0);
                  }
                }
              }
              if (bVar13 != 0) {
                *local_68 = *local_68 & (byte)(0xff >> (8 - bVar13 & 0x1f));
              }
              local_68[(long)iVar5 + -1] = 0xbc;
              uVar22 = 1;
            }
          }
        }
      }
      if (puVar16 == (uint *)0x0) {
        return uVar22;
      }
    }
    else {
      puVar16 = (uint *)FUN_100bf3540(uVar23,"rsa_pss.c",0xe9);
      if (puVar16 == (uint *)0x0) {
        uVar12 = 0x41;
        uVar18 = 0xec;
        goto LAB_100c49c8e;
      }
      iVar6 = FUN_100c62100(puVar16,uVar23);
      uVar22 = 0;
      uVar11 = extraout_RDX;
      if (0 < iVar6) goto LAB_100c49a33;
    }
    FUN_100bf3910(puVar16,puVar16,uVar11);
  }
  else {
    if (param_6 == 0xfffffffe) {
      uVar23 = 0xfffffffe;
      goto LAB_100c49968;
    }
    uVar23 = param_6;
    if (-3 < (int)param_6) goto LAB_100c49968;
    uVar12 = 0x88;
    uVar18 = 0xd7;
LAB_100c49c8e:
    FUN_100c62ee0(4,0x94,uVar12,"rsa_pss.c",uVar18);
    uVar22 = 0;
  }
  return uVar22;
}

