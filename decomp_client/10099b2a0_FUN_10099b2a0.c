
void FUN_10099b2a0(long param_1)

{
  QString *pQVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  long local_38;
  long local_30;
  undefined1 local_21;
  
  lVar3 = FUN_1009983c0();
  lVar3 = *(long *)(lVar3 + 0x28);
  lVar4 = 0;
  if (lVar3 != 0) {
    (*DAT_102310a48)(lVar3);
    lVar4 = lVar3;
  }
  local_30 = 0;
  iVar2 = (*DAT_102310ea8)(lVar4,&local_30);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAgent_GetSysCfg",
                  "(hAgent, &hSysCfg.GetHandle())","Pages/WPInstallDisk.cpp",0x82,"Initialize");
  }
  local_38 = 0;
  iVar2 = (*DAT_102310eb8)(local_30,&local_38);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTASysCfg_GetVmOs",
                  "(hSysCfg, &hVmOsInfo.GetHandle())","Pages/WPInstallDisk.cpp",0x85,"Initialize");
  }
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar2 = FUN_10099dc60(DAT_102310fd0,&local_38,&local_40);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                  "(PrlPTASysCfgOsInfo_GetFullName, hVmOsInfo, qszVmOsFullname)",
                  "Pages/WPInstallDisk.cpp",0x88,"Initialize");
  }
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x50) + 8);
  QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Insert_the_installation_disc_to_c_10227e058);
  QString::arg(&local_48,&local_50,&local_40,0,0x20);
  QLabel::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10099b49e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10099b49e:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10099b4ce;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10099b4ce:
  CProgressIndicator::hide();
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x50) + 0x80);
  QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Copying_the_installation_files___10227e060);
  CProgressIndicator::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10099b547;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10099b547:
  QAbstractButton::isChecked();
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x70),0));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10099b594;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10099b594:
  if (local_38 != 0) {
    (*DAT_102310a50)();
  }
  local_38 = 0;
  if (local_30 != 0) {
    (*DAT_102310a50)();
  }
  local_30 = 0;
  if (lVar4 != 0) {
    (*DAT_102310a50)(lVar4);
  }
  return;
}

