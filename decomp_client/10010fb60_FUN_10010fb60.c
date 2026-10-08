
void FUN_10010fb60(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  Data *pDVar5;
  Data *local_40;
  Data *local_38;
  undefined1 local_29;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar2 = CVmCommonOptions::getOsType();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar3 = CVmCommonOptions::getOsVersion();
  FUN_100129290(&local_38,param_1);
  iVar1 = *(int *)(local_38 + 8);
  if (iVar1 != *(int *)(local_38 + 0xc)) {
    pDVar5 = local_38 + (long)iVar1 * 8 + 0x10;
    lVar4 = (long)*(int *)(local_38 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if (*(uint *)pDVar5 == uVar2) {
        FUN_100129340(&local_40,param_1,uVar2 & 0xff);
        iVar1 = *(int *)(local_40 + 8);
        if (iVar1 == *(int *)(local_40 + 0xc)) goto LAB_10010fc4f;
        pDVar5 = local_40 + (long)iVar1 * 8 + 0x10;
        lVar4 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar1 * -8;
        goto LAB_10010fc40;
      }
      pDVar5 = pDVar5 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  goto LAB_10010fca7;
  while( true ) {
    pDVar5 = pDVar5 + 8;
    lVar4 = lVar4 + -8;
    if (lVar4 == 0) break;
LAB_10010fc40:
    if (*(int *)pDVar5 == iVar3) goto switchD_10010fc6d_default;
  }
LAB_10010fc4f:
  if ((int)uVar2 < 0xff) {
    switch(uVar2) {
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    case 0xb:
      break;
    case 0xc:
      break;
    case 0xd:
      break;
    case 0xe:
    }
  }
switchD_10010fc6d_default:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10010fca7;
    }
    QListData::dispose(local_40);
  }
LAB_10010fca7:
  CVmConfiguration::getVmSettings();
  uVar2 = CVmSettings::getVmCommonOptions();
  CVmCommonOptions::setOsType(uVar2);
  CVmConfiguration::getVmSettings();
  uVar2 = CVmSettings::getVmCommonOptions();
  CVmCommonOptions::setOsVersion(uVar2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QListData::dispose(local_38);
  }
  return;
}

