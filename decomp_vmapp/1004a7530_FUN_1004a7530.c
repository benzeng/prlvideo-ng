
void FUN_1004a7530(long param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  undefined4 local_48 [2];
  QArrayData *local_40;
  uint local_38;
  undefined1 local_31;
  
  if (*(long *)(*(long *)(param_1 + 0x38) + 0x110) == 0) {
    return;
  }
  CVmConfiguration::getVmSettings();
  lVar11 = CVmSettings::getVmTools();
  if (lVar11 == 0) {
    return;
  }
  CVmTools::getVmSharedApplications();
  bVar2 = CVmSharedApplications::isStoreInternetPasswordsInOSXKeychain();
  CVmTools::getVmSharedApplications();
  bVar3 = CVmSharedApplications::isStoreInternetPasswordsInOSXKeychain();
  cVar4 = CVmTools::isIsolatedVm();
  cVar5 = CVmTools::isIsolatedVm();
  if ((bVar2 != bVar3) || (cVar4 != cVar5)) {
    cVar4 = CVmTools::isIsolatedVm();
    if (cVar4 == '\0') {
      local_38 = (uint)bVar3 << 3 | *(uint *)(param_1 + 0xa9);
      QByteArray::QByteArray((QByteArray *)&local_40,(char *)&local_38,4);
      FUN_1000488f0(4,(QByteArray *)&local_40);
      if (*(int *)local_40 != -1) {
        local_50 = local_40;
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          iVar1 = *(int *)local_40;
          UNLOCK();
          goto joined_r0x0001004a766b;
        }
        goto LAB_1004a7671;
      }
    }
    else {
      local_48[0] = 0;
      QByteArray::QByteArray((QByteArray *)&local_50,(char *)local_48,4);
      FUN_1000488f0(4,(QByteArray *)&local_50);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          iVar1 = *(int *)local_50;
          UNLOCK();
joined_r0x0001004a766b:
          local_31 = iVar1 != 0;
          if ((bool)local_31) goto LAB_1004a7680;
        }
LAB_1004a7671:
        QArrayData::deallocate(local_50,1,8);
      }
    }
  }
LAB_1004a7680:
  CVmTools::getVmSharedApplications();
  lVar11 = CVmSharedApplications::getWebApplications();
  cVar4 = CVmTools::isIsolatedVm();
  if (cVar4 != '\0') {
    uVar13 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    goto LAB_1004a77e9;
  }
  CVmTools::getVmSharedApplications();
  lVar12 = CVmSharedApplications::getWebApplications();
  if (lVar11 == 0) {
    return;
  }
  if (lVar12 == 0) {
    return;
  }
  CBaseNode::toString(SUB81(&local_58,0),(bool)((char)lVar11 + '\x10'));
  CBaseNode::toString(SUB81(&local_60,0),(bool)((char)lVar12 + '\x10'));
  cVar4 = operator==(&local_58,&local_60);
  bVar2 = 1;
  if (cVar4 != '\0') {
    bVar2 = CVmTools::isIsolatedVm();
    bVar3 = CVmTools::isIsolatedVm();
    bVar2 = bVar2 ^ bVar3;
  }
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a7763;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004a7763:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a7793;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1004a7793:
  if (bVar2 == 0) {
    return;
  }
  uVar6 = WebApplications::getWebBrowser();
  uVar7 = WebApplications::getFtpClient();
  uVar8 = WebApplications::getEmailClient();
  uVar9 = WebApplications::getRemoteAccess();
  uVar10 = WebApplications::getRss();
  uVar13 = WebApplications::getNewsgroups();
LAB_1004a77e9:
  FUN_1004a66e0(param_1,uVar6,uVar7,uVar8,uVar9,uVar10,uVar13);
  return;
}

