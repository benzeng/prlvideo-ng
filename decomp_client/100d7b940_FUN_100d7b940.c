
undefined8 * FUN_100d7b940(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  int *local_60;
  int *local_58;
  int *local_50;
  undefined4 local_48;
  undefined *local_40;
  int *local_38;
  undefined1 local_29;
  
  puVar5 = PTR_shared_null_1021e1288;
  local_40 = PTR_shared_null_1021e1288;
  FUN_100d79ef0(&local_38,&local_40);
  if (*(int *)puVar5 != -1) {
    if (*(int *)puVar5 != 0) {
      LOCK();
      *(int *)puVar5 = *(int *)puVar5 + -1;
      local_29 = *(int *)puVar5 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d7b99d;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100d7b99d:
  FUN_100d7ce80(&local_60,&local_38);
  iVar1 = local_60[2];
  local_58 = local_60 + (long)iVar1 * 2 + 4;
  iVar2 = local_60[3];
  local_50 = local_60 + (long)iVar2 * 2 + 4;
  iVar7 = 2;
  if (iVar1 != iVar2) {
    lVar6 = (long)iVar1 << 3;
    do {
      lVar3 = *(long *)((long)local_60 + lVar6 + 0x10);
      if (*(int *)(lVar3 + 4) == param_2) {
        piVar4 = *(int **)(lVar3 + 8);
        *param_1 = piVar4;
        iVar7 = 1;
        if (1 < *piVar4 + 1U) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          local_29 = *piVar4 != 0;
          UNLOCK();
        }
        break;
      }
      local_58 = (int *)((long)local_60 + lVar6 + 0x18);
      lVar6 = lVar6 + 8;
    } while ((long)iVar2 * 8 != lVar6);
  }
  local_48 = 1;
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      local_29 = *local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d7ba5d;
    }
    FUN_100d7c9e0(&local_60,local_60);
  }
LAB_100d7ba5d:
  if (iVar7 == 2) {
    *param_1 = puVar5;
  }
  if (*local_38 != -1) {
    if (*local_38 != 0) {
      LOCK();
      *local_38 = *local_38 + -1;
      UNLOCK();
      if (*local_38 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    FUN_100d7c9e0(&local_38,local_38);
  }
  return param_1;
}

