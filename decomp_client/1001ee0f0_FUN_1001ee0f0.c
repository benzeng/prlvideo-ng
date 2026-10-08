
void FUN_1001ee0f0(long param_1,int *param_2)

{
  QString *pQVar1;
  QMapNodeBase *pQVar2;
  QVariant *pQVar3;
  int *piVar4;
  QArrayData *local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QVariant local_88;
  QArrayData *local_78;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  undefined8 local_40;
  QMapNodeBase *local_38;
  undefined1 local_29;
  
  CAbstractProgressOperation::setState(*(undefined8 *)(param_1 + 0x10),1);
  CAbstractProgressOperation::setProgress((int)*(undefined8 *)(param_1 + 0x10));
  local_38 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  if (*(long *)(param_2 + 4) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_2 + 4);
  }
  piVar4 = param_2 + 2;
  if (*(long *)(param_2 + 2) == 0) {
    piVar4 = (int *)(param_1 + 0x48);
  }
  if (*param_2 != 100) {
    piVar4 = param_2 + 2;
  }
  local_40 = *(undefined8 *)piVar4;
  local_48 = (QArrayData *)QString::fromAscii_helper("bytesTotal",10);
  pQVar3 = (QVariant *)FUN_10008c590(&local_38,&local_48);
  QVariant::QVariant(&local_58,4,(int *)(param_1 + 0x48),0);
  QVariant::operator=(pQVar3,&local_58);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ee1da;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001ee1da:
  local_60 = (QArrayData *)QString::fromAscii_helper("bytesDownloaded",0xf);
  pQVar3 = (QVariant *)FUN_10008c590(&local_38,&local_60);
  QVariant::QVariant(&local_70,4,&local_40,0);
  QVariant::operator=(pQVar3,&local_70);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ee258;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001ee258:
  local_78 = (QArrayData *)QString::fromAscii_helper("eta",3);
  pQVar3 = (QVariant *)FUN_10008c590(&local_38,&local_78);
  QVariant::QVariant(&local_88,3,param_2 + 7,0);
  QVariant::operator=(pQVar3,&local_88);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ee2d6;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1001ee2d6:
  local_90 = (QArrayData *)QString::fromAscii_helper("rate",4);
  pQVar3 = (QVariant *)FUN_10008c590(&local_38,&local_90);
  QVariant::QVariant(&local_a0,3,param_2 + 6,0);
  QVariant::operator=(pQVar3,&local_a0);
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ee36c;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1001ee36c:
  CAbstractProgressOperation::setProgressData(*(QMap **)(param_1 + 0x10));
  pQVar1 = *(QString **)(param_1 + 0x10);
  FUN_1001ecaa0(&local_a8,param_1);
  CAbstractProgressOperation::setDescription(pQVar1);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ee3d1;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1001ee3d1:
  pQVar2 = local_38;
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
    if (*(long *)(local_38 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
  return;
}

