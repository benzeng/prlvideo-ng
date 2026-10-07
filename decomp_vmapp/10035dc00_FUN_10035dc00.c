
void FUN_10035dc00(long param_1,long param_2,int *param_3,uint param_4,uint param_5,ulong param_6,
                  undefined4 param_7)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  byte bVar10;
  int iVar11;
  ulong uVar12;
  undefined4 *local_f8;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  uint local_90;
  uint local_8c;
  uint local_88;
  undefined4 local_84;
  long local_80;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48 [4];
  long local_38;
  
  uVar8 = (ulong)param_4;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_74 = param_7;
  uVar5 = *(uint *)(param_2 + 8);
  uVar12 = (ulong)uVar5;
  bVar10 = (byte)param_5;
  if ((uVar12 == 0x1b) ||
     (plVar2 = *(long **)(param_2 + 0x40), (*(byte *)(*plVar2 + 0xac) & 0x10) == 0)) {
    local_f8 = &local_74;
    uVar1 = *(uint *)(&DAT_100b3ca14 + uVar12 * 8);
    if (((0xffffff < uVar1) && (uVar5 != (uint)param_6)) && (uVar5 != 0x1b)) {
      local_f8 = local_48;
      FUN_10038e7c0(param_6 & 0xffffffff,&local_74,uVar12,local_f8,0x10);
    }
    local_8c = *(uint *)(param_2 + 0xc) >> (bVar10 & 0x1f);
    if (*(uint *)(param_2 + 0xc) >> (bVar10 & 0x1f) == 0) {
      local_8c = 1;
    }
    local_88 = *(uint *)(param_2 + 0x10) >> (bVar10 & 0x1f);
    if (*(uint *)(param_2 + 0x10) >> (bVar10 & 0x1f) == 0) {
      local_88 = 1;
    }
    local_90 = uVar5;
    local_84 = FUN_10032e340(param_2,uVar8,param_5);
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x920);
    uVar4 = FUN_10032df60(param_2,uVar8,param_5);
    local_80 = (ulong)uVar4 + lVar7;
    local_a8 = *param_3;
    iStack_a4 = param_3[1];
    iStack_a0 = param_3[2];
    iStack_9c = param_3[3];
    uVar4 = 4;
    if (0xffffff < uVar1) {
      uVar4 = uVar1 >> 0x18;
    }
    FUN_1003c9ed0(&local_90,&local_a8,local_f8,uVar4);
    local_c0 = *(undefined8 *)param_3;
    local_b8 = *(undefined8 *)(param_3 + 2);
    local_b0 = 0x100000000;
    if (uVar5 != 0x1b) {
      FUN_10035e0e0(param_1,param_2,&local_c0,uVar8,param_5);
    }
    uVar5 = FUN_10032df40(param_2,uVar8,param_5);
LAB_10035df3d:
    if ((*(ushort *)(param_2 + 0xb0) & 1) == 0) {
      uVar8 = (ulong)uVar5;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x38) + 0x9830);
      if (uVar1 != 0) {
        uVar6 = *(undefined4 *)(*(long *)(param_2 + 0x28) + uVar8 * 0xc);
        iVar11 = *(int *)(param_2 + 0x10) * *(int *)(*(long *)(param_2 + 0x28) + 4 + uVar8 * 0xc);
        uVar4 = 0;
        cVar3 = FUN_1002ad170(*(long *)(param_1 + 0x38),0,uVar6,iVar11);
        if (cVar3 == '\0') {
          do {
            uVar4 = uVar4 + 1;
            if (uVar1 <= uVar4) goto LAB_10035e084;
            cVar3 = FUN_1002ad170(*(undefined8 *)(param_1 + 0x38),uVar4,uVar6,iVar11);
          } while (cVar3 == '\0');
          if (uVar4 == 0xffffffff) goto LAB_10035e084;
        }
        local_d8 = 1;
        local_c8 = 0;
        local_d4 = 0;
        local_d0 = 0x8e;
        local_70 = *(undefined4 *)(param_2 + 8);
        local_6c = *(undefined4 *)(param_2 + 0xc);
        local_68 = *(undefined4 *)(param_2 + 0x10);
        local_64 = *(undefined4 *)(*(long *)(param_2 + 0x28) + 4 + uVar8 * 0xc);
        local_60 = (ulong)*(uint *)(*(long *)(param_2 + 0x28) + uVar8 * 0xc) +
                   *(long *)(*(long *)(param_1 + 0x38) + 0x920);
        uVar6 = FUN_10032dee0(param_2,uVar5);
        FUN_10035f8d0(param_1,param_2,uVar6,0,&local_70,param_3,param_3,1,0,uVar4,&local_d8);
        goto LAB_10035e0aa;
      }
    }
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    lVar7 = 0;
    if (*(long **)(param_2 + 0x48) != plVar2) {
      lVar7 = *plVar2;
    }
    if ((*param_3 == 0) && (param_3[1] == 0)) {
      uVar1 = *(uint *)(param_2 + 0xc) >> (bVar10 & 0x1f);
      if (*(uint *)(param_2 + 0xc) >> (bVar10 & 0x1f) == 0) {
        uVar1 = 1;
      }
      if (param_3[2] != uVar1) goto LAB_10035de32;
      uVar1 = 1;
      if (*(uint *)(param_2 + 0x10) >> (bVar10 & 0x1f) != 0) {
        uVar1 = *(uint *)(param_2 + 0x10) >> (bVar10 & 0x1f);
      }
      if (param_3[3] != uVar1) goto LAB_10035de32;
    }
    else {
LAB_10035de32:
      if ((*(uint *)(*(long *)(lVar7 + 0x88) + uVar8 * 4) >> (param_5 & 0x1f) & 1) == 0) {
        (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
                  (*(long **)(param_1 + 0x20),param_2,0,uVar8,1,param_5,&local_58);
        param_6 = param_6 & 0xffffffff;
      }
    }
    if (uVar5 == (uint)param_6) {
      puVar9 = &local_74;
    }
    else {
      puVar9 = local_48;
      FUN_10038e7c0(param_6 & 0xffffffff,&local_74,uVar12,puVar9,0x10);
      param_6 = uVar12;
    }
    FUN_10038e7c0(param_6 & 0xffffffff,puVar9,0x39,&local_58,0x10);
    cVar3 = FUN_10038e270(uVar12);
    if (cVar3 == '\0') {
      cVar3 = FUN_10038e2b0(uVar12);
      if (cVar3 != '\0') goto LAB_10035dee3;
    }
    else {
      local_58 = CONCAT44(0x3f800000,(undefined4)local_58);
LAB_10035dee3:
      uStack_50 = 0x3f8000003f800000;
    }
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
              (*(long **)(param_1 + 0x20),param_2,param_3,uVar8,1,param_5,&local_58);
    uVar5 = FUN_10032df40(param_2,uVar8,param_5);
    if (param_2 != 0) goto LAB_10035df3d;
  }
LAB_10035e084:
  uVar5 = 1 << ((byte)param_4 & 0x1f);
  if ((*(ushort *)(param_2 + 0xb0) & 1) != 0) {
    uVar5 = 1;
  }
  *(uint *)(param_2 + 0xa8) = *(uint *)(param_2 + 0xa8) | uVar5;
LAB_10035e0aa:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

