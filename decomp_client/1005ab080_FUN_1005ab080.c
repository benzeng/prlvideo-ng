
void FUN_1005ab080(long param_1,long param_2)

{
  QMapNodeBase *pQVar1;
  QString *pQVar2;
  int iVar3;
  QMap *pQVar4;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  QMapNodeBase *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  iVar3 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (iVar3 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    iVar3 = (int)*(undefined8 *)(param_1 + 0x60);
  }
  CAbstractProgressOperation::setProgress(iVar3);
  pQVar2 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (pQVar2 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
    pQVar2 = *(QString **)(param_1 + 0x60);
  }
  FUN_1005ab3a0(&local_38,param_2);
  CAbstractProgressOperation::setDescription(pQVar2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ab115;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005ab115:
  local_40 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_48 = (QArrayData *)QString::fromAscii_helper("total",5);
  QVariant::QVariant(&local_58,*(ulonglong *)(param_2 + 0x10));
  FUN_10008d1b0(&local_40,&local_48,&local_58);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ab18c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005ab18c:
  local_60 = (QArrayData *)QString::fromAscii_helper("downloaded",10);
  QVariant::QVariant(&local_70,*(ulonglong *)(param_2 + 8));
  FUN_10008d1b0(&local_40,&local_60,&local_70);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ab1f8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005ab1f8:
  pQVar4 = (QMap *)0x0;
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (pQVar4 = (QMap *)0x0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
    pQVar4 = *(QMap **)(param_1 + 0x60);
  }
  CAbstractProgressOperation::setProgressData(pQVar4);
  pQVar1 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_29 = 0;
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
  return;
}

