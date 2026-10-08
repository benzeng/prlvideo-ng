
bool FUN_1003e5180(QString *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  QString QVar2;
  QArrayData *pQVar3;
  char cVar4;
  int iVar5;
  
  lVar1 = *param_2;
  iVar5 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                     PTR_s_VmConfig_1021f1e00,0xffffffff,1);
  if (iVar5 != 0) {
    return false;
  }
                    /* WARNING: Load size is inaccurate */
  QVar2.field0_0x0 = param_1[3].field0_0x0[0x20];
  pQVar3 = (QArrayData *)*param_3;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    UNLOCK();
  }
  cVar4 = CVmConfiguration::deleteListItem(QVar2);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1003e5224;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1003e5224:
  if (cVar4 != '\0') {
    CMappingModel::addStorageToSubmit(param_1);
  }
  return cVar4 != '\0';
}

