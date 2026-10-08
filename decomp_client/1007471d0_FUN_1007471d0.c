
void FUN_1007471d0(QObject *param_1)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CTaskGenericId *pCVar5;
  void *pvVar6;
  QObject *pQVar7;
  long local_78;
  int *local_70;
  int *local_68;
  long *local_60;
  long *local_58;
  int local_50;
  CTaskGenericId local_48 [31];
  undefined1 local_29;
  
  pCVar5 = (CTaskGenericId *)CTaskManager::instance();
  uVar3 = FUN_1002dabc0();
  uVar4 = FUN_1002dab50();
  FUN_1002dc7d0(local_48,uVar3,uVar4);
  cVar2 = CTaskManager::isTaskRunning(pCVar5);
  CTaskGenericId::~CTaskGenericId(local_48);
  if (cVar2 != '\0') {
    return;
  }
  CTaskManager::instance();
  CTaskManager::getRunningTasks((uint)&local_70);
  FUN_100033e80(&local_68,&local_70);
  local_60 = (long *)(local_68 + (long)local_68[2] * 2 + 4);
  local_58 = (long *)(local_68 + (long)local_68[3] * 2 + 4);
  local_50 = 1;
  if (*local_70 == -1) {
LAB_1007472c3:
    for (; local_60 != local_58; local_60 = local_60 + 1) {
      lVar1 = *(long *)*local_60;
      pQVar7 = (QObject *)0x0;
      if ((lVar1 != 0) && (pQVar7 = (QObject *)0x0, *(int *)(lVar1 + 4) != 0)) {
        pQVar7 = (QObject *)((long *)*local_60)[1];
      }
      QObject::disconnect(pQVar7,(char *)0x0,param_1,(char *)0x0);
      local_50 = 1;
    }
  }
  else {
    if (*local_70 == 0) {
LAB_10074728f:
      FUN_100034010(&local_70);
    }
    else {
      LOCK();
      *local_70 = *local_70 + -1;
      local_29 = *local_70 != 0;
      UNLOCK();
      if (!(bool)local_29) goto LAB_10074728f;
    }
    if (local_50 != 0) goto LAB_1007472c3;
  }
  if (*local_68 != -1) {
    if (*local_68 != 0) {
      LOCK();
      *local_68 = *local_68 + -1;
      local_29 = *local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10074735a;
    }
    FUN_100034010(&local_68,local_68);
  }
LAB_10074735a:
  pvVar6 = operator_new(0x20);
  FUN_1002dacc0(pvVar6);
  QObject::connect(&local_78,pvVar6,"2taskFinished( PRL_RESULT )",param_1,
                   "1onTaskRequestProductsPermissionsFinished( PRL_RESULT )",0);
  if (local_78 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  CAbstractTask::execute();
  return;
}

