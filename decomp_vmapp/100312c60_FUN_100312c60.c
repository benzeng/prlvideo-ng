
undefined8
FUN_100312c60(undefined8 *param_1,long param_2,int param_3,undefined8 param_4,int param_5,
             long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  undefined4 uVar16;
  uint *local_3168 [1574];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar3 = FUN_1002a6120(param_7,0,0);
  FUN_1002a6120(param_7,1,1);
  FUN_1002a6120(param_7,2,1);
  uVar6 = DAT_1011c8120;
  puVar2 = DAT_1011c8118;
  uVar8 = (ulong)*(uint *)(lVar3 + 8);
  if (DAT_1011c8120 < uVar8) {
    uVar8 = uVar8 + 0x3ffff & 0x1fffc0000;
    DAT_1011c8118 = operator_new__(uVar8);
    _memcpy(DAT_1011c8118,puVar2,uVar6);
    DAT_1011c8120 = uVar8;
    if (puVar2 != (uint *)0x0) {
      operator_delete__(puVar2);
    }
    uVar8 = (ulong)*(uint *)(lVar3 + 8);
  }
  puVar2 = DAT_1011c8118;
  FUN_1002adb30(*param_1,param_1[2]);
  if (param_1[4] != param_2) {
    uVar6 = 0;
    if (*(int *)(param_2 + 0xc) == 0x8513) {
      uVar7 = *(int *)(param_2 + 0x10) - 0x8515;
      uVar6 = 0;
      if (uVar7 < 6) {
        uVar6 = (ulong)uVar7;
      }
    }
    if (*(long *)(param_2 + 0x20 + uVar6 * 8) != 0) {
      if ((param_1[2] == 0) || (param_1[4] == 0)) {
        param_1[4] = 0;
      }
      else {
        lVar4 = FUN_1002adb30(*param_1);
        FUN_1002fab50(*param_1,param_1 + 0x14cd,0);
        param_1[4] = 0;
        if (lVar4 != param_1[2]) {
          FUN_1002adb30(*param_1,lVar4);
        }
      }
      FUN_1003112d0(param_1,param_2);
      puVar1 = param_1 + 7;
      if (*(char *)(param_1 + 1) == '\0') {
        FUN_1003021b0(puVar1,0x404,0);
        FUN_1003020b0(puVar1,0x404,0);
      }
      else {
        uVar7 = *(uint *)((long)param_1 + 0x15e4);
        uVar15 = *(uint *)(param_1[0xd] + 0x2058);
        uVar9 = uVar7;
        if (uVar15 < 0x20) {
          uVar5 = 0x20;
          do {
            uVar5 = uVar5 >> 1;
            uVar9 = uVar9 ^ uVar9 >> (sbyte)uVar5;
          } while (uVar15 < uVar5);
        }
        for (puVar12 = *(uint **)(param_1[0xd] + 0x1858 + (ulong)(uVar9 & 0xff) * 8); uVar16 = 0,
            puVar12 != (uint *)0x0; puVar12 = *(uint **)(puVar12 + 4)) {
          if (*puVar12 == uVar7) {
            uVar16 = 0;
            if (*(long *)(puVar12 + 2) != 0) {
              uVar16 = *(undefined4 *)(*(long *)(puVar12 + 2) + 0x198);
            }
            break;
          }
        }
        FUN_1003021b0(puVar1,0x404,0);
        (*(code *)DAT_1011c4a88[0xb])(*DAT_1011c4a88,0x4000);
        FUN_1003021b0(puVar1,uVar16,0);
      }
      (*(code *)DAT_1011c4a88[0x150])
                (*DAT_1011c4a88,0,0,*(int *)(param_2 + 0x5c) - *(int *)(param_2 + 0x54),
                 *(int *)(param_2 + 0x60) - *(int *)(param_2 + 0x58));
      (*(code *)DAT_1011c4a88[0xfc])
                (*DAT_1011c4a88,0,0,*(int *)(param_2 + 0x5c) - *(int *)(param_2 + 0x54),
                 *(int *)(param_2 + 0x60) - *(int *)(param_2 + 0x58));
      if (*(char *)(param_2 + 0x50) == '\0') {
        (*(code *)DAT_1011c4a88[0xb])(*DAT_1011c4a88,0x4000);
        *(undefined1 *)(param_2 + 0x50) = 1;
      }
    }
  }
  if (3 < (uint)uVar8) {
    uVar7 = 0;
    puVar12 = (uint *)0x0;
    lVar4 = 0;
    do {
      uVar15 = (uint)uVar8;
      if (uVar7 < 4) {
        uVar7 = FUN_1002a5b80(lVar3,lVar4,local_3168);
        uVar6 = (ulong)uVar7;
        puVar12 = local_3168[0];
        if (uVar7 < 4) {
          _memcpy(puVar2,local_3168[0],uVar6);
          FUN_1002a5990(lVar3,uVar6 + lVar4,(long)puVar2 + uVar6,4 - uVar7);
          uVar7 = 4;
          puVar12 = puVar2;
        }
      }
      uVar5 = *puVar12;
      uVar9 = uVar5 >> 0xc;
      uVar13 = 0xf0000003;
      if (uVar15 < uVar9) goto LAB_100325678;
      lVar14 = lVar4 + 4;
      uVar11 = uVar7 - 4;
      puVar12 = puVar12 + 1;
      if (uVar5 < 0x4000) {
        if (uVar15 < 8) goto LAB_100325678;
        if (uVar11 < 4) {
          uVar11 = FUN_1002a5b80(lVar3,lVar14,local_3168);
          uVar6 = (ulong)uVar11;
          puVar12 = local_3168[0];
          if (uVar11 < 4) {
            _memcpy(puVar2,local_3168[0],uVar6);
            FUN_1002a5990(lVar3,lVar14 + uVar6,uVar6 + (long)puVar2,4 - uVar11);
            uVar11 = 4;
            puVar12 = puVar2;
          }
        }
        uVar9 = *puVar12;
        if ((uVar15 < uVar9) || (uVar9 < 8)) goto LAB_100325678;
        puVar12 = puVar12 + 1;
        uVar11 = uVar11 - 4;
        lVar14 = lVar4 + 8;
        uVar15 = uVar15 - 4;
        uVar9 = uVar9 - 4;
      }
      uVar10 = uVar9 - 4;
      uVar5 = uVar5 & 0xfff;
      if (1 < uVar5 - 0x7d7) {
        if (uVar11 < uVar10) {
          uVar11 = FUN_1002a5b80(lVar3,lVar14,local_3168);
          uVar6 = (ulong)uVar11;
          puVar12 = local_3168[0];
          if (uVar11 <= uVar10 && uVar10 - uVar11 != 0) {
            _memcpy(puVar2,local_3168[0],uVar6);
            FUN_1002a5990(lVar3,uVar6 + lVar14,(long)puVar2 + uVar6,uVar10 - uVar11);
            puVar12 = puVar2;
            uVar11 = uVar10;
          }
        }
        lVar14 = lVar14 + (ulong)uVar10;
        uVar11 = uVar11 - uVar10;
        puVar12 = (uint *)((long)puVar12 + (ulong)uVar10);
      }
      uVar15 = uVar15 - (uVar9 + 3 & 0xfffffffc);
      uVar8 = (ulong)uVar15;
      uVar10 = (uVar9 - 1 & 0xfffffffc) - uVar10;
      if (uVar5 < 0x861) {
                    /* WARNING: Could not recover jumptable at 0x0001003131ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar13 = (*(code *)(&DAT_1003256a4 + *(int *)(&DAT_1003256a4 + (ulong)uVar5 * 4)))();
        return uVar13;
      }
      lVar4 = lVar14 + (ulong)uVar10;
      uVar7 = uVar11 - uVar10;
      if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
        uVar7 = 0;
      }
      puVar12 = (uint *)((long)puVar12 + (ulong)uVar10);
    } while (3 < uVar15);
  }
  uVar13 = 0;
  if ((param_3 != 0) && (param_1[4] != 0)) {
    FUN_1002a5590(*param_1,param_7,0);
    if ((param_3 != 0x404) && (*(char *)(param_1 + 1) != '\0')) {
      FUN_100311360(param_1,(*(uint *)(param_1 + 0x4c6) & 8) >> 3);
    }
    if (param_5 == 0) {
      uVar13 = 0xffffffff;
      if (param_6 != 0) {
        FUN_1002fc360(*param_1,param_6,param_1 + 0x14cd);
      }
    }
    else {
      FUN_1002fac70(*param_1,param_1 + 0x14cd,param_1[4] + 0x54,param_4);
      uVar13 = 0xffffffff;
    }
  }
LAB_100325678:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
}

