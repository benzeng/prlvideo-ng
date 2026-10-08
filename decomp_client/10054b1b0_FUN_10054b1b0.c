
void FUN_10054b1b0(long param_1)

{
  int iVar1;
  CVirtualNetwork *pCVar2;
  long lVar3;
  void *pvVar4;
  Data *pDVar5;
  undefined8 uVar6;
  long lVar7;
  CVirtualNetwork local_128 [216];
  Data *local_50;
  long local_48;
  long local_40;
  Data *local_38;
  undefined1 local_29;
  
  QAbstractItemView::selectionModel();
  QItemSelectionModel::selectedIndexes();
  if (*(int *)(local_38 + 0xc) == *(int *)(local_38 + 8)) goto LAB_10054b31a;
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
  pCVar2 = *(CVirtualNetwork **)
            (lVar7 + 0x10 +
            ((long)*(int *)(lVar7 + 8) +
            (long)**(int **)(local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10)) * 8);
  if (pCVar2 == (CVirtualNetwork *)0x0) goto LAB_10054b31a;
  *(int *)(param_1 + 0x38) = **(int **)(local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10);
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),0));
  pvVar4 = operator_new(0x50);
  local_40 = 0;
  local_48 = 0;
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
  lVar3 = *(long *)(lVar7 + 0x38);
  uVar6 = 0;
  if ((lVar3 != 0) && (uVar6 = 0, *(int *)(lVar3 + 4) != 0)) {
    uVar6 = *(undefined8 *)(lVar7 + 0x40);
  }
  FUN_1001f41a0(pvVar4,&local_40,&local_48,&local_50,uVar6,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10054b2c3;
    }
    QListData::dispose(local_50);
  }
LAB_10054b2c3:
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  CVirtualNetwork::CVirtualNetwork(local_128,pCVar2);
  FUN_1001f42d0(pvVar4,local_128,7);
  CVirtualNetwork::~CVirtualNetwork(local_128);
  CAbstractTask::execute();
LAB_10054b31a:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar7 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_38 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar5 != (void *)0x0) {
          operator_delete(*(void **)pDVar5);
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_38);
  }
  return;
}

