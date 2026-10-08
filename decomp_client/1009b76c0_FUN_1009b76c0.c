
void FUN_1009b76c0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  pcVar3 = DAT_102310dd0;
  local_38 = 0x8b57009;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  QString::toUtf8();
  lVar2 = *(long *)(local_40 + 0x10);
  QString::toUtf8();
  iVar4 = (*pcVar3)(uVar1,local_40 + lVar2,local_48 + *(long *)(local_48 + 0x10),&local_38);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b7756;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1009b7756:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b7786;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1009b7786:
  if (iVar4 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                  "PrlPTAMigration_CopyVmOsInstallFiles",
                  "(m_hMigration, QSTR2UTF8(m_sSourcePath), QSTR2UTF8(m_sDestPath), &err)",
                  "Pages/CopyInstallFilesTask.cpp",0x27,"run");
  }
  *(undefined4 *)(param_1 + 0x28) = local_38;
  return;
}

