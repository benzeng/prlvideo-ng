
undefined8 FUN_100295400(long param_1)

{
  char cVar1;
  QObject *pQVar2;
  int *piVar3;
  undefined8 uVar4;
  bool bVar5;
  int *local_c8;
  QObject *local_c0;
  long local_b8;
  int *local_b0;
  QObject *local_a8;
  long local_a0;
  int *local_98;
  QObject *local_90;
  long local_88;
  int *local_80;
  QObject *local_78;
  long local_70;
  int *local_68;
  QObject *local_60;
  long local_58;
  int *local_50;
  QObject *local_48;
  long local_40;
  undefined1 local_31;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  pQVar2 = (QObject *)FUN_1001603f0(uVar4);
  cVar1 = '\x01';
  if (pQVar2 != (QObject *)0x0) {
    cVar1 = '\0';
    QObject::connect(&local_40,pQVar2,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onRequestCompleted(PRL_RESULT)",0);
    if (local_40 != 0) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    local_50 = piVar3;
    local_48 = pQVar2;
    FUN_100295d10(param_1 + 0x28,&local_50);
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_31 = *piVar3 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar3);
      }
    }
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  pQVar2 = (QObject *)FUN_100161ad0(uVar4);
  if (pQVar2 != (QObject *)0x0) {
    QObject::connect(&local_58,pQVar2,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onRequestCompleted(PRL_RESULT)",0);
    bVar5 = cVar1 != '\0';
    cVar1 = '\0';
    if (bVar5) {
      if (local_58 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    local_68 = piVar3;
    local_60 = pQVar2;
    FUN_100295d10(param_1 + 0x28,&local_68);
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_31 = *piVar3 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar3);
      }
    }
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  pQVar2 = (QObject *)FUN_100161a10(uVar4);
  if (pQVar2 != (QObject *)0x0) {
    QObject::connect(&local_70,pQVar2,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onRequestCompleted(PRL_RESULT)",0);
    bVar5 = cVar1 != '\0';
    cVar1 = '\0';
    if (bVar5) {
      if (local_70 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    local_80 = piVar3;
    local_78 = pQVar2;
    FUN_100295d10(param_1 + 0x28,&local_80);
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_31 = *piVar3 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar3);
      }
    }
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  pQVar2 = (QObject *)FUN_1001604b0(uVar4);
  if (pQVar2 != (QObject *)0x0) {
    QObject::connect(&local_88,pQVar2,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onRequestCompleted(PRL_RESULT)",0);
    bVar5 = cVar1 != '\0';
    cVar1 = '\0';
    if (bVar5) {
      if (local_88 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_88);
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    local_98 = piVar3;
    local_90 = pQVar2;
    FUN_100295d10(param_1 + 0x28,&local_98);
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_31 = *piVar3 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar3);
      }
    }
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  pQVar2 = (QObject *)FUN_100177f40(uVar4);
  if (pQVar2 != (QObject *)0x0) {
    QObject::connect(&local_a0,pQVar2,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onRequestCompleted(PRL_RESULT)",0);
    bVar5 = cVar1 != '\0';
    cVar1 = '\0';
    if (bVar5) {
      if (local_a0 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_a0);
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    local_b0 = piVar3;
    local_a8 = pQVar2;
    FUN_100295d10(param_1 + 0x28,&local_b0);
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_31 = *piVar3 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar3);
      }
    }
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  pQVar2 = (QObject *)FUN_1001781c0(uVar4);
  if (pQVar2 != (QObject *)0x0) {
    QObject::connect(&local_b8,pQVar2,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onRequestCompleted(PRL_RESULT)",0);
    if ((cVar1 != '\0') && (local_b8 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_b8);
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    local_c8 = piVar3;
    local_c0 = pQVar2;
    FUN_100295d10(param_1 + 0x28,&local_c8);
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_31 = *piVar3 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar3);
      }
    }
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}

