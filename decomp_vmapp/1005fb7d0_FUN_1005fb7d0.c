
undefined8 * FUN_1005fb7d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 *puVar4;
  Data *pDVar5;
  Data *pDVar6;
  long lVar7;
  Data *local_40;
  undefined1 local_31;
  
  param_1[5] = param_2[5];
  param_1[4] = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = param_2[2];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (param_1[6] != param_2[6]) {
    FUN_1005fc5e0(&local_40,param_2 + 6);
    pDVar5 = (Data *)param_1[6];
    param_1[6] = local_40;
    local_40 = pDVar5;
    if (*(int *)pDVar5 != -1) {
      if (*(int *)pDVar5 != 0) {
        LOCK();
        *(int *)pDVar5 = *(int *)pDVar5 + -1;
        local_31 = *(int *)pDVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005fb8af;
      }
      iVar1 = *(int *)(pDVar5 + 0xc);
      if (iVar1 != *(int *)(pDVar5 + 8)) {
        lVar7 = (long)*(int *)(pDVar5 + 8) * 8 + (long)iVar1 * -8;
        pDVar6 = pDVar5 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar6 != (void *)0x0) {
            operator_delete(*(void **)pDVar6);
          }
          pDVar6 = pDVar6 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose(pDVar5);
    }
  }
LAB_1005fb8af:
  if (param_1[7] != param_2[7]) {
    FUN_1005fc5e0(&local_40,param_2 + 7);
    pDVar5 = (Data *)param_1[7];
    param_1[7] = local_40;
    if (*(int *)pDVar5 != -1) {
      if (*(int *)pDVar5 != 0) {
        LOCK();
        *(int *)pDVar5 = *(int *)pDVar5 + -1;
        local_31 = *(int *)pDVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005fb93f;
      }
      iVar1 = *(int *)(pDVar5 + 0xc);
      local_40 = pDVar5;
      if (iVar1 != *(int *)(pDVar5 + 8)) {
        lVar7 = (long)*(int *)(pDVar5 + 8) * 8 + (long)iVar1 * -8;
        pDVar6 = pDVar5 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar6 != (void *)0x0) {
            operator_delete(*(void **)pDVar6);
          }
          pDVar6 = pDVar6 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose(pDVar5);
    }
  }
LAB_1005fb93f:
  local_40 = (Data *)param_2[8];
  if ((Data *)param_1[8] != local_40) {
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 == 0) {
        QListData::detach((int)&local_40);
        iVar1 = *(int *)(local_40 + 8);
        if (iVar1 != *(int *)(local_40 + 0xc)) {
          puVar4 = (undefined8 *)(param_2[8] + 0x10 + (long)*(int *)(param_2[8] + 8) * 8);
          pDVar5 = local_40 + ((long)iVar1 * 2 + 4) * 4;
          lVar7 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar1 * -8;
          do {
            piVar3 = (int *)*puVar4;
            *(int **)pDVar5 = piVar3;
            if (1 < *piVar3 + 1U) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              local_31 = *piVar3 != 0;
              UNLOCK();
            }
            pDVar5 = pDVar5 + 8;
            puVar4 = puVar4 + 1;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
    }
    pDVar5 = (Data *)param_1[8];
    param_1[8] = local_40;
    local_40 = pDVar5;
    FUN_100013180(&local_40);
  }
  local_40 = (Data *)param_2[9];
  if ((Data *)param_1[9] != local_40) {
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 == 0) {
        QListData::detach((int)&local_40);
        iVar1 = *(int *)(local_40 + 8);
        if (iVar1 != *(int *)(local_40 + 0xc)) {
          puVar4 = (undefined8 *)(param_2[9] + 0x10 + (long)*(int *)(param_2[9] + 8) * 8);
          pDVar5 = local_40 + ((long)iVar1 * 2 + 4) * 4;
          lVar7 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar1 * -8;
          do {
            piVar3 = (int *)*puVar4;
            *(int **)pDVar5 = piVar3;
            if (1 < *piVar3 + 1U) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              local_31 = *piVar3 != 0;
              UNLOCK();
            }
            pDVar5 = pDVar5 + 8;
            puVar4 = puVar4 + 1;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
    }
    pDVar5 = (Data *)param_1[9];
    param_1[9] = local_40;
    local_40 = pDVar5;
    FUN_100013180(&local_40);
  }
  return param_1;
}

