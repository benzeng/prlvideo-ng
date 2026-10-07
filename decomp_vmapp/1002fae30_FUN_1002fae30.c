
void FUN_1002fae30(long param_1,uint param_2,long param_3,int *param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  int *piVar17;
  long lVar18;
  int *piVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_d0;
  int local_c8 [2];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  long local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  int local_74;
  long local_70;
  uint local_64;
  int *local_60;
  long local_58;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar18 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar22 = (ulong)param_2 * 0x8f0;
  lVar21 = *(long *)(param_1 + 0x9b8 + lVar22);
  lVar9 = lVar21;
  if (lVar21 == 0) {
    lVar9 = *(long *)(param_1 + 0x868);
  }
  puVar15 = auStack_b8;
  local_38 = lVar18;
  if ((((*(int **)(param_3 + 0x10) != (int *)0x0) &&
       (iVar20 = *(int *)(param_1 + 0x938 + lVar22), puVar15 = auStack_b8, iVar20 != 0)) &&
      (iVar1 = *(int *)(param_1 + 0x93c + lVar22), puVar15 = auStack_b8, iVar1 != 0)) &&
     (((iVar6 = *(int *)(param_1 + 0x980 + lVar22), puVar15 = auStack_b8, *param_4 <= iVar20 + iVar6
       && (iVar20 = *(int *)(param_1 + 0x984 + lVar22), puVar15 = auStack_b8,
          param_4[1] <= iVar1 + iVar20)) &&
      ((puVar15 = auStack_b8, iVar6 <= param_4[2] && (puVar15 = auStack_b8, iVar20 <= param_4[3]))))
     )) {
    iVar20 = **(int **)(param_3 + 0x10);
    if ((lVar21 == 0) && (*(char *)(param_1 + 0x870) == '\0')) {
      FUN_1002fb2e0(param_1,param_2,param_3,param_4,param_5,param_6);
      return;
    }
    uStack_c0 = 0x1002faf12;
    local_64 = param_2;
    local_60 = param_5;
    local_58 = param_3;
    local_70 = FUN_1002adb30(param_1,lVar9);
    uStack_c0 = 0x1002faf38;
    local_40 = iVar20;
    (*(code *)DAT_1011c4a88[99])(*DAT_1011c4a88,1,&local_3c);
    uStack_c0 = 0x1002faf47;
    (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,local_40,local_3c);
    uStack_c0 = 0x1002faf63;
    (*(code *)DAT_1011c4a88[0x131])
              (*DAT_1011c4a88,local_40,0x2800,*(undefined4 *)(param_1 + 0x9e0 + lVar22));
    iVar20 = local_40;
    uStack_c0 = 0x1002faf81;
    (*(code *)DAT_1011c4a88[0x131])
              (*DAT_1011c4a88,local_40,0x2801,*(undefined4 *)(param_1 + 0x9e0 + lVar22));
    if (iVar20 != 0x84f5) {
      uStack_c0 = 0x1002fafa5;
      (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,iVar20,0x813d,0);
    }
    puVar3 = *(undefined4 **)(local_58 + 0x10);
    iVar20 = puVar3[1];
    uVar14 = 0x80e1;
    if (iVar20 == 0x8814) {
      uVar14 = 0x1908;
    }
    uVar8 = 0x8367;
    if (iVar20 == 0x8814) {
      uVar8 = 0x1406;
    }
    local_d0 = *(undefined8 *)(puVar3 + 4);
    local_c8[0] = 0;
    _CGLTexImageIOSurface2D(DAT_1011c4a88,*puVar3,iVar20,puVar3[2],puVar3[3],uVar14,uVar8);
    lVar18 = (long)param_6 * -0x10;
    puVar12 = auStack_b8 + lVar18;
    puVar15 = puVar12 + (long)param_6 * -0x10;
    local_50 = 2;
    puVar16 = puVar15;
    lVar21 = param_1;
    iVar20 = param_6;
    if (0 < param_6) {
      local_a8 = (int *)(param_1 + 0x938 + lVar22);
      local_b0 = (int *)(param_1 + 0x93c + lVar22);
      local_98 = (int *)(param_1 + 0x980 + lVar22);
      local_a0 = (int *)(param_1 + 0x984 + lVar22);
      local_44 = param_4[3];
      local_48 = *local_98;
      local_4c = *local_a0;
      pfVar7 = (float *)((long)&local_b0 + lVar18 + 4);
      piVar17 = local_60 + 3;
      piVar19 = (int *)(puVar15 + 0xc);
      local_90 = param_1;
      local_88 = puVar15;
      local_80 = puVar12;
      local_74 = param_6;
      do {
        iVar20 = piVar17[-2];
        iVar1 = *piVar17;
        iVar6 = local_44 - iVar20;
        iVar10 = local_44 - iVar1;
        if (local_40 == 0xde1) {
          iVar2 = *param_4;
          iVar13 = piVar17[-3];
          iVar11 = piVar17[-1];
          fVar23 = (float)(iVar13 - iVar2) / (float)(param_4[2] - iVar2);
          fVar24 = (float)iVar6 / (float)(local_44 - param_4[1]);
          fVar25 = (float)(iVar11 - iVar2) / (float)(param_4[2] - iVar2);
          fVar26 = (float)iVar10 / (float)(local_44 - param_4[1]);
        }
        else {
          iVar13 = piVar17[-3];
          iVar11 = piVar17[-1];
          fVar23 = (float)(iVar13 - *param_4);
          fVar24 = (float)iVar6;
          fVar25 = (float)(iVar11 - *param_4);
          fVar26 = (float)iVar10;
        }
        pfVar7[-3] = fVar23;
        pfVar7[-2] = fVar24;
        pfVar7[-1] = fVar25;
        *pfVar7 = fVar26;
        iVar10 = local_48;
        piVar19[-3] = iVar13 - local_48;
        iVar6 = local_4c;
        piVar19[-2] = iVar20 - local_4c;
        piVar19[-1] = iVar11 - iVar10;
        *piVar19 = iVar1 - iVar6;
        pfVar7 = pfVar7 + 4;
        piVar17 = piVar17 + 4;
        piVar19 = piVar19 + 4;
        param_6 = param_6 + -1;
      } while (param_6 != 0);
      puVar12 = local_80;
      puVar16 = local_88;
      lVar21 = local_90;
      iVar20 = local_74;
      if ((((local_74 == 1) && (*local_60 == *local_98)) && (local_60[1] == *local_a0)) &&
         ((local_60[2] == *local_60 + *local_a8 &&
          (local_50 = 0x12, local_60[3] != local_60[1] + *local_b0)))) {
        local_50 = 2;
      }
    }
    uVar5 = local_64;
    *(uint *)(puVar15 + -8) = local_50;
    *(int *)(puVar15 + -0x10) = iVar20;
    iVar1 = local_40;
    *(undefined8 *)(puVar15 + -0x18) = 0x1002fb243;
    FUN_1002b0360(lVar21,uVar5,local_3c,iVar1,puVar12,puVar16);
    uVar14 = *DAT_1011c4a88;
    pcVar4 = (code *)DAT_1011c4a88[0x3c];
    *(undefined8 *)(puVar15 + -8) = 0x1002fb25c;
    (*pcVar4)(uVar14,1,&local_3c);
    if (local_70 != 0) {
      *(undefined8 *)(puVar15 + -8) = 0x1002fb26d;
      FUN_1002adb30(lVar21);
    }
    lVar9 = local_58;
    piVar17 = local_60;
    lVar18 = *(long *)PTR____stack_chk_guard_100ba2320;
    if ((local_50 & 0x10) == 0) {
      *(undefined8 *)(puVar15 + -8) = 0x1002fb299;
      FUN_1002fb2e0(lVar21,uVar5,lVar9,param_4,piVar17,iVar20);
    }
  }
  if (lVar18 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar15 + -8) = &UNK_1002fb2db;
  ___stack_chk_fail();
}

