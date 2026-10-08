
void FUN_10017bd50(QAction *param_1)

{
  undefined8 uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  QVariant *pQVar5;
  long lVar6;
  long lVar7;
  Connection local_78 [8];
  QVariant local_70;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar1 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  lVar2 = FUN_1001547d0(uVar1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10017bdc4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10017bdc4:
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server instance to add shared folder."
                 );
    return;
  }
  QMenu::addSeparator();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  lVar2 = CVmSharing::getHostSharing();
  local_58 = *(Data **)(lVar2 + 0xa8);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar6 = (long)*(int *)(local_58 + 8);
      lVar2 = *(long *)(lVar2 + 0xa8);
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_58 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_58 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar6 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      uVar1 = *(undefined8 *)local_50;
      pvVar3 = operator_new(0x28);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      CVmTools::getVmSharing();
      uVar4 = CVmSharing::getHostSharing();
      FUN_100179b70(pvVar3,uVar1,uVar4,param_1);
      QWidget::addAction(param_1);
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10017bf3b;
    }
    QListData::dispose(local_58);
  }
LAB_10017bf3b:
  pQVar5 = operator_new(0x18);
  QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Add_a_Folder____10226fc60);
  FUN_100132430(pQVar5,&local_60,param_1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10017bfa9;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10017bfa9:
  QVariant::QVariant(&local_70,5);
  QAction::setData(pQVar5);
  QVariant::~QVariant(&local_70);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getHostSharing();
  CVmHostSharing::isUserDefinedFoldersEnabled();
  QAction::setEnabled(SUB81(pQVar5,0));
  QObject::connect(local_78,pQVar5,"2triggered(bool)",param_1,"1onAddSharedFolder()",0);
  QMetaObject::Connection::~Connection(local_78);
  QWidget::addAction(param_1);
  return;
}

