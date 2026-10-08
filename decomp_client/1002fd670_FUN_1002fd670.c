
void FUN_1002fd670(long param_1)

{
  undefined *puVar1;
  QObject *pQVar2;
  int *piVar3;
  CProgressDialog *this;
  int *piVar4;
  undefined1 uVar5;
  QPixmap *pQVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  QString *pQVar11;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QPixmap local_50 [39];
  undefined1 local_29;
  
  pQVar2 = operator_new(0x60);
  CBaseDialog::CBaseDialog((CBaseDialog *)pQVar2,0,0,0);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar4 = *(int **)(param_1 + 0x60);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x60);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x60) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x60));
      }
    }
    *(int **)(param_1 + 0x60) = piVar3;
    *(QObject **)(param_1 + 0x68) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_29 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar3);
    }
  }
  CWindowInterface::setCustomWindowFlags();
  QWidget::setWindowOpacity(0.0);
  iVar8 = 0;
  if ((*(long *)(param_1 + 0x60) != 0) && (iVar8 = 0, *(int *)(*(long *)(param_1 + 0x60) + 4) != 0))
  {
    iVar8 = (int)*(undefined8 *)(param_1 + 0x68);
  }
  QWidget::setFixedSize(iVar8,0);
  QWidget::show();
  this = operator_new(0x70);
  CProgressDialog::CProgressDialog(this,(QWidget *)0x0);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  piVar4 = *(int **)(param_1 + 0x28);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x28);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x28));
      }
    }
    *(int **)(param_1 + 0x28) = piVar3;
    *(CProgressDialog **)(param_1 + 0x30) = this;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_29 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar3);
    }
  }
  pQVar6 = (QPixmap *)0x0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (pQVar6 = (QPixmap *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    pQVar6 = *(QPixmap **)(param_1 + 0x30);
  }
  FUN_1001c8260(local_50,4);
  CProgressDialog::setPixmap(pQVar6);
  QPixmap::~QPixmap(local_50);
  pQVar11 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (pQVar11 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    pQVar11 = *(QString **)(param_1 + 0x30);
  }
  QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,0x1de7226);
  FUN_1001c72b0(&local_68);
  QString::arg(&local_58,&local_60,&local_68,0,0x20);
  puVar1 = PTR_shared_null_1021e1288;
  CProgressDialog::setText(pQVar11,&local_58);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002fd8ea;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_1002fd8ea:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002fd91a;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1002fd91a:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002fd94a;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002fd94a:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002fd97a;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1002fd97a:
  iVar8 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (iVar8 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    iVar8 = (int)*(undefined8 *)(param_1 + 0x30);
  }
  CProgressDialog::setRange(iVar8,0);
  CProgressDialog::hideCancelButton();
  uVar7 = false;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (uVar7 = false, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    uVar7 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  }
  uVar5 = false;
  CProgressDialog::setResumableOperation((bool)uVar7);
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (uVar5 = false, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    uVar5 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  }
  QDialog::setModal((bool)uVar5);
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x30);
  }
  QWidget::setWindowModality(uVar9,2);
  lVar10 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (lVar10 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)
     ) {
    lVar10 = *(long *)(param_1 + 0x30);
  }
  CWindowInterface::setCustomWindowFlags(lVar10 + 0x30,0xe1);
  QWidget::show();
  QWidget::raise();
  return;
}

