
void FUN_100132ec0(int param_1)

{
  uint uVar1;
  QVariant *pQVar2;
  QVariant local_78;
  QVariant local_68;
  Data_conflict local_58;
  undefined4 local_50;
  Data_conflict local_48;
  QIcon local_40 [15];
  undefined1 local_31;
  
  pQVar2 = (QVariant *)0x0;
  do {
    FUN_10010ce40(&local_48,pQVar2);
    local_50 = 0x80000000;
    local_58.field7 = 0;
    uVar1 = QComboBox::count();
    QIcon::QIcon(local_40);
    QComboBox::insertItem(param_1,(QIcon *)(ulong)uVar1,(QString *)local_40,(QVariant *)&local_48);
    QIcon::~QIcon(local_40);
    QVariant::~QVariant((QVariant *)&local_58);
    if (*(int *)local_48.field15 != -1) {
      if (*(int *)local_48.field15 != 0) {
        LOCK();
        *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
        local_31 = *(int *)local_48.field15 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100132f74;
      }
      QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
    }
LAB_100132f74:
    QVariant::QVariant(&local_68,(uint)pQVar2);
    QComboBox::setItemData(param_1,pQVar2,(int)&local_68);
    QVariant::~QVariant(&local_68);
    QVariant::QVariant(&local_78,0);
    QComboBox::setItemData(param_1,pQVar2,(int)&local_78);
    QVariant::~QVariant(&local_78);
    uVar1 = (uint)pQVar2 + 1;
    pQVar2 = (QVariant *)(ulong)uVar1;
    if (3 < uVar1) {
      return;
    }
  } while( true );
}

