
void FUN_100538740(long param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  QVariant local_98;
  QString local_88;
  QVariant local_80;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  long local_40;
  undefined1 local_31;
  
  QVariant::toList();
  uVar2 = QVariant::toInt(*(bool **)(local_40 + 0x10 + (long)*(int *)(local_40 + 8) * 8));
  uVar3 = QVariant::toInt(*(bool **)(local_40 + 0x18 + (long)*(int *)(local_40 + 8) * 8));
  plVar4 = (long *)QAbstractItemView::model();
  local_70 = 0xffffffff;
  local_6c = 0xffffffff;
  local_60 = 0;
  local_68 = 0;
  (**(code **)(*plVar4 + 0x60))(local_58,plVar4,uVar2,uVar3,&local_70);
  if (param_3 == 1) goto LAB_1005388a6;
  pcVar1 = *(code **)(*plVar4 + 0x98);
  QMetaObject::tr((char *)&local_88,PTR_staticMetaObject_1021e1520,(int)PTR_s_Your_Mac_10226de28);
  QVariant::QVariant(&local_80,&local_88);
  (*pcVar1)(plVar4,local_58,&local_80,0);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100538864;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100538864:
  pcVar1 = *(code **)(*plVar4 + 0x98);
  QVariant::QVariant(&local_98,PTR_s_COMPUTER_FAKE_ID_1022710d8);
  (*pcVar1)(plVar4,local_58,&local_98,0x100);
  QVariant::~QVariant(&local_98);
LAB_1005388a6:
  lVar5 = QTreeWidget::currentItem();
  if (lVar5 != 0) {
    QTreeWidget::editItem(*(QTreeWidgetItem **)(*(long *)(param_1 + 0x48) + 0x78),(int)lVar5);
  }
  FUN_100035ea0(&local_40);
  return;
}

