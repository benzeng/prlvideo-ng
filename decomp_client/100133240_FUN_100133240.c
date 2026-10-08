
void FUN_100133240(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  QVariant local_78;
  QVariant local_68;
  Data_conflict local_58;
  undefined4 local_50;
  Data_conflict local_48;
  QIcon local_40 [15];
  undefined1 local_31;
  
  iVar2 = FUN_10010ec20(1);
  uVar1 = DAT_100e15294;
  if (iVar2 != 0) {
    uVar4 = 0;
    do {
      if (uVar1 != uVar4) {
        FUN_10010cf90(&local_48,uVar4);
        local_50 = 0x80000000;
        local_58.field7 = 0;
        uVar3 = QComboBox::count();
        QIcon::QIcon(local_40);
        QComboBox::insertItem
                  (param_1,(QIcon *)(ulong)uVar3,(QString *)local_40,(QVariant *)&local_48);
        QIcon::~QIcon(local_40);
        QVariant::~QVariant((QVariant *)&local_58);
        if (*(int *)local_48.field15 != -1) {
          if (*(int *)local_48.field15 != 0) {
            LOCK();
            *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
            local_31 = *(int *)local_48.field15 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100133315;
          }
          QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
        }
LAB_100133315:
        iVar2 = QComboBox::count();
        QVariant::QVariant(&local_68,uVar4);
        QComboBox::setItemData(param_1,(QVariant *)(ulong)(iVar2 - 1),(int)&local_68);
        QVariant::~QVariant(&local_68);
        iVar2 = QComboBox::count();
        QVariant::QVariant(&local_78,1);
        QComboBox::setItemData(param_1,(QVariant *)(ulong)(iVar2 - 1),(int)&local_78);
        QVariant::~QVariant(&local_78);
      }
      uVar4 = uVar4 + 1;
      uVar3 = FUN_10010ec20(1);
    } while (uVar4 < uVar3);
  }
  return;
}

