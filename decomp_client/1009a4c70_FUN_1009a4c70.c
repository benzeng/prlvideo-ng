
QString * FUN_1009a4c70(QString *param_1)

{
  long lVar1;
  char cVar2;
  QArrayData *pQVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_80;
  QString local_70;
  QDir local_68 [8];
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QDir local_30 [15];
  undefined1 local_21;
  
  FUN_1009947b0(&local_38,0);
  QDir::QDir(local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a4ccd;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1009a4ccd:
  local_40 = (QArrayData *)QString::fromAscii_helper("AppLists.xml",0xc);
  QDir::absoluteFilePath(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a4d22;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009a4d22:
  cVar2 = QFile::exists(param_1);
  if (cVar2 != '\0') {
    if (DAT_10230ffd0 < 2) goto LAB_1009a4e3a;
    local_50 = (QArrayData *)QString::fromAscii_helper("AppLists.xml",0xc);
    QString::toUtf8();
    pQVar3 = local_48;
    lVar1 = *(long *)(local_48 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("","TransporterWizardModel",2,"File \'%s\' found, path = \'%s\'",pQVar3 + lVar1,
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009a4dda;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_1009a4dda:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009a4e0a;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_1009a4e0a:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009a4e3a;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1009a4e3a:
    QDir::~QDir(local_30);
    return param_1;
  }
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","TransporterWizardModel",2,"Path \'%s\' not exist",
                  local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009a4eb2;
      }
      QArrayData::deallocate(local_60,1,8);
    }
  }
LAB_1009a4eb2:
  pQVar4 = param_1->field0_0x0;
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_21 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a4ee0;
      pQVar4 = param_1->field0_0x0;
    }
    QArrayData::deallocate((QArrayData *)pQVar4,2,8);
  }
LAB_1009a4ee0:
  QDir::~QDir(local_30);
  FUN_100d8c6e0(&local_70);
  QDir::QDir(local_68,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a4f31;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1009a4f31:
  pQVar3 = (QArrayData *)QString::fromAscii_helper("AppLists.xml",0xc);
  QDir::absoluteFilePath(param_1);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a4f86;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1009a4f86:
  cVar2 = QFile::exists(param_1);
  if (cVar2 != '\0') {
    if (DAT_10230ffd0 < 2) goto LAB_1009a50a3;
    pQVar3 = (QArrayData *)QString::fromAscii_helper("AppLists.xml",0xc);
    QString::toUtf8();
    lVar1 = *(long *)(local_80 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("","TransporterWizardModel",2,"File \'%s\' found, path = \'%s\'",local_80 + lVar1,
                  local_90 + *(long *)(local_90 + 0x10));
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_21 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009a5043;
      }
      QArrayData::deallocate(local_90,1,8);
    }
LAB_1009a5043:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_21 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009a5073;
      }
      QArrayData::deallocate(local_80,1,8);
    }
LAB_1009a5073:
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_21 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009a50a3;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_1009a50a3:
    QDir::~QDir(local_68);
    return param_1;
  }
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","TransporterWizardModel",2,"Path \'%s\' not exist",
                  local_98 + *(long *)(local_98 + 0x10));
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_21 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009a5127;
      }
      QArrayData::deallocate(local_98,1,8);
    }
  }
LAB_1009a5127:
  pQVar4 = param_1->field0_0x0;
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_21 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a5155;
      pQVar4 = param_1->field0_0x0;
    }
    QArrayData::deallocate((QArrayData *)pQVar4,2,8);
  }
LAB_1009a5155:
  QDir::~QDir(local_68);
  if (DAT_10230ffd0 < 1) goto LAB_1009a522b;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("AppLists.xml",0xc);
  QString::toUtf8();
  FUN_100df99c0("","TransporterWizardModel",1,"File \'%s\' NOT found",
                local_a0 + *(long *)(local_a0 + 0x10));
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a51f5;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_1009a51f5:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1009a522b;
      local_21 = 0;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1009a522b:
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  return param_1;
}

