
QString * FUN_1009936e0(QString *param_1)

{
  long lVar1;
  char cVar2;
  QArrayData *pQVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_b8;
  QString local_a8;
  QDir local_a0 [8];
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
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
  
  FUN_1009947b0(&local_38,1);
  QDir::QDir(local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100993740;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100993740:
  local_40 = (QArrayData *)QString::fromAscii_helper("libprl_ptagent.dylib",0x14);
  QDir::absoluteFilePath(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100993795;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100993795:
  cVar2 = QFile::exists(param_1);
  if (cVar2 != '\0') {
    if (DAT_10230ffd0 < 2) goto LAB_1009938ad;
    local_50 = (QArrayData *)QString::fromAscii_helper("libprl_ptagent.dylib",0x14);
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
        if ((bool)local_21) goto LAB_10099384d;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_10099384d:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10099387d;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_10099387d:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009938ad;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1009938ad:
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
        if ((bool)local_21) goto LAB_100993925;
      }
      QArrayData::deallocate(local_60,1,8);
    }
  }
LAB_100993925:
  pQVar4 = param_1->field0_0x0;
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_21 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100993953;
      pQVar4 = param_1->field0_0x0;
    }
    QArrayData::deallocate((QArrayData *)pQVar4,2,8);
  }
LAB_100993953:
  QDir::~QDir(local_30);
  FUN_1009947b0(&local_70,0);
  QDir::QDir(local_68,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009939a6;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1009939a6:
  local_78 = (QArrayData *)QString::fromAscii_helper("libprl_ptagent.dylib",0x14);
  QDir::absoluteFilePath(param_1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009939fb;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1009939fb:
  cVar2 = QFile::exists(param_1);
  if (cVar2 != '\0') {
    if (DAT_10230ffd0 < 2) goto LAB_100993b18;
    local_88 = (QArrayData *)QString::fromAscii_helper("libprl_ptagent.dylib",0x14);
    QString::toUtf8();
    pQVar3 = local_80;
    lVar1 = *(long *)(local_80 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("","TransporterWizardModel",2,"File \'%s\' found, path = \'%s\'",pQVar3 + lVar1,
                  local_90 + *(long *)(local_90 + 0x10));
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_21 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100993ab8;
      }
      QArrayData::deallocate(local_90,1,8);
    }
LAB_100993ab8:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_21 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100993ae8;
      }
      QArrayData::deallocate(local_80,1,8);
    }
LAB_100993ae8:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_21 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100993b18;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100993b18:
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
        if ((bool)local_21) goto LAB_100993b9c;
      }
      QArrayData::deallocate(local_98,1,8);
    }
  }
LAB_100993b9c:
  pQVar4 = param_1->field0_0x0;
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_21 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100993bca;
      pQVar4 = param_1->field0_0x0;
    }
    QArrayData::deallocate((QArrayData *)pQVar4,2,8);
  }
LAB_100993bca:
  QDir::~QDir(local_68);
  FUN_100d8c9c0(&local_a8);
  QDir::QDir(local_a0,&local_a8);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_21 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100993c27;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_100993c27:
  pQVar3 = (QArrayData *)QString::fromAscii_helper("libprl_ptagent.dylib",0x14);
  QDir::absoluteFilePath(param_1);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100993c8b;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100993c8b:
  cVar2 = QFile::exists(param_1);
  if (cVar2 != '\0') {
    if (DAT_10230ffd0 < 2) goto LAB_100993dc0;
    pQVar3 = (QArrayData *)QString::fromAscii_helper("libprl_ptagent.dylib",0x14);
    QString::toUtf8();
    lVar1 = *(long *)(local_b8 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("","TransporterWizardModel",2,"File \'%s\' found, path = \'%s\'",local_b8 + lVar1,
                  local_c8 + *(long *)(local_c8 + 0x10));
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_21 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100993d54;
      }
      QArrayData::deallocate(local_c8,1,8);
    }
LAB_100993d54:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_21 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100993d8a;
      }
      QArrayData::deallocate(local_b8,1,8);
    }
LAB_100993d8a:
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_21 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100993dc0;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_100993dc0:
    QDir::~QDir(local_a0);
    return param_1;
  }
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","TransporterWizardModel",2,"Path \'%s\' not exist",
                  local_d0 + *(long *)(local_d0 + 0x10));
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_21 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100993e47;
      }
      QArrayData::deallocate(local_d0,1,8);
    }
  }
LAB_100993e47:
  pQVar4 = param_1->field0_0x0;
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_21 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100993e75;
      pQVar4 = param_1->field0_0x0;
    }
    QArrayData::deallocate((QArrayData *)pQVar4,2,8);
  }
LAB_100993e75:
  QDir::~QDir(local_a0);
  if (DAT_10230ffd0 < 1) goto LAB_100993f4e;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("libprl_ptagent.dylib",0x14);
  QString::toUtf8();
  FUN_100df99c0("","TransporterWizardModel",1,"File \'%s\' NOT found",
                local_d8 + *(long *)(local_d8 + 0x10));
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_21 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100993f18;
    }
    QArrayData::deallocate(local_d8,1,8);
  }
LAB_100993f18:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100993f4e;
      local_21 = 0;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100993f4e:
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  return param_1;
}

