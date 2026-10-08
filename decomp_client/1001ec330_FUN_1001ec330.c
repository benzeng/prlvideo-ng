
void FUN_1001ec330(long param_1)

{
  QString *pQVar1;
  int *piVar2;
  QMapNodeBase *pQVar3;
  char cVar4;
  QVariant *pQVar5;
  undefined8 uVar6;
  CTaskGenericId *pCVar7;
  long lVar8;
  Data_conflict local_f8;
  undefined4 local_f0;
  QArrayData *local_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  QVariant local_c0 [2];
  CTaskGenericId local_a8 [24];
  QArrayData *local_90;
  QVariant local_88;
  QArrayData *local_78;
  undefined8 local_70;
  QVariant local_68;
  QArrayData *local_58;
  QMapNodeBase *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  pQVar1 = *(QString **)(param_1 + 0x10);
  uVar6 = 0;
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1dda77d);
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018f8c0(&local_48,uVar6);
  QString::arg(&local_38,&local_40,&local_48,0,0x20);
  CAbstractProgressOperation::setName(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ec3e0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001ec3e0:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ec410;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001ec410:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ec440;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001ec440:
  DLCItemInfo::load();
  if (*(long *)(param_1 + 0x48) != 0) {
    FileDownloadInfo::downloadedByFar();
  }
  CAbstractProgressOperation::setProgress((int)*(undefined8 *)(param_1 + 0x10));
  local_50 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_58 = (QArrayData *)QString::fromAscii_helper("bytesDownloaded",0xf);
  pQVar5 = (QVariant *)FUN_10008c590(&local_50,&local_58);
  local_70 = FileDownloadInfo::downloadedByFar();
  QVariant::QVariant(&local_68,4,&local_70,0);
  QVariant::operator=(pQVar5,&local_68);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ec50c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001ec50c:
  local_78 = (QArrayData *)QString::fromAscii_helper("bytesTotal",10);
  pQVar5 = (QVariant *)FUN_10008c590(&local_50,&local_78);
  QVariant::QVariant(&local_88,4,(void *)(param_1 + 0x48),0);
  QVariant::operator=(pQVar5,&local_88);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ec589;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1001ec589:
  CAbstractProgressOperation::setProgressData(*(QMap **)(param_1 + 0x10));
  pQVar1 = *(QString **)(param_1 + 0x10);
  FUN_1001ecaa0(&local_90,param_1);
  CAbstractProgressOperation::setDescription(pQVar1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ec5ee;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1001ec5ee:
  FUN_1001b8b80(local_a8,param_1 + 0x58,1);
  local_e8 = (QArrayData *)QString::fromAscii_helper("1onDowloadTaskStarted()",0x17);
  local_f0 = 0x80000000;
  local_f8.field7 = 0;
  FUN_100a1c600(&local_e0,param_1,&local_e8,&local_f8);
  QVariant::~QVariant((QVariant *)&local_f8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_29 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ec68f;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1001ec68f:
  uVar6 = CTaskManager::instance();
  CTaskManager::addTaskWatcher(uVar6,&local_e0,local_a8,0x22);
  pCVar7 = (CTaskGenericId *)CTaskManager::instance();
  cVar4 = CTaskManager::isTaskRunning(pCVar7);
  if (cVar4 != '\0') {
    pCVar7 = (CTaskGenericId *)CTaskManager::instance();
    lVar8 = CTaskManager::getTaskById(pCVar7);
    FUN_1001edd70(param_1,lVar8);
    CAbstractProgressOperation::setState(*(undefined8 *)(param_1 + 0x10),1);
    if (*(char *)(lVar8 + 0x70) != '\0') {
      FUN_1001edef0(param_1);
    }
  }
  QVariant::~QVariant(local_c0);
  piVar2 = (int *)CONCAT71(uStack_df,local_e0);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_29 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_29) && ((void *)CONCAT71(uStack_df,local_e0) != (void *)0x0)) {
      operator_delete((void *)CONCAT71(uStack_df,local_e0));
    }
  }
  CTaskGenericId::~CTaskGenericId(local_a8);
  pQVar3 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_e0 = 0;
    }
    if (*(long *)(local_50 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
  return;
}

