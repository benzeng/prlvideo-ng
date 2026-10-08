
undefined1 FUN_1009b2dc0(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  QVariant local_d8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QVariant local_b0;
  QArrayData *local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  long local_80;
  QArrayData *local_78;
  long local_70;
  undefined4 local_64;
  long local_60;
  QVariant local_58;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  CDeclarativeWizardPage::pageContentItem();
  QObject::property((char *)&local_58);
  cVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_58);
  if (cVar3 == '\0') {
    return 1;
  }
  lVar6 = FUN_1009983c0(param_1);
  lVar6 = *(long *)(lVar6 + 0x28);
  lVar9 = 0;
  if (lVar6 != 0) {
    (*DAT_102310a48)(lVar6);
    lVar9 = lVar6;
  }
  local_60 = 0;
  iVar5 = (*DAT_102310ab8)(lVar9,&local_60);
  if (iVar5 < 0) {
    uVar4 = 0;
    FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get auth info. error 0x%X",iVar5);
    goto LAB_1009b3671;
  }
  local_64 = 0;
  iVar5 = (*DAT_102310ac0)(local_60,&local_64);
  if (iVar5 < 0) {
    uVar4 = 0;
    FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get auth type. error 0x%X",iVar5);
    goto LAB_1009b3671;
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    uVar4 = FUN_1009b3a10(param_1,&local_60);
    goto LAB_1009b3671;
  }
  lVar6 = FUN_1009983c0(param_1);
  local_70 = 0;
  lVar6 = *(long *)(lVar6 + 0x30);
  lVar8 = 0;
  if (lVar6 != 0) {
    local_70 = lVar6;
    (*DAT_102310a48)(lVar6);
    lVar8 = lVar6;
  }
  puVar1 = PTR_shared_null_1021e1288;
  local_78 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar5 = FUN_10099dc60(DAT_102310c88,&local_70,&local_78);
  if (iVar5 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                  "(PrlPTAMigration_GetComputerName, hMigration, computerName)",
                  "Pages/WPEnableAutoLogon.cpp",0xb3,"Commit");
  }
  local_80 = 0;
  iVar5 = (*DAT_102310e60)(lVar8,&local_80);
  if (iVar5 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAMigration_GetUserInfo","(hMigration, &hUserInfo.GetHandle())",
                  "Pages/WPEnableAutoLogon.cpp",0xb6,"Commit");
  }
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  iVar5 = FUN_10099dc60(DAT_102310e68,&local_80,&local_88);
  if (iVar5 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                  "(PrlPTAUserInfo_GetName, hUserInfo, userName)","Pages/WPEnableAutoLogon.cpp",0xbb
                  ,"Commit");
  }
  iVar5 = FUN_10099dc60(DAT_102310e70,&local_80,&local_90);
  if (iVar5 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                  "(PrlPTAUserInfo_GetDomain, hUserInfo, userDomain)","Pages/WPEnableAutoLogon.cpp",
                  0xbc,"Commit");
  }
  iVar5 = FUN_10099dc60(DAT_102310e88,&local_80,&local_98);
  if (iVar5 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                  "(PrlPTAUserInfo_GetInetPrincipalName, hUserInfo, userInetPrincipalName)",
                  "Pages/WPEnableAutoLogon.cpp",0xbd,"Commit");
  }
  iVar5 = QString::compare(&local_90,&local_78,0);
  if ((iVar5 == 0) &&
     (local_90.field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288)) {
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    QString::operator=(&local_90,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b31b3;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_1009b31b3:
  if ((*(int *)(local_98.field0_0x0 + 4) != 0) &&
     (QString::operator=(&local_88,&local_98),
     local_90.field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288)) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    QString::operator=(&local_90,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b3224;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_1009b3224:
  CDeclarativeWizardPage::pageContentItem();
  QObject::property((char *)&local_b0);
  QVariant::toString();
  QVariant::~QVariant(&local_b0);
  lVar6 = local_60;
  pcVar2 = DAT_102310ae8;
  QString::toUtf8();
  iVar5 = (*pcVar2)(lVar6,local_b8 + *(long *)(local_b8 + 0x10));
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b32c8;
    }
    QArrayData::deallocate(local_b8,1,8);
  }
LAB_1009b32c8:
  if (iVar5 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAuthInfo_SetUser",
                  "(hAuthInfo, QSTR2UTF8(userName))","Pages/WPEnableAutoLogon.cpp",0xcc,"Commit");
  }
  lVar6 = local_60;
  pcVar2 = DAT_102310ad8;
  QString::toUtf8();
  iVar5 = (*pcVar2)(lVar6,local_c0 + *(long *)(local_c0 + 0x10));
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b3384;
    }
    QArrayData::deallocate(local_c0,1,8);
  }
LAB_1009b3384:
  if (iVar5 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAuthInfo_SetDomain"
                  ,"(hAuthInfo, QSTR2UTF8(userDomain))","Pages/WPEnableAutoLogon.cpp",0xcd,"Commit")
    ;
  }
  lVar6 = local_60;
  pcVar2 = DAT_102310af8;
  QString::toUtf8();
  iVar5 = (*pcVar2)(lVar6,local_c8 + *(long *)(local_c8 + 0x10));
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b3440;
    }
    QArrayData::deallocate(local_c8,1,8);
  }
LAB_1009b3440:
  if (iVar5 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAuthInfo_SetPassword","(hAuthInfo, QSTR2UTF8(password))",
                  "Pages/WPEnableAutoLogon.cpp",0xce,"Commit");
  }
  iVar5 = (*DAT_102310c58)(lVar8);
  if (iVar5 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAMigration_CheckCredentials","(hMigration)","Pages/WPEnableAutoLogon.cpp",
                  0xd0,"Commit");
  }
  pcVar7 = (char *)CDeclarativeWizardPage::pageContentItem();
  QVariant::QVariant(&local_d8,"checkingPassword");
  QObject::setProperty(pcVar7,(QVariant *)"passwordState");
  QVariant::~QVariant(&local_d8);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b3569;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1009b3569:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b359f;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1009b359f:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b35d5;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1009b35d5:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b3605;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1009b3605:
  if (local_80 != 0) {
    (*DAT_102310a50)();
  }
  local_80 = 0;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b3652;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1009b3652:
  if (lVar8 != 0) {
    (*DAT_102310a50)(lVar8);
  }
  local_70 = 0;
  uVar4 = 0;
LAB_1009b3671:
  if (local_60 != 0) {
    (*DAT_102310a50)();
  }
  local_60 = 0;
  if (lVar9 != 0) {
    (*DAT_102310a50)(lVar9);
  }
  return uVar4;
}

