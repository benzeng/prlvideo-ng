
void FUN_100636c60(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  QModelIndex *pQVar4;
  long *plVar5;
  long lVar6;
  Data *pDVar7;
  QVariant local_70;
  QString local_60;
  int *local_58;
  Data *local_50;
  int *local_48;
  QString local_40;
  undefined1 local_31;
  
  QString::fromUtf8_helper((char *)&local_40,0x1e41978);
  QString::operator=((QString *)(param_1 + 0x68),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100636cc9;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100636cc9:
  QAbstractItemView::selectionModel();
  QItemSelectionModel::selection();
  iVar1 = local_48[3];
  iVar2 = local_48[2];
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      local_31 = *local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100636d14;
    }
    FUN_100533ef0(&local_48,local_48);
  }
LAB_100636d14:
  if (iVar1 <= iVar2) goto LAB_100636e83;
  QAbstractItemView::model();
  pQVar4 = (QModelIndex *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e13f8);
  QAbstractItemView::selectionModel();
  QItemSelectionModel::selection();
  QItemSelection::indexes();
  plVar5 = (long *)QStandardItemModel::itemFromIndex(pQVar4);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100636df3;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar6 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_50 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar7 != (void *)0x0) {
          operator_delete(*(void **)pDVar7);
        }
        pDVar7 = pDVar7 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_50);
  }
LAB_100636df3:
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_31 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100636e1d;
    }
    FUN_100533ef0(&local_58,local_58);
  }
LAB_100636e1d:
  (**(code **)(*plVar5 + 0x10))(&local_70,plVar5,0x102);
  QVariant::toString();
  QString::operator=((QString *)(param_1 + 0x68),&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100636e7a;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100636e7a:
  QVariant::~QVariant(&local_70);
LAB_100636e83:
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40);
  if (0 < *(int *)(*(long *)(param_1 + 0x68) + 4)) {
    QAbstractButton::isChecked();
  }
  QWidget::setEnabled(SUB81(uVar3,0));
  return;
}

