
void FUN_1009a15f0(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  QArrayData *local_48;
  QString local_40;
  long local_38;
  undefined1 local_29;
  
  lVar4 = FUN_1009983c0();
  lVar4 = *(long *)(lVar4 + 0x30);
  lVar5 = 0;
  if (lVar4 != 0) {
    (*DAT_102310a48)(lVar4);
    lVar5 = lVar4;
  }
  local_38 = 0;
  iVar3 = (*DAT_102310dd8)(lVar5,&local_38);
  if (iVar3 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAMigration_GetReconfigParams","(hMigration, &hReconfigParams.GetHandle())",
                  "Pages/WPDestinationPath.cpp",0x16d,"SetupReconfigActions");
  }
  iVar3 = (*DAT_102310de0)(local_38,4);
  if (iVar3 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAReconfigParams_AddReconfigAction",
                  "(hReconfigParams, (PRL_INT32)OA_DEPLOY_TOOLS_INST_HLPR)",
                  "Pages/WPDestinationPath.cpp",0x171,"SetupReconfigActions");
  }
  FUN_1009a4c70(&local_40);
  cVar2 = QFile::exists(&local_40);
  lVar4 = local_38;
  pcVar1 = DAT_102310de8;
  if (cVar2 != '\0') {
    QString::toUtf8();
    iVar3 = (*pcVar1)(lVar4,0xb,5,local_48 + *(long *)(local_48 + 0x10),0);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1009a1775;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_1009a1775:
    if (iVar3 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAReconfigParams_AddReconfigResource",
                    "(hReconfigParams, (PRL_INT32)OA_RSRC_APPLIST_FILE, PTAFD_STRING, QSTR2UTF8(qsAppListsXmlPath), 0)"
                    ,"Pages/WPDestinationPath.cpp",0x180,"SetupReconfigActions");
    }
    iVar3 = (*DAT_102310de0)(local_38,0xd);
    if (iVar3 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAReconfigParams_AddReconfigAction",
                    "(hReconfigParams, (PRL_INT32)OA_DISABLE_AUTORUNS)",
                    "Pages/WPDestinationPath.cpp",0x182,"SetupReconfigActions");
    }
  }
  iVar3 = (*DAT_102310de0)(local_38,0xf);
  if (iVar3 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAReconfigParams_AddReconfigAction",
                  "(hReconfigParams, (PRL_INT32)OA_DISABLE_PTA_AUTORUN)",
                  "Pages/WPDestinationPath.cpp",0x187,"SetupReconfigActions");
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009a18b7;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1009a18b7:
  if (local_38 != 0) {
    (*DAT_102310a50)();
  }
  local_38 = 0;
  if (lVar5 != 0) {
    (*DAT_102310a50)(lVar5);
  }
  return;
}

