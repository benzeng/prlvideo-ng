
undefined8 FUN_100433950(QModelIndex *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  bool bVar5;
  Data *pDVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  if ((int)(param_3 | param_2) < 0) {
    uVar7 = 0;
  }
  else if (*(int *)(**(long **)(param_1 + 0x10) + 0xc) - *(int *)(**(long **)(param_1 + 0x10) + 8) <
           (int)(param_3 + param_2)) {
    uVar7 = 0;
  }
  else {
    iVar10 = (param_3 - 1) + param_2;
    QAbstractItemModel::beginRemoveRows(param_1,param_4,param_2);
    if (0 < (int)param_3) {
      do {
        if (-1 < (int)param_2) {
          plVar2 = *(long **)(param_1 + 0x10);
          puVar3 = (uint *)*plVar2;
          uVar1 = puVar3[2];
          if ((int)param_2 < (int)(puVar3[3] - uVar1)) {
            if (1 < *puVar3) {
              pDVar6 = (Data *)QListData::detach((int)plVar2);
              lVar4 = *plVar2;
              lVar8 = (long)*(int *)(lVar4 + 8);
              if ((puVar3 + (long)(int)uVar1 * 2 != (uint *)(lVar4 + lVar8 * 8)) &&
                 (lVar9 = *(int *)(lVar4 + 0xc) - lVar8,
                 lVar9 != 0 && lVar8 <= *(int *)(lVar4 + 0xc))) {
                _memcpy((void *)(lVar4 + 0x10 + lVar8 * 8),puVar3 + (long)(int)uVar1 * 2 + 4,
                        lVar9 * 8);
              }
              if (*(int *)pDVar6 != -1) {
                if (*(int *)pDVar6 != 0) {
                  LOCK();
                  *(int *)pDVar6 = *(int *)pDVar6 + -1;
                  UNLOCK();
                  if (*(int *)pDVar6 != 0) goto LAB_100433a60;
                }
                QListData::dispose(pDVar6);
              }
            }
LAB_100433a60:
            QListData::remove((int)plVar2);
          }
        }
        bVar5 = (int)param_2 < iVar10;
        param_2 = param_2 + 1;
      } while (bVar5);
    }
    QAbstractItemModel::endRemoveRows();
    uVar7 = 1;
  }
  return uVar7;
}

