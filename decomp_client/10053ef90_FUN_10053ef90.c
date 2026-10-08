
void FUN_10053ef90(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  Data *pDVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Data *pDVar7;
  long lVar8;
  long local_48;
  Data *local_40;
  undefined1 local_31;
  
  pvVar4 = operator_new(0x60);
  lVar8 = *(long *)(param_1 + 0x30);
  uVar6 = 0;
  if ((*(long *)(lVar8 + 0x38) != 0) && (uVar6 = 0, *(int *)(*(long *)(lVar8 + 0x38) + 4) != 0)) {
    uVar6 = *(undefined8 *)(lVar8 + 0x40);
  }
  uVar1 = *(undefined1 *)(*(long *)(lVar8 + 0x40) + 0x13c);
  uVar5 = QWidget::window();
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1002880e0(pvVar4,uVar6,uVar1,uVar5,&local_40);
  pDVar3 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053f06f;
    }
    iVar2 = *(int *)(local_40 + 0xc);
    if (iVar2 != *(int *)(local_40 + 8)) {
      lVar8 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar2 * -8;
      pDVar7 = local_40 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar7 != (void *)0x0) {
          operator_delete(*(void **)pDVar7);
        }
        pDVar7 = pDVar7 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_10053f06f:
  QObject::connect(&local_48,pvVar4,"2taskFinished(PRL_RESULT)",param_1,
                   "1onCreateCustomPasswordTaskFinished(PRL_RESULT)",0);
  if (local_48 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  CAbstractTask::execute();
  return;
}

