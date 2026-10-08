
undefined8 * FUN_1000bde90(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  uint *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 local_40 [8];
  uint *local_38;
  undefined1 local_29;
  
  puVar4 = (uint *)*param_2;
  if (1 < *puVar4) {
    FUN_1000bfda0(param_2,puVar4[1]);
    puVar4 = (uint *)*param_2;
  }
  puVar2 = *(undefined8 **)(puVar4 + (long)(int)puVar4[2] * 2 + 4);
  piVar3 = (int *)*puVar2;
  *param_1 = piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    local_29 = *piVar3 != 0;
    UNLOCK();
  }
  piVar3 = (int *)puVar2[1];
  param_1[1] = piVar3;
  if (*piVar3 != -1) {
    if (*piVar3 == 0) {
      QListData::detach((int)(param_1 + 1));
      lVar5 = param_1[1];
      iVar1 = *(int *)(lVar5 + 8);
      if (iVar1 != *(int *)(lVar5 + 0xc)) {
        puVar6 = (undefined8 *)(puVar2[1] + 0x10 + (long)*(int *)(puVar2[1] + 8) * 8);
        puVar7 = (undefined8 *)(lVar5 + 0x10 + (long)iVar1 * 8);
        lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar3 = (int *)*puVar6;
          *puVar7 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_29 = *piVar3 != 0;
            UNLOCK();
          }
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_29 = *piVar3 != 0;
      UNLOCK();
    }
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar2 + 2);
  local_38 = (uint *)*param_2;
  if (1 < *local_38) {
    FUN_1000bfda0(param_2,local_38[1]);
    local_38 = (uint *)*param_2;
  }
  local_38 = local_38 + (long)(int)local_38[2] * 2 + 4;
  FUN_1000bfe50(local_40,param_2,&local_38);
  return param_1;
}

