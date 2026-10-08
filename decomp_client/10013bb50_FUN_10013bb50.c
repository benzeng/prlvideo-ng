
void FUN_10013bb50(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  code *pcVar2;
  Data *local_38;
  Data_conflict local_30 [3];
  
  QTreeWidget::findItems(&local_38,param_1,param_2,0,3);
  if (*(int *)(local_38 + 0xc) != *(int *)(local_38 + 8)) {
    plVar1 = *(long **)(local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10);
    pcVar2 = *(code **)(*plVar1 + 0x20);
    QVariant::QVariant((QVariant *)local_30,(param_3 & 0xff) * 2);
    (*pcVar2)(plVar1,0,10,local_30);
    QVariant::~QVariant((QVariant *)local_30);
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_30[0]._0_1_ = '\0';
    }
    QListData::dispose(local_38);
  }
  return;
}

