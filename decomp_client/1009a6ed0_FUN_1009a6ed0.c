
void FUN_1009a6ed0(undefined8 param_1,char *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  QCursor *pQVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long local_b8;
  QString local_b0;
  QVariant local_a8;
  QString local_98;
  QVariant local_90;
  QCursor local_80 [8];
  QVariant local_78;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(param_2,&local_48,PTR_staticMetaObject_1021e1390,&local_40,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009a6f56;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1009a6f56:
  local_68 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_68);
      lVar5 = (long)*(int *)(local_68 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_68 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_68 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar5 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      plVar1 = *(long **)local_60;
      QObject::property((char *)&local_78);
      if (((plVar1 != (long *)0x0) &&
          ((local_78.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0)) &&
         (pQVar3 = (QCursor *)(**(code **)(*plVar1 + 8))(plVar1,"org.qt-project.Qt.QGraphicsItem"),
         pQVar3 != (QCursor *)0x0)) {
        uVar2 = QVariant::toInt((bool *)&local_78);
        QCursor::QCursor(local_80,uVar2);
        QGraphicsItem::setCursor(pQVar3);
        QCursor::~QCursor(local_80);
      }
      QVariant::~QVariant(&local_78);
      local_60 = local_60 + 8;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009a70cd;
    }
    QListData::dispose(local_68);
  }
LAB_1009a70cd:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009a70f3;
    }
    QListData::dispose(local_40);
  }
LAB_1009a70f3:
  uVar4 = FUN_1009983c0(param_1);
  uVar2 = FUN_100992e00(uVar4);
  uVar4 = FUN_1009983c0(param_1);
  FUN_100992e90(uVar4,0);
  uVar4 = FUN_1009983c0(param_1);
  uVar4 = FUN_100992f10(uVar4);
  FUN_100def650(&local_98,uVar4,1);
  QVariant::QVariant(&local_90,&local_98);
  QObject::setProperty(param_2,(QVariant *)"systemOnlyRequiredSpace");
  QVariant::~QVariant(&local_90);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009a71a6;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1009a71a6:
  uVar4 = FUN_1009983c0(param_1);
  FUN_100992e90(uVar4,1);
  uVar4 = FUN_1009983c0(param_1);
  uVar4 = FUN_100992f10(uVar4);
  FUN_100def650(&local_b0,uVar4,1);
  QVariant::QVariant(&local_a8,&local_b0);
  QObject::setProperty(param_2,(QVariant *)"systemAndDocumentsRequiredSpace");
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009a7249;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1009a7249:
  uVar4 = FUN_1009983c0(param_1);
  FUN_100992e90(uVar4,uVar2);
  QObject::connect(&local_b8,param_2,"2selectedButtonChanged()",param_1,"2DataChanged()",0);
  if (local_b8 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_b8);
  return;
}

