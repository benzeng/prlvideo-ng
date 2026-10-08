
long FUN_1007c2560(QWidget *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  QMenu *pQVar4;
  QMenu *this;
  int *piVar5;
  int *local_88;
  QMenu *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  EnumUtils::enumToString(&local_40,*(undefined4 *)(param_1 + 0x40));
  if (param_4 == '\0') {
    local_68 = (QArrayData *)QString::fromAscii_helper("%1 ",3);
    QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Host_Computer_10226f530);
    QString::arg(&local_60,&local_68,&local_70,0,0x20);
    QString::insert((int)&local_40,(QChar *)0x0,
                    (int)*(undefined8 *)(local_60 + 0x10) + (int)local_60);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007c2736;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1007c2736:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007c2766;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1007c2766:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007c2796;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
  else {
    local_50 = (QArrayData *)QString::fromAscii_helper("%1 ",3);
    QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Client_Computer_10226f538);
    QString::arg(&local_48,&local_50,&local_58,0,0x20);
    QString::insert((int)&local_40,(QChar *)0x0,
                    (int)*(undefined8 *)(local_48 + 0x10) + (int)local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007c2630;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1007c2630:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007c2660;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1007c2660:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007c2796;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_1007c2796:
  pvVar1 = operator_new(0x28);
  local_78 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1007b5ad0(pvVar1,*(undefined4 *)(param_1 + 0x40),param_1,&local_78,param_4);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007c27f8;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1007c27f8:
  lVar2 = FUN_1007c1750(param_1,param_2,&local_40,param_3,param_4);
  if (lVar2 == 0) {
    pQVar4 = operator_new(0x18);
    FUN_1007b5750(pQVar4,1,param_1,&local_40);
    this = operator_new(0x30);
    QMenu::QMenu(this,param_1);
    FontUtils::setMacContextMenuFont((QWidget *)this,false);
    FUN_1007be4f0(param_1,pvVar1,this,0);
    QAction::setMenu(pQVar4);
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pQVar4);
    local_88 = piVar5;
    local_80 = pQVar4;
    FUN_1007c57e0(param_1 + 0x38,&local_88);
    lVar2 = 0;
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      lVar2 = 0;
      if (!(bool)local_31) {
        operator_delete(piVar5);
        lVar2 = 0;
      }
    }
  }
  else {
    lVar3 = QAction::menu();
    if (lVar3 == 0) {
      lVar2 = 0;
      FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get menu instance.");
    }
    else {
      QMenu::addSeparator();
      FUN_1007be4f0(param_1,pvVar1,lVar3,0);
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return lVar2;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return lVar2;
}

