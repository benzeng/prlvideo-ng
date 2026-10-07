
undefined1 FUN_100428920(long *param_1,undefined4 *param_2)

{
  char cVar1;
  kern_return_t kVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined1 uVar6;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_94;
  thread_act_array_t local_90;
  long *local_88;
  int local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  
  local_88 = param_1 + 1;
  local_80 = (int)param_1[2];
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  kVar2 = _task_threads(*(task_t *)(param_1 + 6),&local_90,&local_94);
  if (kVar2 == 0) {
    iVar4 = (local_94 - 1) + (uint)(*(int *)((long)param_1 + 0x34) == 0);
    local_38 = 3;
    cVar1 = FUN_100422630(&local_88,(long)iVar4 * 0x30 | 8);
    if (cVar1 == '\0') {
      uVar6 = 0;
    }
    else {
      *param_2 = 3;
      *(ulong *)(param_2 + 1) = CONCAT44(local_80,(undefined4)local_78);
      local_70 = CONCAT44(local_70._4_4_,iVar4);
      uVar6 = 1;
      if (local_94 != 0) {
        lVar5 = 0;
        iVar4 = 0;
        uVar3 = local_94;
        do {
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          if (local_90[lVar5] != *(thread_act_t *)((long)param_1 + 0x34)) {
            cVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_90[lVar5],&local_c8);
            if (cVar1 == '\0') {
              uVar6 = 0;
              break;
            }
            FUN_100422730(local_88,(iVar4 * 0x30 | 8U) + local_80,&local_c8,0x30);
            iVar4 = iVar4 + 1;
            uVar3 = local_94;
          }
          lVar5 = lVar5 + 1;
          uVar6 = 1;
        } while ((uint)lVar5 < uVar3);
      }
    }
  }
  else {
    uVar6 = 0;
  }
  if (local_38 != 2) {
    FUN_100422730(local_88,local_80,&local_70,8);
  }
  return uVar6;
}

