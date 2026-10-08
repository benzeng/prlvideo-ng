
void FUN_100420360(undefined8 param_1,QString *param_2)

{
  code *pcVar1;
  long *plVar2;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QArrayData *local_70;
  QVariant local_68;
  QVariant local_58;
  QVariant local_48;
  Data_conflict local_38 [2];
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_70,"CVmEdBootCampDialog","Dialog",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004203d0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004203d0:
  plVar2 = (long *)QTreeWidget::headerItem();
  QCoreApplication::translate((char *)&local_78,"CVmEdBootCampDialog","System Name",0);
  pcVar1 = *(code **)(*plVar2 + 0x20);
  QVariant::QVariant(&local_68,&local_78);
  (*pcVar1)(plVar2,3,0);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_21 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10042045a;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10042045a:
  QCoreApplication::translate((char *)&local_80,"CVmEdBootCampDialog","Type",0);
  pcVar1 = *(code **)(*plVar2 + 0x20);
  QVariant::QVariant(&local_58,&local_80);
  (*pcVar1)(plVar2,2,0);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_21 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004204d8;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1004204d8:
  QCoreApplication::translate((char *)&local_88,"CVmEdBootCampDialog","Size",0);
  pcVar1 = *(code **)(*plVar2 + 0x20);
  QVariant::QVariant(&local_48,&local_88);
  (*pcVar1)(plVar2,1,0);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_21 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100420556;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100420556:
  QCoreApplication::translate((char *)&local_90,"CVmEdBootCampDialog","Partition",0);
  pcVar1 = *(code **)(*plVar2 + 0x20);
  QVariant::QVariant((QVariant *)local_38,&local_90);
  (*pcVar1)(plVar2,0,0,local_38);
  QVariant::~QVariant((QVariant *)local_38);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_90.field0_0x0 != 0) {
        return;
      }
      local_38[0]._0_1_ = '\0';
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
  return;
}

