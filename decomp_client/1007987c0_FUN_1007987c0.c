
void FUN_1007987c0(QMap *param_1,long param_2)

{
  QMapNodeBase *pQVar1;
  QVariant *pQVar2;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QVariant local_80;
  QArrayData *local_70;
  QVariant local_68;
  QArrayData *local_58;
  QVariant local_50;
  QArrayData *local_40;
  QMapNodeBase *local_38;
  undefined1 local_29;
  
  local_38 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_40 = (QArrayData *)QString::fromAscii_helper("bytesDownloaded",0xf);
  pQVar2 = (QVariant *)FUN_10008c590(&local_38,&local_40);
  QVariant::QVariant(&local_50,5,(void *)(param_2 + 8),0);
  QVariant::operator=(pQVar2,&local_50);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10079886c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10079886c:
  local_58 = (QArrayData *)QString::fromAscii_helper("bytesTotal",10);
  pQVar2 = (QVariant *)FUN_10008c590(&local_38,&local_58);
  QVariant::QVariant(&local_68,5,(void *)(param_2 + 0x10),0);
  QVariant::operator=(pQVar2,&local_68);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007988ea;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007988ea:
  local_70 = (QArrayData *)QString::fromAscii_helper("eta",3);
  pQVar2 = (QVariant *)FUN_10008c590(&local_38,&local_70);
  QVariant::QVariant(&local_80,3,(void *)(param_2 + 0x1c),0);
  QVariant::operator=(pQVar2,&local_80);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100798968;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100798968:
  local_88 = (QArrayData *)QString::fromAscii_helper("rate",4);
  pQVar2 = (QVariant *)FUN_10008c590(&local_38,&local_88);
  QVariant::QVariant(&local_98,3,(void *)(param_2 + 0x18),0);
  QVariant::operator=(pQVar2,&local_98);
  QVariant::~QVariant(&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007989ef;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1007989ef:
  CAbstractProgressOperation::setProgressData(param_1);
  CAbstractProgressOperation::setProgress((int)param_1);
  FUN_1007990b0(&local_a8,param_1);
  CAbstractProgressOperation::setName((QString *)param_1);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100798a69;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100798a69:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100798a9f;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100798a9f:
  FUN_1007990b0(&local_b8,param_1);
  CAbstractProgressOperation::setDescription((QString *)param_1);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100798af3;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100798af3:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100798b29;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100798b29:
  pQVar1 = local_38;
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
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
  return;
}

