
void FUN_1005288b0(long param_1)

{
  QString *pQVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  FUN_100525c10();
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100461500(&local_48,*(long *)(param_1 + 0x48) + 0xd0);
  local_40 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_40);
      lVar5 = (long)*(int *)(local_40 + 8);
      if ((local_48 + (long)*(int *)(local_48 + 8) * 8 != local_40 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_40 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar5 * 8 + 0x10,local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100528970;
    }
    QListData::dispose(local_48);
  }
LAB_100528970:
  iVar3 = WidgetUtils::getCheckBoxTextStartPos();
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
      pQVar1 = *(QString **)local_60;
      local_78 = (QArrayData *)QString::fromAscii_helper("QLabel { margin-left: %1; }",0x1b);
      QString::arg(&local_70,&local_78,(long)(iVar3 + -2),0,10,0x20);
      QWidget::setStyleSheet(pQVar1);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100528a9b;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100528a9b:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100528acb;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100528acb:
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
      if ((bool)local_31) goto LAB_100528b15;
    }
    QListData::dispose(local_68);
  }
LAB_100528b15:
  QObject::connect(&local_80,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30),
                   "2currentItemChanged( CPrlFileDevSelectorItem::FileDevSelectorItemType,const QString &, const QString &)"
                   ,*(undefined8 *)(param_1 + 0x38),"1onPreprocessedValueChanged()",0);
  if (local_80 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  uVar4 = CPrlFileDevSelectorWidget::getFileDevSelector();
  QObject::connect(&local_88,uVar4,"2afterBrowse()",param_1,"1onAfterBrowse()",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_88 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  QObject::connect(&local_90,*(undefined8 *)(param_1 + 0x30),"2submitFinished( PRL_RESULT )",param_1
                   ,"1onSubmitFinished( PRL_RESULT )",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_90 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_90);
  QObject::connect(&local_98,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x90),"2clicked()",param_1,
                   "1onCheckUpdates()",0);
  if ((cVar2 != '\0') && (local_98 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}

