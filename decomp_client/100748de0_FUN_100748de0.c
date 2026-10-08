
void FUN_100748de0(QObject *param_1,QObject *param_2)

{
  long lVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  QObject *pQVar5;
  long local_40;
  long local_38;
  long local_30;
  undefined1 local_21;
  
  if (param_2 == (QObject *)0x0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x58);
  pQVar5 = (QObject *)0x0;
  if ((lVar1 != 0) && (pQVar5 = (QObject *)0x0, *(int *)(lVar1 + 4) != 0)) {
    pQVar5 = *(QObject **)(param_1 + 0x60);
  }
  if (pQVar5 == param_2) {
    return;
  }
  pQVar5 = (QObject *)0x0;
  if ((lVar1 != 0) && (pQVar5 = (QObject *)0x0, *(int *)(lVar1 + 4) != 0)) {
    pQVar5 = *(QObject **)(param_1 + 0x60);
  }
  QObject::disconnect(pQVar5,(char *)0x0,param_1,(char *)0x0);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  piVar4 = *(int **)(param_1 + 0x58);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x58);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x58));
      }
    }
    *(int **)(param_1 + 0x58) = piVar3;
    *(QObject **)(param_1 + 0x60) = param_2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_21 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar3);
    }
  }
  QObject::connect(&local_30,param_2,"2urlChanged(const QUrl&)",param_1,
                   "1onPageUrlChanged(const QUrl&)",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,param_2,"2loadStarted()",param_1,"1onPageLoadStarted()",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,param_2,"2loadStarted()",param_1,"1onPageLoadStarted()",0);
    if ((cVar2 != '\0') && (local_38 != 0)) {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      QObject::connect(&local_40,param_2,"2loadFinished(bool)",param_1,"1onPageLoadFinished(bool)",0
                      );
      if ((cVar2 != '\0') && (local_40 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100748fc3;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  QObject::connect(&local_40,param_2,"2loadFinished(bool)",param_1,"1onPageLoadFinished(bool)",0);
LAB_100748fc3:
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}

