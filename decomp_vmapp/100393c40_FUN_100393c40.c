
undefined8 FUN_100393c40(long param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  undefined1 local_a8 [8];
  long local_a0;
  long local_90;
  undefined1 local_80 [8];
  char *local_78;
  char *local_68;
  undefined1 local_58 [24];
  undefined1 local_40 [8];
  long local_38;
  
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar10;
  FUN_10038e870(local_80,local_40,8);
  FUN_10039ebd0(local_80,*(undefined4 *)(param_4 + 0xb8),0,"xyzw");
  cVar1 = FUN_1003a2990(param_3);
  if (cVar1 == '\0') {
    pcVar2 = local_78;
    if (local_78 == (char *)0x0) {
      pcVar2 = local_68;
    }
    if (*pcVar2 == '\0') goto LAB_100393d24;
  }
  if (*(int *)(param_3 + 0x20) == 0) {
    puVar3 = *(undefined1 **)(param_3 + 0x28);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = *(undefined1 **)(param_3 + 0x38);
    }
    *puVar3 = 0;
    *(undefined4 *)(param_3 + 0x20) = 0;
    FUN_10038e8e0((undefined4 *)(param_3 + 0x20),"dst");
    *(undefined4 *)(param_3 + 8) = 0;
  }
  if (local_78 == (char *)0x0) {
    local_78 = local_68;
  }
  puVar3 = *(undefined1 **)(param_3 + 0x60);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_3 + 0x70);
  }
  *puVar3 = 0;
  *(undefined4 *)(param_3 + 0x58) = 0;
  FUN_10038e8e0((undefined4 *)(param_3 + 0x58),local_78);
LAB_100393d24:
  iVar9 = (*(uint *)(param_4 + 0xb8) & 0x7ff) + 0x10;
  cVar1 = FUN_100399b30(*(undefined8 *)(param_1 + 0x38),iVar9);
  if (cVar1 == '\0') {
    FUN_10038e870(local_a8,local_58,0x10);
    uVar5 = FUN_1003a23f0(param_4);
    FUN_10038e8e0(local_a8,"%s.w",uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = FUN_1003a2680(param_3);
    uVar7 = FUN_10036bd80(iVar9);
    uVar8 = FUN_1003a23f0(param_4);
    if (local_a0 == 0) {
      local_a0 = local_90;
    }
    FUN_100399e10(uVar4,iVar9,uVar5,1,uVar6,uVar7,uVar8,0,local_a0,0,0);
    FUN_10038e8c0(local_a8);
    lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = FUN_1003a2680(param_3);
    FUN_10038e8e0(uVar5,"%s = vec4(0.0, 0.0, 0.0, 1.0);\n",uVar4);
  }
  FUN_10038e8c0(local_80);
  if (lVar10 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

