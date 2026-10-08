
void FUN_1005559d0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  Data *pDVar10;
  long local_70;
  undefined1 local_68 [24];
  int *local_50;
  Data *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 < 0) {
    return;
  }
  puVar7 = *(uint **)(param_1 + 0x60);
  uVar6 = puVar7[2];
  if ((int)(puVar7[3] - uVar6) <= param_2) {
    return;
  }
  if (1 < *puVar7) {
    FUN_10055a380((undefined8 *)(param_1 + 0x60),puVar7[1]);
    puVar7 = *(uint **)(param_1 + 0x60);
    uVar6 = puVar7[2];
  }
  lVar2 = *(long *)(puVar7 + ((long)param_2 + (long)(int)uVar6) * 2 + 4);
  cVar4 = FUN_100714de0(lVar2);
  if (cVar4 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Profile for vm %s not found.",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) {
      return;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
    return;
  }
  local_70 = 0;
  if (*(long *)(param_1 + 0x30) != lVar2) goto LAB_100555bd8;
  QAbstractItemView::selectionModel();
  QItemSelectionModel::selection();
  QItemSelection::indexes();
  if (*local_50 != -1) {
    if (*local_50 != 0) {
      LOCK();
      *local_50 = *local_50 + -1;
      local_31 = *local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100555a9d;
    }
    FUN_100533ef0(&local_50,local_50);
  }
LAB_100555a9d:
  uVar6 = *(uint *)(local_48 + 8);
  local_70 = 0;
  if (*(uint *)(local_48 + 0xc) != uVar6) {
    if (1 < *(uint *)local_48) {
      FUN_100534020(&local_48,*(uint *)(local_48 + 4));
      uVar6 = *(uint *)(local_48 + 8);
    }
    local_70 = FUN_100552190(param_1 + 0x20,*(undefined8 *)(local_48 + (long)(int)uVar6 * 8 + 0x10))
    ;
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100555bd8;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar9 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pDVar10 = local_48 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar10 != (void *)0x0) {
          operator_delete(*(void **)pDVar10);
        }
        pDVar10 = pDVar10 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_48);
  }
LAB_100555bd8:
  uVar5 = FUN_1005a5f40(*(undefined8 *)(param_1 + 0x50));
  *(long *)(param_1 + 0x30) = lVar2;
  *(undefined1 *)(param_1 + 0x48) = uVar5;
  QAbstractItemModel::beginResetModel();
  QAbstractItemModel::endResetModel();
  if (local_70 == 0) {
    FUN_100554d00(param_1);
  }
  else {
    plVar8 = (long *)QAbstractItemView::selectionModel();
    pcVar3 = *(code **)(*plVar8 + 0x60);
    FUN_100552350(local_68,param_1 + 0x20,local_70);
    (*pcVar3)(plVar8,local_68,0x22);
  }
  return;
}

