
int FUN_1002bbb80(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  CProgressDialog *this;
  int *piVar4;
  int *piVar5;
  long lVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  QWidget *pQVar9;
  undefined1 uVar10;
  long *plVar11;
  QString *pQVar12;
  long local_50;
  long local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  lVar1 = param_1 + 0x30;
  iVar3 = FUN_100d7dcb0(param_1 + 0x18,param_1 + 0x20,lVar1,1,0);
  if (iVar3 < 0) {
    return iVar3;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  lVar6 = *(long *)(param_1 + 0x50);
  if (((lVar6 == 0) || (*(int *)(lVar6 + 4) == 0)) || (*(long *)(param_1 + 0x58) == 0)) {
    this = operator_new(0x70);
    pQVar9 = (QWidget *)0x0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pQVar9 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      pQVar9 = *(QWidget **)(param_1 + 0x48);
    }
    CProgressDialog::CProgressDialog(this,pQVar9);
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
    piVar5 = *(int **)(param_1 + 0x50);
    if (piVar5 != piVar4) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        local_29 = *piVar4 != 0;
        UNLOCK();
        piVar5 = *(int **)(param_1 + 0x50);
      }
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        local_29 = *piVar5 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x50));
        }
      }
      *(int **)(param_1 + 0x50) = piVar4;
      *(CProgressDialog **)(param_1 + 0x58) = this;
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar4);
      }
    }
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x58);
    }
    QWidget::setAttribute(uVar8,0x37,1);
    uVar10 = false;
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (uVar10 = false, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
      uVar10 = (undefined1)*(undefined8 *)(param_1 + 0x58);
    }
    uVar7 = false;
    CProgressDialog::setResumableOperation((bool)uVar10);
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (uVar7 = false, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
      uVar7 = (undefined1)*(undefined8 *)(param_1 + 0x58);
    }
    pQVar12 = (QString *)0x0;
    CProgressDialog::setRejectOnCancel((bool)uVar7);
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (pQVar12 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
      pQVar12 = *(QString **)(param_1 + 0x58);
    }
    QMetaObject::tr((char *)&local_38,(char *)&PTR_staticMetaObject_102208250,0x1de3d42);
    local_40 = (QArrayData *)PTR_shared_null_1021e1288;
    CProgressDialog::setText(pQVar12,&local_38);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002bbd6d;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1002bbd6d:
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002bbd9d;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_1002bbd9d:
    iVar3 = 0;
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (iVar3 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x58);
    }
    uVar8 = 0;
    CProgressDialog::setRange(iVar3,0);
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x58);
    }
    QObject::connect(&local_48,uVar8,"2canceled()",param_1,"1onProgressCancel()",0);
    if (local_48 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      QObject::connect(&local_50,lVar1,"2finished(int,QProcess::ExitStatus)",param_1,
                       "1onRepackFinished(int,QProcess::ExitStatus)",0);
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      QObject::connect(&local_50,lVar1,"2finished(int,QProcess::ExitStatus)",param_1,
                       "1onRepackFinished(int,QProcess::ExitStatus)",0);
      if ((cVar2 != '\0') && (local_50 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    lVar6 = *(long *)(param_1 + 0x50);
    iVar3 = 0;
    if (lVar6 == 0) goto LAB_1002bbea5;
  }
  iVar3 = 0;
  if (*(int *)(lVar6 + 4) != 0) {
    iVar3 = (int)*(undefined8 *)(param_1 + 0x58);
  }
LAB_1002bbea5:
  CProgressDialog::setValue(iVar3);
  plVar11 = (long *)0x0;
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (plVar11 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
    plVar11 = *(long **)(param_1 + 0x58);
  }
  (**(code **)(*plVar11 + 0x1a0))();
  return 0;
}

