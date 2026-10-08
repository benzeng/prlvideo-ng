
undefined1 FUN_100a3f2f0(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long local_50;
  uint *local_48;
  uint *local_40;
  undefined1 local_31;
  
  puVar3 = (uint *)*param_1;
  uVar6 = puVar3[2];
  lVar4 = (long)(int)(puVar3[3] - uVar6) + 1;
  lVar5 = (long)(int)((puVar3[3] - 1) - uVar6) + 1;
  do {
    lVar4 = lVar4 + -1;
    if (lVar4 < 1) goto LAB_100a3f37e;
    lVar1 = lVar5 * 2;
    lVar5 = lVar5 + -1;
  } while (**(long **)(puVar3 + (long)(int)uVar6 * 2 + lVar1 + 2) != param_2);
  if (0 < (int)lVar4) {
    if (1 < *puVar3) {
      FUN_100a3f750(param_1,puVar3[1]);
      puVar3 = (uint *)*param_1;
      uVar6 = puVar3[2];
    }
    FUN_100a3fad0(*(long *)(puVar3 + ((int)uVar6 + lVar5) * 2 + 4) + 8,param_3);
    return 0;
  }
LAB_100a3f37e:
  local_48 = (uint *)PTR_shared_null_1021e15e8;
  puVar3 = (uint *)PTR_shared_null_1021e15e8;
  local_50 = param_2;
  if ((undefined *)*param_3 != PTR_shared_null_1021e15e8) {
    FUN_100a3f920(&local_40,param_3);
    puVar3 = local_40;
    puVar2 = PTR_shared_null_1021e15e8;
    local_40 = (uint *)PTR_shared_null_1021e15e8;
    local_48 = puVar3;
    if (*(int *)PTR_shared_null_1021e15e8 != -1) {
      if (*(int *)PTR_shared_null_1021e15e8 != 0) {
        LOCK();
        *(int *)PTR_shared_null_1021e15e8 = *(int *)PTR_shared_null_1021e15e8 + -1;
        local_31 = *(int *)puVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a3f3ea;
      }
      FUN_100a3fda0(&local_40,puVar2);
    }
  }
LAB_100a3f3ea:
  FUN_100a3f640(param_1,&local_50);
  if (*puVar3 != 0xffffffff) {
    if (*puVar3 != 0) {
      LOCK();
      *puVar3 = *puVar3 - 1;
      UNLOCK();
      local_40 = (uint *)CONCAT71(local_40._1_7_,*puVar3 != 0);
      if (*puVar3 != 0) {
        return 1;
      }
    }
    FUN_100a3fda0(&local_48,puVar3);
  }
  return 1;
}

