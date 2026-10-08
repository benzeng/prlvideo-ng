
undefined1 FUN_1009b42b0(undefined8 param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  lVar3 = FUN_1009983c0();
  lVar3 = *(long *)(lVar3 + 0x30);
  lVar5 = 0;
  if (lVar3 != 0) {
    (*DAT_102310a48)(lVar3);
    lVar5 = lVar3;
  }
  if (*(int *)(*param_2 + 4) == 0) {
    uVar4 = 0;
    FUN_100df99c0("","TransporterWizardModel",0,
                  "Internal error: can\'t enable autologon for empty user");
    goto LAB_1009b467d;
  }
  local_40 = 0;
  iVar2 = (*DAT_102310dd8)(lVar5,&local_40);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAMigration_GetReconfigParams","(hMigration, &hReconfigParams.GetHandle())",
                  "Pages/WPEnableAutoLogon.cpp",0x13e,"AddEnableAutologonForAHC");
  }
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  QString::toUtf8();
  cVar1 = QByteArray::append((char *)&local_48);
  QByteArray::append(cVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b43c7;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1009b43c7:
  QString::toUtf8();
  cVar1 = QByteArray::append((char *)&local_48);
  QByteArray::append(cVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b441e;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1009b441e:
  QString::toUtf8();
  QByteArray::append((char *)&local_48);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b446b;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1009b446b:
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    lVar3 = *(long *)(local_68 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("","TransporterWizardModel",2,
                  "Add autologon info: user - \'%s\', domain - \'%s\'.",local_68 + lVar3,
                  local_70 + *(long *)(local_70 + 0x10));
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b44fa;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_1009b44fa:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009b452a;
      }
      QArrayData::deallocate(local_68,1,8);
    }
  }
LAB_1009b452a:
  iVar2 = (*DAT_102310de0)(local_40,0xe);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAReconfigParams_AddReconfigAction",
                  "(hReconfigParams, (PRL_INT32)OA_ENABLE_AUTOLOGON)","Pages/WPEnableAutoLogon.cpp",
                  0x14c,"AddEnableAutologonForAHC");
  }
  iVar2 = (*DAT_102310de8)(local_40,0xd,6,local_48 + *(long *)(local_48 + 0x10),
                           *(undefined4 *)(local_48 + 4));
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAReconfigParams_AddReconfigResource",
                  "(hReconfigParams, (PRL_INT32)OA_RSRC_AUTOLOGON_USER_INFO, PTAFD_STRING_LIST, ba.constData(), (PRL_UINT32)ba.size())"
                  ,"Pages/WPEnableAutoLogon.cpp",0x152,"AddEnableAutologonForAHC");
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b463c;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1009b463c:
  if (local_40 != 0) {
    (*DAT_102310a50)();
  }
  local_40 = 0;
  uVar4 = 1;
LAB_1009b467d:
  if (lVar5 != 0) {
    (*DAT_102310a50)(lVar5);
  }
  return uVar4;
}

