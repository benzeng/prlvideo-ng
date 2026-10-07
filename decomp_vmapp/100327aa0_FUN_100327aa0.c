
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100327aa0(float param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  int local_ec;
  undefined4 local_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
  piVar4 = (int *)param_2[0x14cf];
  uVar16 = 0;
  uVar17 = 0;
  if (piVar4 != (int *)0x0) {
    uVar16 = piVar4[2];
    uVar17 = piVar4[3];
  }
  local_48 = _DAT_100b39830;
  uStack_40 = _UNK_100b39838;
  local_58 = _DAT_100b39820;
  uStack_50 = _UNK_100b39828;
  local_78 = 0;
  local_74 = 0;
  local_70 = (float)uVar16;
  local_6c = 0;
  local_64 = (float)uVar17;
  local_60 = 0;
  local_68 = local_70;
  local_5c = local_64;
  local_38 = lVar15;
  if (((piVar4 == (int *)0x0) || (4 < param_3 - 0x100U)) ||
     ((*(int *)((long)param_2 + 0xa69c) == 0 &&
      (FUN_1002faad0(*param_2,param_2 + 0x14cd,piVar4,*(undefined1 *)(param_2 + 1),1),
      *(int *)((long)param_2 + 0xa69c) == 0)))) goto LAB_1003283b4;
  if (param_3 == 0x102) {
    if (*(int *)((long)param_2 + 0x15dc) == 0) {
      local_ec = *(int *)(param_2 + 0x14d2);
      uVar1 = *(uint *)((long)param_2 + 0x15e4);
      uVar2 = *(uint *)(param_2[0xd] + 0x2058);
      uVar11 = uVar1;
      if (uVar2 < 0x20) {
        uVar8 = 0x20;
        do {
          uVar8 = uVar8 >> 1;
          uVar11 = uVar11 ^ uVar11 >> (sbyte)uVar8;
        } while (uVar2 < uVar8);
      }
      for (puVar10 = *(uint **)(param_2[0xd] + 0x1858 + (ulong)(uVar11 & 0xff) * 8);
          puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 4)) {
        if (*puVar10 == uVar1) {
          if (*(long *)(puVar10 + 2) != 0) {
            iVar3 = *(int *)(*(long *)(puVar10 + 2) + 0x1d8);
            if (iVar3 == 0x8ce1) {
              piVar9 = (int *)(param_2[0xc] + 0x20);
              goto LAB_100327d2f;
            }
            if (iVar3 == 0x8ce0) {
              piVar9 = (int *)(param_2[0xc] + 0x1c);
              goto LAB_100327d2f;
            }
          }
          break;
        }
      }
    }
    goto LAB_1003283b4;
  }
  local_ec = 0;
  if (*(int *)(param_2 + 699) == 0) {
    uVar1 = *(uint *)(param_2 + 700);
    uVar2 = *(uint *)(param_2[0xd] + 0x2058);
    uVar11 = uVar1;
    if (uVar2 < 0x20) {
      uVar8 = 0x20;
      do {
        uVar8 = uVar8 >> 1;
        uVar11 = uVar11 ^ uVar11 >> (sbyte)uVar8;
      } while (uVar2 < uVar8);
    }
    for (puVar10 = *(uint **)(param_2[0xd] + 0x1858 + (ulong)(uVar11 & 0xff) * 8);
        puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 4)) {
      if (*puVar10 == uVar1) {
        if (*(long *)(puVar10 + 2) != 0) {
          iVar3 = *(int *)(*(long *)(puVar10 + 2) + 0x24c);
          if (iVar3 == 0x8ce1) {
            local_ec = *(int *)(param_2[0xc] + 0x20);
          }
          else if (iVar3 == 0x8ce0) {
            local_ec = *(int *)(param_2[0xc] + 0x1c);
          }
        }
        break;
      }
    }
  }
  piVar9 = (int *)(param_2 + 0x14d2);
LAB_100327d2f:
  if (((*piVar4 != 0x84f5) || (local_ec == 0)) || (iVar3 = *piVar9, iVar3 == 0)) goto LAB_1003283b4;
  if (param_2[3] == 0) {
    lVar6 = FUN_1002fa250(*param_2,*(undefined1 *)(param_2 + 1),param_2[2],
                          *(undefined2 *)((long)param_2 + 0xa6ac));
    param_2[3] = lVar6;
    if (lVar6 == 0) goto LAB_1003283b4;
  }
  cVar5 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xc11);
  if (cVar5 != '\0') {
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xc10,&local_88);
  }
  (*(code *)DAT_1011c4a88[0x5b])(*DAT_1011c4a88);
  uVar7 = FUN_1002adb30(*param_2,param_2[3]);
  (*DAT_1011c5e48)(1,&local_cc);
  (*DAT_1011c5738)(0x8ca9,local_cc);
  (*DAT_1011c5de8)(0x8ca9,0x8ce0,0x84f5,iVar3,0);
  (*DAT_1011c5de8)(0x8ca9,0x821a,0x84f5,0,0);
  (*(code *)DAT_1011c4a88[0x43])(*DAT_1011c4a88,0x8ce0);
  (*(code *)DAT_1011c4a88[0x150])(*DAT_1011c4a88,0,0,uVar16,uVar17);
  (*(code *)DAT_1011c4a88[0xaf])(*DAT_1011c4a88,0x1701);
  (*(code *)DAT_1011c4a88[0x9e])(*DAT_1011c4a88);
  (*(code *)DAT_1011c4a88[0xaf])(*DAT_1011c4a88,0x1700);
  (*(code *)DAT_1011c4a88[0x9e])(*DAT_1011c4a88);
  (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb71);
  (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xbc0);
  (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb90);
  if (cVar5 == '\0') {
    (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xc11);
  }
  else {
    (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0xc11);
    (*(code *)DAT_1011c4a88[0xfc])
              (*DAT_1011c4a88,(int)local_88,(int)local_84,(int)local_80,(int)local_7c);
  }
  (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0x84f5);
  (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0x84f5,local_ec);
  if (param_1 <= 0.0) {
    if (param_3 != 0x103) {
      param_1 = (float)((uint)param_1 ^ DAT_100b3f6c0);
      uVar14 = *DAT_1011c4a88;
      uVar12 = 0x800b;
      goto LAB_100327fdb;
    }
    (*(code *)DAT_1011c4a88[0x153])(*DAT_1011c4a88,0x8006);
    param_1 = 0.0;
  }
  else {
    uVar14 = *DAT_1011c4a88;
    uVar12 = 0x8006;
LAB_100327fdb:
    (*(code *)DAT_1011c4a88[0x153])(uVar14,uVar12);
  }
  if ((param_3 == 0x102) || (param_3 == 0x101)) {
    uVar14 = *DAT_1011c4a88;
    uVar13 = 1;
    uVar12 = 0;
  }
  else {
    if (param_3 == 0x100) {
      uVar14 = *DAT_1011c4a88;
    }
    else {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x84f5);
      (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0x84f5,0);
      uVar14 = *DAT_1011c4a88;
      if (param_3 != 0x104) {
        (*(code *)DAT_1011c4a88[0x152])(DAT_100b39678,DAT_100b39678,DAT_100b39678,param_1,uVar14);
        uVar14 = *DAT_1011c4a88;
        uVar13 = 0;
        uVar12 = 0x8003;
        goto LAB_10032807e;
      }
    }
    uVar13 = 1;
    uVar12 = 1;
  }
LAB_10032807e:
  (*(code *)DAT_1011c4a88[8])(uVar14,uVar13,uVar12);
  (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0xbe2);
  local_c8 = param_1;
  fStack_c4 = param_1;
  fStack_c0 = param_1;
  fStack_bc = param_1;
  local_b8 = param_1;
  fStack_b4 = param_1;
  fStack_b0 = param_1;
  fStack_ac = param_1;
  local_a8 = param_1;
  fStack_a4 = param_1;
  fStack_a0 = param_1;
  fStack_9c = param_1;
  local_98 = param_1;
  fStack_94 = param_1;
  fStack_90 = param_1;
  fStack_8c = param_1;
  (*(code *)DAT_1011c4a88[0x27a])(*DAT_1011c4a88,0x891a,0);
  (*(code *)DAT_1011c4a88[0x125])(*DAT_1011c4a88,0x2300,0x2200,0x8570);
  (*(code *)DAT_1011c4a88[0x125])(*DAT_1011c4a88,0x2300,0x8571,0x2100);
  (*(code *)DAT_1011c4a88[0x125])(*DAT_1011c4a88,0x2300,0x8580,0x1702);
  (*(code *)DAT_1011c4a88[0x125])(*DAT_1011c4a88,0x2300,0x8590,0x300);
  (*(code *)DAT_1011c4a88[0x125])(*DAT_1011c4a88,0x2300,0x8589,0x8577);
  (*(code *)DAT_1011c4a88[0x125])(*DAT_1011c4a88,0x2300,0x8599,0x302);
  (*(code *)DAT_1011c4a88[0x125])(*DAT_1011c4a88,0x2300,0x8572,0x1e01);
  (*(code *)DAT_1011c4a88[0x125])(*DAT_1011c4a88,0x2300,0x8588,0x1702);
  (*(code *)DAT_1011c4a88[0x125])(*DAT_1011c4a88,0x2300,0x8598,0x302);
  (*(code *)DAT_1011c4a88[0x4a])(*DAT_1011c4a88,0x8074);
  (*(code *)DAT_1011c4a88[0x4a])(*DAT_1011c4a88,0x8076);
  (*(code *)DAT_1011c4a88[0x156])(*DAT_1011c4a88,0x84c0);
  (*(code *)DAT_1011c4a88[0x4a])(*DAT_1011c4a88,0x8078);
  (*(code *)DAT_1011c4a88[0x14f])(*DAT_1011c4a88,2,0x1406,0,&local_58);
  (*(code *)DAT_1011c4a88[0x34])(*DAT_1011c4a88,4,0x1406,0,&local_c8);
  (*(code *)DAT_1011c4a88[0x122])(*DAT_1011c4a88,2,0x1406,0,&local_78);
  (*(code *)DAT_1011c4a88[0x42])(*DAT_1011c4a88,6,0,4);
  (*(code *)DAT_1011c4a88[0x27a])(*DAT_1011c4a88,0x891a,1);
  (*(code *)DAT_1011c4a88[0x125])(*DAT_1011c4a88,0x2300,0x2200,0x2100);
  (*(code *)DAT_1011c4a88[0x152])(0,0,0,0,*DAT_1011c4a88);
  (*(code *)DAT_1011c4a88[8])(*DAT_1011c4a88,1,0);
  (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xbe2);
  (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xc11);
  (*(code *)DAT_1011c4a88[0x41])(*DAT_1011c4a88,0x8078);
  (*(code *)DAT_1011c4a88[0x41])(*DAT_1011c4a88,0x8076);
  (*(code *)DAT_1011c4a88[0x41])(*DAT_1011c4a88,0x8074);
  (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x84f5);
  (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0x84f5,0);
  (*DAT_1011c5de8)(0x8ca9,0x8ce0,0x84f5,0,0);
  (*DAT_1011c5738)(0x8ca9,0);
  (*DAT_1011c5b20)(1,&local_cc);
  (*(code *)DAT_1011c4a88[0x43])(*DAT_1011c4a88,0x405);
  (*(code *)DAT_1011c4a88[0x5b])(*DAT_1011c4a88);
  FUN_1002adb30(*param_2,uVar7);
  lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1003283b4:
  if (lVar15 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

