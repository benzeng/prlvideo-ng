
void FUN_10043ae80(int param_1,long *param_2)

{
  code *pcVar1;
  QVariant local_88;
  QVariant local_78;
  QArrayData *local_68;
  QVariant local_60;
  Data_conflict local_50;
  Data_conflict local_48;
  uint local_40;
  QVariant local_38;
  undefined1 local_21;
  
  local_40 = 0x80000000;
  local_48.field7 = 0;
  QComboBox::currentIndex();
  QComboBox::itemData((int)&local_60,param_1);
  local_50.field7 = QVariant::toLongLong((bool *)&local_60);
  if ((local_40 & 0x40000000) == 0) {
    if ((local_40 & 0x3ffffff8) < 8) {
      local_40 = 4;
      local_48.field7 = local_50.field7;
    }
    else {
LAB_10043af0e:
      QVariant::QVariant(&local_38,4,&local_50,0);
      QVariant::operator=((QVariant *)&local_48,&local_38);
      QVariant::~QVariant(&local_38);
    }
  }
  else {
    if ((7 < (local_40 & 0x3ffffff8)) || (*(int *)(local_48.field7 + 8) != 1)) goto LAB_10043af0e;
    local_40 = local_40 & 0x40000000 | 4;
    (*(Data_conflict **)local_48.field15)->field7 = (long_long)local_50;
  }
  QVariant::~QVariant(&local_60);
  pcVar1 = *(code **)(*param_2 + 0x88);
  QObject::property((char *)&local_78);
  QVariant::toString();
  QVariant::QVariant(&local_88,(QVariant *)&local_48);
  (*pcVar1)(param_2,&local_68,&local_88,0);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10043afc3;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10043afc3:
  QVariant::~QVariant(&local_78);
  QVariant::~QVariant((QVariant *)&local_48);
  return;
}

