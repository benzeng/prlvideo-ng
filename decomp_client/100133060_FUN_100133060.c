
void FUN_100133060(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  QVariant local_78;
  QVariant local_68;
  Data_conflict local_58;
  undefined4 local_50;
  Data_conflict local_48;
  QIcon local_40 [15];
  undefined1 local_31;
  
  iVar1 = FUN_10010ec20(2);
  if (iVar1 != 0) {
    uVar3 = 0;
    do {
      FUN_10010cec0(&local_48,uVar3);
      local_50 = 0x80000000;
      local_58.field7 = 0;
      uVar2 = QComboBox::count();
      QIcon::QIcon(local_40);
      QComboBox::insertItem(param_1,(QIcon *)(ulong)uVar2,(QString *)local_40,(QVariant *)&local_48)
      ;
      QIcon::~QIcon(local_40);
      QVariant::~QVariant((QVariant *)&local_58);
      if (*(int *)local_48.field15 != -1) {
        if (*(int *)local_48.field15 != 0) {
          LOCK();
          *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
          local_31 = *(int *)local_48.field15 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10013311b;
        }
        QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
      }
LAB_10013311b:
      iVar1 = QComboBox::count();
      QVariant::QVariant(&local_68,uVar3);
      QComboBox::setItemData(param_1,(QVariant *)(ulong)(iVar1 - 1),(int)&local_68);
      QVariant::~QVariant(&local_68);
      iVar1 = QComboBox::count();
      QVariant::QVariant(&local_78,2);
      QComboBox::setItemData(param_1,(QVariant *)(ulong)(iVar1 - 1),(int)&local_78);
      QVariant::~QVariant(&local_78);
      uVar3 = uVar3 + 1;
      uVar2 = FUN_10010ec20(2);
    } while (uVar3 < uVar2);
  }
  return;
}

