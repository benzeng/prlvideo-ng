
void FUN_1005e5540(long param_1,char *param_2)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  QCursor *pQVar6;
  long lVar7;
  long lVar8;
  QCursor local_f8 [8];
  QVariant local_f0;
  Data *local_e0;
  Data *local_d8;
  Data *local_d0;
  undefined4 local_c8;
  QArrayData *local_c0;
  Data *local_b8;
  QArrayData *local_b0;
  QLocale local_a8 [8];
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QVariant local_78;
  QArrayData *local_68;
  long local_60;
  QArrayData *local_58;
  QString local_50;
  QVariant local_48;
  undefined1 local_31;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  uVar4 = FUN_1005ec990(param_1 + 0x38);
  local_58 = (QArrayData *)QString::fromAscii_helper("os_win10",8);
  uVar4 = FUN_1005b8a40(uVar4,&local_58);
  uVar3 = FUN_100746a60(uVar4);
  FUN_100746110(&local_50,uVar3);
  QVariant::QVariant(&local_48,&local_50);
  QObject::setProperty(param_2,(QVariant *)"state");
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e55fd;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1005e55fd:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e562d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005e562d:
  QObject::connect(&local_60,param_2,"2itemLinkActivated(const QString&)",
                   *(undefined8 *)(param_1 + 0x40),"1onItemLinkActivated(const QString&)",0);
  if (local_60 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  local_68 = (QArrayData *)QString::fromAscii_helper("linkHelpMeChoose",0x10);
  pcVar5 = (char *)qt_qFindChild_helper(param_2,&local_68,PTR_staticMetaObject_1021e1390,1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e56c8;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1005e56c8:
  local_90 = (QArrayData *)
             QString::fromAscii_helper
                       ("<html><style>a { color: #aaddf0; }</style><body><a href=\"%1\">%2</a></body></html>"
                        ,0x51);
  local_a0 = (QArrayData *)
             QString::fromAscii_helper("http://www.parallels.com/win10help_me_choose/",0x2d);
  QLocale::QLocale(local_a8);
  FUN_100d3f730(&local_98,&local_a0,local_a8);
  QString::arg(&local_88,&local_90,&local_98,0,0x20);
  QMetaObject::tr((char *)&local_b0,(char *)&PTR_PTR_10221eed0,0x1e05769);
  QString::arg(&local_80,&local_88,&local_b0,0,0x20);
  QVariant::QVariant(&local_78,&local_80);
  QObject::setProperty(pcVar5,(QVariant *)"text");
  QVariant::~QVariant(&local_78);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e57d4;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1005e57d4:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e580a;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1005e580a:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e583a;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1005e583a:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e5870;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1005e5870:
  QLocale::~QLocale(local_a8);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e58b2;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1005e58b2:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e58e8;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1005e58e8:
  local_c0 = (QArrayData *)PTR_shared_null_1021e1288;
  local_b8 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(param_2,&local_c0,PTR_staticMetaObject_1021e1390,&local_b8,1);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e595d;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1005e595d:
  local_e0 = local_b8;
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 == 0) {
      QListData::detach((int)&local_e0);
      lVar7 = (long)*(int *)(local_e0 + 8);
      if ((local_b8 + (long)*(int *)(local_b8 + 8) * 8 != local_e0 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_e0 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(local_e0 + 0xc))
         ) {
        _memcpy(local_e0 + lVar7 * 8 + 0x10,local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10,
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + 1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
    }
  }
  local_d8 = local_e0 + (long)*(int *)(local_e0 + 8) * 8 + 0x10;
  local_d0 = local_e0 + (long)*(int *)(local_e0 + 0xc) * 8 + 0x10;
  if (*(int *)(local_e0 + 8) != *(int *)(local_e0 + 0xc)) {
    do {
      local_c8 = 1;
      plVar1 = *(long **)local_d8;
      QObject::property((char *)&local_f0);
      cVar2 = QVariant::toBool();
      QVariant::~QVariant(&local_f0);
      if (((plVar1 != (long *)0x0) && (cVar2 == '\x01')) &&
         (pQVar6 = (QCursor *)(**(code **)(*plVar1 + 8))(plVar1,"org.qt-project.Qt.QGraphicsItem"),
         pQVar6 != (QCursor *)0x0)) {
        QCursor::QCursor(local_f8,0xd);
        QGraphicsItem::setCursor(pQVar6);
        QCursor::~QCursor(local_f8);
      }
      local_d8 = local_d8 + 8;
    } while (local_d8 != local_d0);
  }
  local_c8 = 1;
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e5af4;
    }
    QListData::dispose(local_e0);
  }
LAB_1005e5af4:
  FUN_1005e4a80(*(undefined8 *)(param_1 + 0x40));
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      UNLOCK();
      if (*(int *)local_b8 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_b8);
  }
  return;
}

