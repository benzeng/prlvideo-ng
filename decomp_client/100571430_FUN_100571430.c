
void FUN_100571430(long param_1)

{
  int iVar1;
  long lVar2;
  Data *pDVar3;
  Data *local_38;
  
  lVar2 = QAbstractItemView::selectionModel();
  if (lVar2 != 0) {
    QAbstractItemView::selectionModel();
    QItemSelectionModel::selectedIndexes();
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0xf0),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x100),0));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return;
        }
      }
      iVar1 = *(int *)(local_38 + 0xc);
      if (iVar1 != *(int *)(local_38 + 8)) {
        lVar2 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
        pDVar3 = local_38 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar3 != (void *)0x0) {
            operator_delete(*(void **)pDVar3);
          }
          pDVar3 = pDVar3 + -8;
          lVar2 = lVar2 + 8;
        } while (lVar2 != 0);
      }
      QListData::dispose(local_38);
    }
  }
  return;
}

