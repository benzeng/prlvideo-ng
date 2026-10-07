
void FUN_100312440(undefined8 *param_1,long param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,uint param_6,uint param_7,char param_8)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_7c = 0;
  local_38 = lVar9;
  if (param_1[3] == 0) {
    lVar8 = FUN_1002fa250(*param_1,*(undefined1 *)(param_1 + 1),param_1[2],
                          *(undefined2 *)((long)param_1 + 0xa6ac));
    param_1[3] = lVar8;
    if (lVar8 == 0) goto LAB_100312c38;
  }
  iVar2 = *(int *)(param_2 + 0xc);
  puVar1 = param_1 + 7;
  iVar7 = FUN_1003017c0(puVar1,iVar2,1);
  if (iVar7 == 0) {
    iVar2 = 0;
  }
  if (((iVar2 == 0xde1) || (iVar2 == 0x84f5)) || (iVar2 == 0x8513)) {
    iVar13 = *(int *)(param_2 + 0x5c);
    iVar14 = *(int *)(param_2 + 0x60);
    iVar12 = *(int *)(param_2 + 0x54);
    iVar3 = *(int *)(param_2 + 0x58);
    iVar11 = 0;
    lVar9 = FUN_1003018d0(puVar1,iVar2,0);
    iVar13 = iVar13 - iVar12;
    if (((iVar13 != 0) && (iVar14 != iVar3)) &&
       ((*(int *)(lVar9 + 0xc) == 0 && (*(int *)(lVar9 + 0x10) == 0)))) {
      iVar14 = iVar14 - iVar3;
      FUN_1003017e0(puVar1,iVar2,0,0x8058,iVar13,iVar14,1,0,0);
      iVar12 = 0x8515;
      if (iVar2 != 0x8513) {
        iVar12 = iVar2;
      }
      (*(code *)DAT_1011c4a88[0x12e])
                (*DAT_1011c4a88,iVar12,0,0x8058,iVar13,iVar14,0,0x1908,0x1401,0);
      if (iVar2 == 0x8513) {
        (*(code *)DAT_1011c4a88[0x12e])
                  (*DAT_1011c4a88,0x8516,0,0x8058,iVar13,iVar14,0,0x1908,0x1401,0);
        (*(code *)DAT_1011c4a88[0x12e])
                  (*DAT_1011c4a88,0x8517,0,0x8058,iVar13,iVar14,0,0x1908,0x1401,0);
        (*(code *)DAT_1011c4a88[0x12e])
                  (*DAT_1011c4a88,0x8518,0,0x8058,iVar13,iVar14,0,0x1908,0x1401,0);
        (*(code *)DAT_1011c4a88[0x12e])
                  (*DAT_1011c4a88,0x8519,0,0x8058,iVar13,iVar14,0,0x1908,0x1401,0);
        (*(code *)DAT_1011c4a88[0x12e])
                  (*DAT_1011c4a88,0x851a,0,0x8058,iVar13,iVar14,0,0x1908,0x1401,0);
      }
    }
    if (*(int *)(param_2 + 0x14) != 0) {
      iVar11 = -1;
      do {
        iVar11 = iVar11 + 1;
        if (0x1f < iVar11) break;
      } while ((uint)(1 << ((byte)iVar11 & 0x1f)) <
               ((uint)((*(ulong *)(param_2 + 0x5c) >> 0x20) - (*(ulong *)(param_2 + 0x54) >> 0x20))
               | (uint)(*(ulong *)(param_2 + 0x5c) - *(ulong *)(param_2 + 0x54))));
    }
    if (iVar2 != 0x84f5) {
      (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,iVar2,0x813d,iVar11);
    }
    (*(code *)DAT_1011c4a88[0x5b])(*DAT_1011c4a88);
    uVar10 = FUN_1002adb30(*param_1,param_1[3]);
    (*DAT_1011c5e48)(1,&local_7c);
    (*DAT_1011c5738)(0x8ca9,local_7c);
    uVar5 = DAT_100b39674;
    uVar6 = DAT_100b39678;
    if (param_8 == '\0') {
      uVar5 = DAT_100b39678;
      uVar6 = DAT_100b39674;
    }
    fVar15 = (float)param_6;
    fVar16 = (float)param_7;
    lVar9 = 0;
    do {
      local_58 = 0xbf800000;
      local_50 = 0x3f800000;
      local_48 = 0x3f800000;
      local_40 = 0xbf800000;
      local_78 = 0;
      local_74 = 0;
      local_6c = 0;
      local_60 = 0;
      local_80 = 0;
      piVar4 = *(int **)(param_2 + 0x20 + lVar9 * 2);
      local_70 = fVar15;
      local_68 = fVar15;
      local_64 = fVar16;
      local_5c = fVar16;
      local_54 = uVar6;
      local_4c = uVar6;
      local_44 = uVar5;
      local_3c = uVar5;
      if ((piVar4 != (int *)0x0) && (*piVar4 == 0x84f5)) {
        if (iVar2 == 0x8513) {
          iVar13 = *(int *)((long)&DAT_100b397a0 + lVar9);
        }
        else {
          iVar13 = iVar2;
          if (lVar9 != 0) goto LAB_100312bd3;
        }
        (*DAT_1011c5de8)(0x8ca9,0x8ce0,iVar13,iVar7,0);
        (*DAT_1011c5de8)(0x8ca9,0x821a,iVar13,0,0);
        (*(code *)DAT_1011c4a88[0x43])(*DAT_1011c4a88,0x8ce0);
        (*(code *)DAT_1011c4a88[0x150])(*DAT_1011c4a88,param_4,param_5,param_6,param_7);
        (*(code *)DAT_1011c4a88[0xaf])(*DAT_1011c4a88,0x1701);
        (*(code *)DAT_1011c4a88[0x9e])(*DAT_1011c4a88);
        (*(code *)DAT_1011c4a88[0xaf])(*DAT_1011c4a88,0x1700);
        (*(code *)DAT_1011c4a88[0x9e])(*DAT_1011c4a88);
        (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb71);
        (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xbc0);
        (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb90);
        (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xc11);
        (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xbe2);
        (*(code *)DAT_1011c4a88[99])(*DAT_1011c4a88,1,&local_80);
        (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0x84f5,local_80);
        (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,0x84f5,0x2800,0x2600);
        (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,0x84f5,0x2801,0x2600);
        FUN_1002fabf0(*param_1,piVar4,param_3);
        (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0x84f5);
        (*(code *)DAT_1011c4a88[0x4a])(*DAT_1011c4a88,0x8074);
        (*(code *)DAT_1011c4a88[0x156])(*DAT_1011c4a88,0x84c0);
        (*(code *)DAT_1011c4a88[0x4a])(*DAT_1011c4a88,0x8078);
        (*(code *)DAT_1011c4a88[0x14f])(*DAT_1011c4a88,2,0x1406,0,&local_58);
        (*(code *)DAT_1011c4a88[0x122])(*DAT_1011c4a88,2,0x1406,0);
        (*(code *)DAT_1011c4a88[0x42])(*DAT_1011c4a88,6,0,4);
        (*(code *)DAT_1011c4a88[0x41])(*DAT_1011c4a88,0x8078);
        (*(code *)DAT_1011c4a88[0x41])(*DAT_1011c4a88,0x8074);
        (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x84f5);
        (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,0x84f5,0);
        (*(code *)DAT_1011c4a88[0x3c])(*DAT_1011c4a88,1,&local_80);
        (*DAT_1011c5de8)(0x8ca9,0x8ce0,iVar13,0);
      }
LAB_100312bd3:
      lVar9 = lVar9 + 4;
    } while (lVar9 != 0x18);
    (*DAT_1011c5738)(0x8ca9,0);
    (*DAT_1011c5b20)(1,&local_7c);
    (*(code *)DAT_1011c4a88[0x43])(*DAT_1011c4a88,0x405);
    FUN_1002adb30(*param_1,uVar10);
    lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
LAB_100312c38:
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

