
void FUN_100580ff0(QWidget *param_1,QAbstractItemModel *param_2,QModelIndex *param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  QArrayData *local_40;
  
  lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15e0);
  if ((((lVar2 == 0) || (*param_4 < 0)) || (param_4[1] < 0)) || (*(long *)(param_4 + 4) == 0))
  goto LAB_100581075;
  QLineEdit::text();
  iVar1 = *(int *)(local_40 + 4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100581070;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100581070:
  if (iVar1 == 0) {
    return;
  }
LAB_100581075:
  QStyledItemDelegate::setModelData(param_1,param_2,param_3);
  return;
}

