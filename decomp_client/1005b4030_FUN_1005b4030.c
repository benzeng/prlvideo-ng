
long * FUN_1005b4030(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined8 *puVar9;
  QArrayData *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  int *local_30;
  undefined1 local_21;
  
  lVar4 = FUN_1005b86c0(param_2);
  if (lVar4 == 0) {
    *param_1 = (long)PTR_shared_null_1021e15e8;
    return param_1;
  }
  local_30 = (int *)PTR_shared_null_1021e15e8;
  uVar5 = FUN_1005b86c0(param_2);
  lVar4 = FUN_10015a340(uVar5);
  plVar2 = *(long **)(lVar4 + 0x148);
  local_50 = (Data *)*plVar2;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_50);
      lVar6 = (long)*(int *)(local_50 + 8);
      lVar4 = *plVar2;
      if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_50 + lVar6 * 8) &&
         (lVar8 = *(int *)(local_50 + 0xc) - lVar6, lVar8 != 0 && lVar6 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar6 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      (**(code **)(**(long **)local_48 + 0xb8))(&local_58);
      FUN_1000341d0(&local_30,&local_58);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_21 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1005b416d;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1005b416d:
      local_48 = local_48 + 8;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b41ac;
    }
    QListData::dispose(local_50);
  }
LAB_1005b41ac:
  *param_1 = (long)local_30;
  if (*local_30 != -1) {
    if (*local_30 == 0) {
      QListData::detach((int)param_1);
      lVar4 = *param_1;
      iVar1 = *(int *)(lVar4 + 8);
      if (iVar1 != *(int *)(lVar4 + 0xc)) {
        piVar7 = local_30 + (long)local_30[2] * 2 + 4;
        puVar9 = (undefined8 *)(lVar4 + 0x10 + (long)iVar1 * 8);
        lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar3 = *(int **)piVar7;
          *puVar9 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_21 = *piVar3 != 0;
            UNLOCK();
          }
          puVar9 = puVar9 + 1;
          piVar7 = piVar7 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_30 = *local_30 + 1;
      local_21 = *local_30 != 0;
      UNLOCK();
    }
  }
  FUN_100039a80(&local_30);
  return param_1;
}

