
void FUN_100531ea0(long param_1)

{
  code *pcVar1;
  QList *pQVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined4 local_c4;
  Data *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [24];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  QSettings::QSettings((QSettings *)&local_58,(QObject *)0x0);
  local_60 = (QArrayData *)
             QString::fromAscii_helper("Application preferences/ShortcutPageLastSelectedItem",0x34);
  QVariant::QVariant(&local_70,0);
  QSettings::value((QString *)&local_48,&local_58);
  iVar3 = QVariant::toInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100531f47;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100531f47:
  QSettings::~QSettings((QSettings *)&local_58);
  plVar5 = (long *)QAbstractItemView::model();
  local_88 = 0xffffffff;
  local_84 = 0xffffffff;
  local_78 = 0;
  local_80 = 0;
  iVar4 = (**(code **)(*plVar5 + 0x78))(plVar5,&local_88);
  if (iVar4 <= iVar3) {
    iVar3 = 0;
  }
  plVar5 = (long *)QAbstractItemView::selectionModel();
  pcVar1 = *(code **)(*plVar5 + 0x60);
  plVar6 = (long *)QAbstractItemView::model();
  local_b8 = 0xffffffff;
  local_b4 = 0xffffffff;
  local_a8 = 0;
  local_b0 = 0;
  (**(code **)(*plVar6 + 0x60))(local_a0,plVar6,iVar3,0,&local_b8);
  (*pcVar1)(plVar5,local_a0,0x22);
  pQVar2 = *(QList **)(*(long *)(param_1 + 0x18) + 8);
  local_c0 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100129840(&local_c0,&DAT_100e1efe0);
  local_c4 = 0x14f;
  FUN_100129840(&local_c0,&local_c4);
  QSplitter::setSizes(pQVar2);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      UNLOCK();
      if (*(int *)local_c0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_c0);
  }
  return;
}

