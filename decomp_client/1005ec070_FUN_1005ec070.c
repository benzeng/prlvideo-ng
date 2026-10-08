
void FUN_1005ec070(long param_1,long param_2)

{
  char cVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  long lVar4;
  QObject *pQVar5;
  Connection local_50 [8];
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  if (param_2 == 0) {
    return;
  }
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  uVar3 = FUN_1005ec990(param_1 + 0x38);
  FUN_1005b89d0(&local_48,uVar3);
  FUN_100191030(local_40,&local_48);
  lVar4 = CTaskManager::getTaskById(pCVar2);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005ec0fd;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005ec0fd:
  if (lVar4 != 0) {
    cVar1 = FUN_10021a600(lVar4);
    if (cVar1 == '\0') {
      QObject::connect(local_50,lVar4,"2osImageDownloadWillStart()",param_1,"1onOsDownloadStarted()"
                       ,0);
      QMetaObject::Connection::~Connection(local_50);
    }
    else {
      CAbstractWizardPage::wizardModel();
      pQVar5 = (QObject *)CAbstractWizardModel::wizardCtrl();
      QTimer::singleShot(500,pQVar5,"1finish()");
    }
  }
  return;
}

