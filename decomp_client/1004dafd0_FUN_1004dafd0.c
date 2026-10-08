
void * FUN_1004dafd0(long *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  long local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QString local_108 [2];
  QSize local_f8;
  QVariant local_f0;
  QPixmap local_e0 [32];
  QVariant local_c0;
  QPixmap local_b0 [32];
  QVariant local_90;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QVariant local_68;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  uVar4 = FUN_1003b0ad0(param_1[8]);
  lVar5 = FUN_1003e5be0(uVar4,param_2,param_3);
  if (lVar5 == 0) {
    return (void *)0x0;
  }
  FUN_1003b4c00(&local_70,param_2);
  FUN_1003b34e0(&local_80,param_2,2);
  pvVar6 = operator_new(0x48);
  FUN_1004da200(pvVar6,lVar5,0);
  pcVar1 = *(code **)(*(long *)((long)pvVar6 + 0x10) + 0x28);
  QPixmap::QPixmap(local_b0,&local_80,0,0);
  QPixmap::operator_cast_to_QVariant((QPixmap *)&local_90);
  plVar7 = (long *)((long)pvVar6 + 0x10);
  (*pcVar1)(plVar7,1,&local_90);
  QVariant::~QVariant(&local_90);
  QPixmap::~QPixmap(local_b0);
  pcVar1 = *(code **)(*plVar7 + 0x28);
  QPixmap::QPixmap(local_e0,&local_78,0,0);
  QPixmap::operator_cast_to_QVariant((QPixmap *)&local_c0);
  (*pcVar1)(plVar7,0x104,&local_c0);
  QVariant::~QVariant(&local_c0);
  QPixmap::~QPixmap(local_e0);
  pcVar1 = *(code **)(*plVar7 + 0x28);
  QVariant::QVariant(&local_f0,0);
  (*pcVar1)(plVar7,0x100,&local_f0);
  QVariant::~QVariant(&local_f0);
  pcVar1 = *(code **)(*plVar7 + 0x28);
  QVariant::QVariant(&local_68,&local_70);
  (*pcVar1)(plVar7,0,&local_68);
  QVariant::~QVariant(&local_68);
  local_f8.field0_0x0 = 0x96;
  local_f8.field1_0x4 = 0x28;
  pcVar1 = *(code **)(*plVar7 + 0x28);
  QVariant::QVariant(&local_58,&local_f8);
  (*pcVar1)(plVar7,0xd,&local_58);
  QVariant::~QVariant(&local_58);
  QFont::QFont((QFont *)local_108);
  local_110 = (QArrayData *)QString::fromAscii_helper("Helvetica Neue",0xe);
  QFont::setFamily(local_108);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004db20e;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1004db20e:
  QFont::setPointSize((int)local_108);
  pcVar1 = *(code **)(*plVar7 + 0x28);
  QFont::operator_cast_to_QVariant((QFont *)&local_48);
  (*pcVar1)(plVar7,6,&local_48);
  QVariant::~QVariant(&local_48);
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    if ((1 < *(uint *)local_118) || (*(long *)(local_118 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_118,*(uint *)(local_118 + 4) + 1,*(uint *)(local_118 + 8) >> 0x1f);
    }
    FUN_100df99c0("","prl_client_app",3,"[Config editor] adding item %s id %d",
                  local_118 + *(long *)(local_118 + 0x10),param_3);
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004db304;
      }
      QArrayData::deallocate(local_118,1,8);
    }
  }
LAB_1004db304:
  iVar2 = (**(code **)(*param_1 + 0x228))(param_1);
  uVar3 = QListWidget::count();
  QListWidget::insertItem(iVar2,(QListWidgetItem *)(ulong)uVar3);
  uVar4 = (**(code **)(*param_1 + 0x228))(param_1);
  QWidget::setFocus(uVar4,7);
  iVar2 = (**(code **)(*param_1 + 0x228))(param_1);
  (**(code **)(*param_1 + 0x228))(param_1);
  QListWidget::count();
  QListWidget::setCurrentRow(iVar2);
  QObject::connect(&local_120,lVar5,
                   "2attributesChanged(CVmEditorItem::Attributes,CVmEditorItem::Attributes)",param_1
                   ,"1onItemAttributesChanged()",0);
  if (local_120 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_120);
  FUN_1004dc7e0(param_1,lVar5);
  FUN_1004db730(param_1);
  QFont::~QFont((QFont *)local_108);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004db414;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1004db414:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004db444;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1004db444:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_70.field0_0x0 != 0) {
        return pvVar6;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
  return pvVar6;
}

