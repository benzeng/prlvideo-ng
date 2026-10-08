
undefined8
FUN_100c48ab0(undefined1 *param_1,int param_2,void *param_3,uint param_4,undefined8 param_5,
             int param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (param_2 + -0x2a < (int)param_4) {
    uVar12 = 0x6e;
    uVar17 = 0x2c;
  }
  else {
    if (0x29 < param_2) {
      *param_1 = 0;
      puVar1 = param_1 + 0x15;
      uVar12 = FUN_100c6ca00();
      iVar9 = FUN_100c65f10(param_5,(long)param_6,puVar1,0,uVar12,0);
      if (iVar9 == 0) {
        uVar12 = 0;
        goto LAB_100c48b2b;
      }
      iVar9 = (param_2 + -1) - param_4;
      ___bzero(param_1 + 0x29,(long)(iVar9 + -0x29));
      param_1[iVar9] = 1;
      _memcpy(param_1 + (((long)(param_2 + -1) + 1) - (long)(int)param_4),param_3,(ulong)param_4);
      iVar9 = FUN_100c62100(param_1 + 1,0x14);
      if (iVar9 < 1) {
        uVar12 = 0;
        goto LAB_100c48b2b;
      }
      puVar10 = (undefined1 *)FUN_100bf3540(param_2 + -0x15,"rsa_oaep.c",0x47);
      if (puVar10 == (undefined1 *)0x0) {
        uVar12 = 0x41;
        uVar17 = 0x49;
        goto LAB_100c48b24;
      }
      uVar18 = (ulong)(param_2 + -0x15);
      uVar12 = FUN_100c6ca00();
      iVar9 = FUN_100c491f0(puVar10,uVar18,param_1 + 1,0x14,uVar12);
      uVar12 = 0;
      if (iVar9 < 0) goto LAB_100c48b2b;
      uVar11 = 1;
      if (0 < (long)uVar18) {
        uVar11 = uVar18;
      }
      uVar14 = 0;
      if (uVar11 == 0) {
LAB_100c48ce0:
        do {
          param_1[uVar14 + 0x15] = param_1[uVar14 + 0x15] ^ puVar10[uVar14];
          uVar14 = uVar14 + 1;
        } while ((long)uVar14 < (long)uVar18);
      }
      else {
        uVar16 = 1;
        if (0 < (long)uVar18) {
          uVar16 = uVar18;
        }
        uVar14 = 0;
        if (((uVar11 & 0xffffffffffffffe0) != 0) &&
           ((puVar10 + (uVar16 - 1) < puVar1 || (uVar14 = 0, param_1 + uVar16 + 0x14 < puVar10)))) {
          puVar13 = (uint *)(param_1 + 0x25);
          puVar15 = (uint *)(puVar10 + 0x10);
          uVar16 = 0;
          if (0 < (long)uVar18) {
            uVar16 = uVar18;
          }
          uVar16 = uVar16 & 0xffffffffffffffe0;
          do {
            uVar2 = puVar15[-3];
            uVar3 = puVar15[-2];
            uVar4 = puVar15[-1];
            uVar5 = *puVar15;
            uVar6 = puVar15[1];
            uVar7 = puVar15[2];
            uVar8 = puVar15[3];
            puVar13[-4] = puVar13[-4] ^ puVar15[-4];
            puVar13[-3] = puVar13[-3] ^ uVar2;
            puVar13[-2] = puVar13[-2] ^ uVar3;
            puVar13[-1] = puVar13[-1] ^ uVar4;
            *puVar13 = *puVar13 ^ uVar5;
            puVar13[1] = puVar13[1] ^ uVar6;
            puVar13[2] = puVar13[2] ^ uVar7;
            puVar13[3] = puVar13[3] ^ uVar8;
            puVar13 = puVar13 + 8;
            puVar15 = puVar15 + 8;
            uVar16 = uVar16 - 0x20;
            uVar14 = uVar11 & 0xffffffffffffffe0;
          } while (uVar16 != 0);
        }
        if (uVar11 != uVar14) goto LAB_100c48ce0;
      }
      uVar12 = FUN_100c6ca00();
      iVar9 = FUN_100c491f0(&local_58,0x14,puVar1,uVar18,uVar12);
      uVar12 = 0;
      if (-1 < iVar9) {
        *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) ^ local_58;
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) ^ uStack_54;
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) ^ uStack_50;
        *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) ^ uStack_4c;
        param_1[0x11] = param_1[0x11] ^ local_48;
        param_1[0x12] = param_1[0x12] ^ local_47;
        param_1[0x13] = param_1[0x13] ^ local_46;
        param_1[0x14] = param_1[0x14] ^ local_45;
        FUN_100bf3910(puVar10);
        uVar12 = 1;
      }
      goto LAB_100c48b2b;
    }
    uVar12 = 0x78;
    uVar17 = 0x31;
  }
LAB_100c48b24:
  FUN_100c62ee0(4,0x79,uVar12,"rsa_oaep.c",uVar17);
  uVar12 = 0;
LAB_100c48b2b:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar12;
}

