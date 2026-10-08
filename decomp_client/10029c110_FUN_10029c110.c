
void FUN_10029c110(long param_1,QString *param_2)

{
  CProgressDialog *this;
  int *piVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  QWidget *pQVar6;
  int iVar7;
  QString *pQVar8;
  long local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar3 = *(long *)(param_1 + 0x40);
  if (((lVar3 == 0) || (*(int *)(lVar3 + 4) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
    this = operator_new(0x70);
    pQVar6 = (QWidget *)0x0;
    if ((DAT_102310940 != 0) && (pQVar6 = (QWidget *)0x0, *(int *)(DAT_102310940 + 4) != 0)) {
      pQVar6 = DAT_102310948;
    }
    CProgressDialog::CProgressDialog(this,pQVar6);
    piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
    piVar2 = *(int **)(param_1 + 0x40);
    if (piVar2 != piVar1) {
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        local_29 = *piVar1 != 0;
        UNLOCK();
        piVar2 = *(int **)(param_1 + 0x40);
      }
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        local_29 = *piVar2 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x40));
        }
      }
      *(int **)(param_1 + 0x40) = piVar1;
      *(CProgressDialog **)(param_1 + 0x48) = this;
    }
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_29 = *piVar1 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar1);
      }
    }
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x48);
    }
    QWidget::setAttribute(uVar4,0x37,1);
    pQVar8 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pQVar8 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      pQVar8 = *(QString **)(param_1 + 0x48);
    }
    local_38 = (QArrayData *)PTR_shared_null_1021e1288;
    CProgressDialog::setText(pQVar8,param_2);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10029c269;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_10029c269:
    iVar7 = 0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (iVar7 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      iVar7 = (int)*(undefined8 *)(param_1 + 0x48);
    }
    uVar4 = 0;
    CProgressDialog::setRange(iVar7,0);
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x48);
    }
    QObject::connect(&local_40,uVar4,"2canceled()",param_1,"1terminate()",0);
    if (local_40 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    lVar3 = *(long *)(param_1 + 0x40);
    iVar7 = 0;
    if (lVar3 == 0) goto LAB_10029c2f6;
  }
  iVar7 = 0;
  if (*(int *)(lVar3 + 4) != 0) {
    iVar7 = (int)*(undefined8 *)(param_1 + 0x48);
  }
LAB_10029c2f6:
  plVar5 = (long *)0x0;
  CProgressDialog::setValue(iVar7);
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (plVar5 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
    plVar5 = *(long **)(param_1 + 0x48);
  }
  (**(code **)(*plVar5 + 0x1a0))(plVar5);
  return;
}

