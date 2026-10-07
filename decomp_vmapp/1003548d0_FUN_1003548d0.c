
undefined8 FUN_1003548d0(long param_1,uint param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined1 local_e0 [8];
  long local_d8;
  long local_c8;
  undefined1 local_b8 [8];
  long local_b0;
  long local_a0;
  undefined1 local_90 [8];
  char *local_88;
  char *local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  undefined1 local_40 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_10038e870(local_90,local_40,8);
  FUN_10039ebd0(local_90,*(undefined4 *)(param_4 + 0xb8),0,"xyzw");
  cVar2 = FUN_1003a2990(param_3);
  if (cVar2 == '\0') {
    pcVar4 = local_88;
    if (local_88 == (char *)0x0) {
      pcVar4 = local_78;
    }
    if (*pcVar4 == '\0') goto LAB_1003549b6;
  }
  if (*(int *)(param_3 + 0x20) == 0) {
    puVar5 = *(undefined1 **)(param_3 + 0x28);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)(param_3 + 0x38);
    }
    *puVar5 = 0;
    *(undefined4 *)(param_3 + 0x20) = 0;
    FUN_10038e8e0((undefined4 *)(param_3 + 0x20),"dst");
    *(undefined4 *)(param_3 + 8) = 0;
  }
  if (local_88 == (char *)0x0) {
    local_88 = local_78;
  }
  puVar5 = *(undefined1 **)(param_3 + 0x60);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_3 + 0x70);
  }
  *puVar5 = 0;
  *(undefined4 *)(param_3 + 0x58) = 0;
  FUN_10038e8e0((undefined4 *)(param_3 + 0x58),local_88);
LAB_1003549b6:
  uVar12 = *(uint *)(param_4 + 0xb8) & 0x7ff;
  uVar3 = param_2 & 0xffff;
  if (uVar3 == 0x5f) {
    FUN_10038e870(local_e0,local_68,0x10);
    uVar11 = FUN_1003a23f0(param_4);
    FUN_10038e8e0(local_e0,"%s.w",uVar11);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = FUN_1003a2680(param_3);
    uVar7 = FUN_10036bd80(uVar12);
    uVar8 = FUN_1003a23f0(param_4);
    if (local_d8 == 0) {
      local_d8 = local_c8;
    }
    FUN_100399e10(uVar11,uVar12,uVar1,1,uVar6,uVar7,uVar8,0,local_d8,0,0);
    FUN_10038e8c0(local_e0);
  }
  else if (uVar3 == 0x5d) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = FUN_1003a2680(param_3);
    uVar7 = FUN_10036bd80(uVar12);
    uVar8 = FUN_1003a23f0(param_4);
    uVar9 = FUN_1003a23f0(param_4 + 0x170);
    uVar10 = FUN_1003a23f0(param_4 + 0x228);
    FUN_100399e10(uVar11,uVar12,uVar1,2,uVar6,uVar7,uVar8,0,0,uVar9,uVar10);
  }
  else if (uVar3 == 0x42) {
    FUN_10038e870(local_b8,local_58,0x10);
    if ((param_2 & 0x20000) != 0) {
      uVar11 = FUN_1003a23f0(param_4);
      FUN_10038e8e0(local_b8,"%s.w",uVar11);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = FUN_1003a2680(param_3);
    uVar7 = FUN_10036bd80(uVar12);
    uVar8 = FUN_1003a23f0(param_4);
    if (local_b0 == 0) {
      local_b0 = local_a0;
    }
    FUN_100399e10(uVar11,uVar12,uVar1,param_2 >> 0xe & 4,uVar6,uVar7,uVar8,local_b0,0,0,0);
    FUN_10038e8c0(local_b8);
  }
  FUN_10038e8c0(local_90);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

