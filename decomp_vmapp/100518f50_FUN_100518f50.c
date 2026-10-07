
void FUN_100518f50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  QArrayData *pQVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  int *piVar7;
  bool bVar8;
  long lVar9;
  QArrayData *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  lVar9 = param_1 + 0x90;
  QMutex::lock();
  local_58 = *(int **)(param_1 + 0x88);
  if (*local_58 != -1) {
    if (*local_58 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = local_58[2];
      if (iVar1 != local_58[3]) {
        puVar6 = (undefined8 *)
                 (*(long *)(param_1 + 0x88) + 0x10 +
                 (long)*(int *)(*(long *)(param_1 + 0x88) + 8) * 8);
        piVar7 = local_58 + (long)iVar1 * 2 + 4;
        lVar4 = (long)local_58[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar6;
          *(int **)piVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          puVar6 = puVar6 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_58 = *local_58 + 1;
      local_31 = *local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  if (local_58[2] != local_58[3]) {
    do {
      pQVar3 = *(QArrayData **)local_50;
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      if (local_40 != 0) {
        if (1 < *(int *)pQVar3 + 1U) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + 1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
        }
        local_60 = pQVar3;
        FUN_100518d50(param_1,&local_60,param_2,param_3,param_5,param_6,lVar9);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005190b1;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_1005190b1:
        local_40 = 0;
      }
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005190e3;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_1005190e3:
      local_50 = local_50 + 2;
      uVar5 = local_40 ^ 1;
      bVar8 = local_40 != 1;
      local_40 = uVar5;
    } while ((bVar8) && (local_50 != local_48));
  }
  FUN_100037320(&local_58);
  QMutex::unlock();
  return;
}

