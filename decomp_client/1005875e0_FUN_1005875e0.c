
void FUN_1005875e0(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  QVariant local_60;
  QKeySequence local_50 [8];
  Data_conflict local_48;
  QString local_40;
  undefined1 local_31;
  
  uVar1 = QComboBox::count();
  QKeySequence::QKeySequence(local_50,param_2,0,0,0);
  FUN_1007170a0(&local_48,local_50,param_3);
  QVariant::QVariant(&local_60,param_2);
  QIcon::QIcon((QIcon *)&local_40);
  QComboBox::insertItem(param_1,(QIcon *)(ulong)uVar1,&local_40,(QVariant *)&local_48);
  QIcon::~QIcon((QIcon *)&local_40);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_48.field15 != -1) {
    if (*(int *)local_48.field15 != 0) {
      LOCK();
      *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
      local_31 = *(int *)local_48.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100587692;
    }
    QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
  }
LAB_100587692:
  QKeySequence::~QKeySequence(local_50);
  return;
}

