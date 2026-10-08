
bool FUN_10013ba60(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  Data *local_30 [2];
  Data_conflict local_20 [2];
  
  bVar2 = false;
  QTreeWidget::findItems(local_30,param_1,param_2,0,3);
  if (*(int *)(local_30[0] + 0xc) != *(int *)(local_30[0] + 8)) {
    (**(code **)(**(long **)(local_30[0] + (long)*(int *)(local_30[0] + 8) * 8 + 0x10) + 0x18))
              (local_20,*(long **)(local_30[0] + (long)*(int *)(local_30[0] + 8) * 8 + 0x10),0,10);
    iVar1 = QVariant::toInt((bool *)&local_20[0].field0);
    QVariant::~QVariant((QVariant *)local_20);
    bVar2 = iVar1 == 2;
  }
  if (*(int *)local_30[0] != -1) {
    if (*(int *)local_30[0] != 0) {
      LOCK();
      *(int *)local_30[0] = *(int *)local_30[0] + -1;
      UNLOCK();
      if (*(int *)local_30[0] != 0) {
        return bVar2;
      }
      local_20[0]._0_1_ = '\0';
    }
    QListData::dispose(local_30[0]);
  }
  return bVar2;
}

