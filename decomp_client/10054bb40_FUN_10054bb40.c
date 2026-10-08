
void FUN_10054bb40(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [24];
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  QVariant local_38;
  undefined1 local_21;
  
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)
             QString::fromAscii_helper("User Preferences/Network/Current network",0x28);
  QVariant::QVariant(&local_60,0);
  QSettings::value((QString *)&local_38,&local_48);
  uVar1 = QVariant::toInt((bool *)&local_38);
  QVariant::~QVariant(&local_38);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10054bbe0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10054bbe0:
  QSettings::~QSettings((QSettings *)&local_48);
  plVar2 = *(long **)(*(long *)(param_1 + 0x48) + 0x28);
  local_90 = 0xffffffff;
  local_8c = 0xffffffff;
  local_80 = 0;
  local_88 = 0;
  (**(code **)(*plVar2 + 0x60))(local_78,plVar2,uVar1,0,&local_90);
  plVar2 = (long *)QAbstractItemView::selectionModel();
  (**(code **)(*plVar2 + 0x60))(plVar2,local_78,0x32);
  return;
}

