
void FUN_100538180(QStringList *param_1,int *param_2)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 local_130 [40];
  int *local_108 [4];
  QVariant local_e8 [2];
  QVariant local_d0;
  QVariant local_c0;
  undefined *local_b0;
  QString local_a8;
  QVariant local_a0;
  QVariant local_90;
  QVariant local_80;
  QArrayData *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [31];
  undefined1 local_31;
  
  plVar5 = (long *)QAbstractItemView::model();
  local_68 = 0xffffffff;
  local_64 = 0xffffffff;
  local_58 = 0;
  local_60 = 0;
  uVar7 = 0;
  (**(code **)(*plVar5 + 0x60))(local_50,plVar5,*param_2,0,&local_68);
  lVar6 = *(long *)((long)param_1[6].field0_0x0.field1 + 0x38);
  if ((lVar6 != 0) && (uVar7 = 0, *(int *)(lVar6 + 4) != 0)) {
    uVar7 = *(undefined8 *)((long)param_1[6].field0_0x0.field1 + 0x40);
  }
  (**(code **)(*plVar5 + 0x90))(&local_80,plVar5,local_50,0x100);
  QVariant::toString();
  QVariant::~QVariant(&local_80);
  (**(code **)(*plVar5 + 0x90))(&local_90,plVar5,param_2,0);
  QMetaObject::tr((char *)&local_a8,PTR_staticMetaObject_1021e1520,(int)PTR_s_Your_Mac_10226de28);
  QVariant::QVariant(&local_a0,&local_a8);
  cVar2 = QVariant::cmp(&local_90);
  if (cVar2 == '\0') {
    cVar2 = FUN_1001b40c0(uVar7,&local_70);
    cVar3 = '\x01';
    if (cVar2 == '\0') {
      cVar3 = FUN_1001b4140(uVar7,&local_70);
    }
  }
  else {
    cVar3 = '\0';
  }
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005382ff;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_1005382ff:
  QVariant::~QVariant(&local_90);
  puVar1 = PTR_shared_null_1021e15e8;
  if (cVar3 == '\0') {
    lVar6 = QTreeWidget::currentItem();
    if (lVar6 != 0) {
      QTreeWidget::editItem
                (*(QTreeWidgetItem **)((long)param_1[9].field0_0x0.field1 + 0x78),(int)lVar6);
    }
    goto LAB_1005384cb;
  }
  local_b0 = PTR_shared_null_1021e15e8;
  QVariant::QVariant(&local_c0,*param_2);
  FUN_10012ae80(&local_b0,&local_c0);
  QVariant::~QVariant(&local_c0);
  QVariant::QVariant(&local_d0,param_2[1]);
  FUN_10012ae80(&local_b0,&local_d0);
  QVariant::~QVariant(&local_d0);
  local_130._32_8_ =
       QString::fromAscii_helper
                 ("1onAutoConnectUsbDeviceToVmAnswered(PRL_RESULT, Messaging::ButtonID, const QVariant&)"
                  ,0x55);
  QVariant::QVariant((QVariant *)(local_130 + 0x10),(QList *)&local_b0);
  FUN_100a1c600(local_108,param_1,local_130 + 0x20,local_130 + 0x10);
  QVariant::~QVariant((QVariant *)(local_130 + 0x10));
  if (*(int *)local_130._32_8_ != -1) {
    if (*(int *)local_130._32_8_ != 0) {
      LOCK();
      *(int *)local_130._32_8_ = *(int *)local_130._32_8_ + -1;
      local_31 = *(int *)local_130._32_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100538408;
    }
    QArrayData::deallocate((QArrayData *)local_130._32_8_,2,8);
  }
LAB_100538408:
  iVar4 = CMessageManager::instance();
  local_130._8_8_ = puVar1;
  local_130._0_8_ = puVar1;
  CMessageManager::showMessageBox
            (iVar4,(QWidget *)0x3adf,param_1,(QStringList *)(local_130 + 8),(CSlotInfo *)local_130,
             SUB81(local_108,0));
  FUN_100039a80(local_130);
  FUN_100039a80(local_130 + 8);
  QVariant::~QVariant(local_e8);
  if (local_108[0] != (int *)0x0) {
    LOCK();
    *local_108[0] = *local_108[0] + -1;
    local_31 = *local_108[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_108[0] != (int *)0x0)) {
      operator_delete(local_108[0]);
    }
  }
  FUN_100035ea0(&local_b0);
LAB_1005384cb:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
  return;
}

