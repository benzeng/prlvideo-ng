
undefined8 FUN_1003b5310(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long local_60;
  long *local_58;
  long *local_50;
  long local_48;
  long *local_40;
  long *local_38;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    for (puVar2 = *(undefined8 **)(param_1 + 0x28); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      *(undefined4 *)(puVar2 + 1) = 0;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    ___bzero(param_1 + 0x30,0x8000);
    lVar8 = *(long *)(param_1 + 0x8038);
    if (lVar8 != *(long *)(param_1 + 0x8030)) {
      *(ulong *)(param_1 + 0x8038) =
           (~((lVar8 + -8) - *(long *)(param_1 + 0x8030)) & 0xfffffffffffffff8U) + lVar8;
    }
  }
  *(long *)(param_1 + 0x18) = param_2;
  local_48 = 0;
  local_60 = 0;
  local_58 = &local_60;
  lVar8 = **(long **)(param_2 + 0xf0);
  local_50 = local_58;
  local_40 = &local_48;
  local_38 = &local_48;
  if (lVar8 != 0) {
    do {
      uVar5 = *(uint *)(lVar8 + 0x48);
      if (uVar5 != 0) {
        lVar6 = 0;
        uVar7 = 0;
        do {
          lVar1 = *(long *)(lVar8 + 0x40);
          if (((*(byte *)(lVar1 + 0x39 + lVar6) & 1) != 0) ||
             ((*(byte *)(lVar1 + 0x35 + lVar6) & 1) == 0)) {
            FUN_1003b5680(param_1,lVar1 + lVar6);
            uVar5 = *(uint *)(lVar8 + 0x48);
          }
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x40;
        } while (uVar7 < uVar5);
      }
      if (*(short *)(lVar8 + 0x4c) == 1) {
        *(long **)(lVar8 + 0x20) = &local_48;
        *(long **)(lVar8 + 0x28) = local_38;
        local_38[1] = lVar8 + 0x18;
        local_38 = (long *)(lVar8 + 0x18);
      }
      else if ((**(long **)(lVar8 + 8) != 0) &&
              (*(int *)(lVar8 + 0x34) == *(int *)(**(long **)(lVar8 + 8) + 0x34))) {
        *(long **)(lVar8 + 0x20) = &local_60;
        *(long **)(lVar8 + 0x28) = local_50;
        local_50[1] = lVar8 + 0x18;
        local_50 = (long *)(lVar8 + 0x18);
      }
      lVar8 = **(long **)(lVar8 + 8);
    } while (lVar8 != 0);
    param_2 = *(long *)(param_1 + 0x18);
  }
  FUN_1003b58b0(param_1,*(undefined8 *)(param_2 + 0x10));
  FUN_1003b58b0(param_1,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18));
  plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x108);
  while (lVar8 = *plVar3, lVar8 != 0) {
    FUN_1003ab6c0(lVar8);
    plVar3 = *(long **)(lVar8 + 8);
  }
  while (local_40 != &local_48) {
    lVar8 = *local_40;
    plVar3 = (long *)(lVar8 + 0x18);
    lVar6 = *(long *)(lVar8 + 0x28);
    *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar8 + 0x20);
    *(long *)(*(long *)(lVar8 + 0x20) + 0x10) = lVar6;
    *(long **)(lVar8 + 0x20) = plVar3;
    *(long **)(lVar8 + 0x28) = plVar3;
    if ((**(long **)(lVar8 + 8) != 0) &&
       (*(int *)(lVar8 + 0x34) == *(int *)(**(long **)(lVar8 + 8) + 0x34))) {
      *(long **)(lVar8 + 0x20) = &local_60;
      *(long **)(lVar8 + 0x28) = local_50;
      local_50[1] = (long)plVar3;
      local_50 = plVar3;
    }
    lVar8 = *(long *)(lVar8 + 0x40);
    lVar6 = *(long *)(lVar8 + 8);
    if ((((lVar6 != *(long *)(lVar8 + 0x48)) || (lVar6 != *(long *)(lVar8 + 0x88))) &&
        (*(byte *)(lVar6 + 0x7c) < 8)) &&
       ((*(byte *)(*(long *)(lVar8 + 0x48) + 0x7c) < 8 &&
        (*(byte *)(*(long *)(lVar8 + 0x88) + 0x7c) < 8)))) {
      FUN_1003c4bd0(param_1,lVar8,lVar8 + 0x40);
      FUN_1003c4bd0(param_1,lVar8,lVar8 + 0x80);
      FUN_1003ab6c0(*(undefined8 *)(lVar8 + 8));
    }
  }
  while (local_58 != &local_60) {
    lVar8 = *local_58;
    lVar6 = *(long *)(lVar8 + 0x28);
    *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar8 + 0x20);
    *(long *)(*(long *)(lVar8 + 0x20) + 0x10) = lVar6;
    *(long *)(lVar8 + 0x20) = lVar8 + 0x18;
    *(long *)(lVar8 + 0x28) = lVar8 + 0x18;
    FUN_1003b5a00(param_1);
  }
  lVar8 = *(long *)(param_1 + 0x18);
  lVar6 = **(long **)(lVar8 + 0x108);
  if (lVar6 != 0) {
    iVar4 = 0;
    do {
      *(int *)(lVar6 + 0x78) = iVar4;
      uVar5 = *(byte *)(lVar6 + 0x7c) - 1;
      if ((7 < uVar5) || ((0x8bU >> (uVar5 & 0x1f) & 1) == 0)) {
        *(long *)(lVar6 + 0x38) = lVar8 + 0x130;
        *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(lVar8 + 0x140);
        *(long *)(*(long *)(lVar8 + 0x140) + 8) = lVar6 + 0x30;
        *(long *)(lVar8 + 0x140) = lVar6 + 0x30;
      }
      iVar4 = iVar4 + 1;
      lVar6 = **(long **)(lVar6 + 8);
    } while (lVar6 != 0);
  }
  FUN_1003b5d40(param_1);
  return 0;
}

