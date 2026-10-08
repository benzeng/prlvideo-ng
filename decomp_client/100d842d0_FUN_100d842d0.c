
QString * FUN_100d842d0(QString *param_1)

{
  char cVar1;
  uid_t uVar2;
  long lVar3;
  size_t sVar4;
  int *piVar5;
  char *pcVar6;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  uVar2 = _geteuid();
  lVar3 = _getpwuid(uVar2);
  if (((lVar3 == 0) || (pcVar6 = *(char **)(lVar3 + 0x30), pcVar6 == (char *)0x0)) ||
     (sVar4 = _strlen(pcVar6), sVar4 == 0)) {
    piVar5 = ___error();
    if (lVar3 == 0) {
      pcVar6 = "null";
    }
    else {
      pcVar6 = *(char **)(lVar3 + 0x30);
    }
    FUN_100df99c0("","cmn_utils",0,"Can\'t get profile by error %d, pswd=%p, pw_dir=%p",*piVar5,
                  lVar3,pcVar6);
    return param_1;
  }
  QString::fromUtf8_helper((char *)&local_40,(int)pcVar6);
  QString::normalized(&local_38,&local_40,1,0);
  QString::operator=(param_1,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d84381;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100d84381:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d843b1;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d843b1:
  QString::fromUtf8_helper((char *)&local_30,0x1e2468c);
  QString::append(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d84402;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d84402:
  cVar1 = FUN_100d80520();
  if (cVar1 == '\0') {
    local_80 = (QArrayData *)QString::fromAscii_helper("Library/Preferences/%1",0x16);
    QString::fromUtf8_helper((char *)&local_90,0x1de8568);
    QString::normalized(&local_88,&local_90,1,0);
    QString::arg(&local_78,&local_80,&local_88,0,0x20);
    QString::append(param_1);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_21 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d846ba;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100d846ba:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_21 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d846ea;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100d846ea:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_21 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d84720;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100d84720:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_21 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d84750;
      }
      QArrayData::deallocate(local_80,2,8);
    }
    goto LAB_100d84750;
  }
  QDir::homePath();
  local_60 = (QArrayData *)QString::fromAscii_helper("/Library/Preferences/%1",0x17);
  QString::fromUtf8_helper((char *)&local_70,0x1de8568);
  QString::normalized(&local_68,&local_70,1,0);
  QString::arg(&local_58,&local_60,&local_68,0,0x20);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_21 = *(int *)local_50 != 0;
    UNLOCK();
  }
  QString::append(&local_48);
  QString::operator=(param_1,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d844d1;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100d844d1:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d84501;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100d84501:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d84531;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100d84531:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d84561;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100d84561:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d84591;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100d84591:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d84750;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100d84750:
  QDir::fromNativeSeparators(&local_98);
  QString::operator=(param_1,&local_98);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_98.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
  return param_1;
}

