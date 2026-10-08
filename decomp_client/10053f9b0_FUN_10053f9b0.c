
void FUN_10053f9b0(undefined8 param_1)

{
  int iVar1;
  Data *pDVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Data *pDVar6;
  long lVar7;
  long local_48;
  Data *local_40;
  undefined1 local_31;
  
  pvVar3 = operator_new(0x60);
  uVar4 = FUN_100152280();
  uVar4 = FUN_1001554a0(uVar4);
  uVar5 = QWidget::window();
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1002880e0(pvVar3,uVar4,2,uVar5,&local_40);
  pDVar2 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053fa7f;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar7 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_40 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar6 != (void *)0x0) {
          operator_delete(*(void **)pDVar6);
        }
        pDVar6 = pDVar6 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_10053fa7f:
  QObject::connect(&local_48,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1onCreateCustomPasswordTaskFinished(PRL_RESULT)",0);
  if (local_48 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  CAbstractTask::execute();
  return;
}

