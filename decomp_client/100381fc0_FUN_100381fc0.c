
void FUN_100381fc0(QWidget *param_1,undefined8 param_2)

{
  long lVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  QVBoxLayout *this;
  undefined8 uVar5;
  QGraphicsScene *pQVar6;
  undefined1 auVar7 [16];
  QArrayData *local_50;
  Connection local_48 [8];
  Connection local_40 [8];
  Connection local_38 [15];
  undefined1 local_29;
  
  QDialog::QDialog((QDialog *)param_1,param_2,0);
  *(undefined ***)param_1 = &PTR_FUN_10220f190;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10220f368;
  pQVar2 = operator_new(0x48);
  QObject::QObject(pQVar2,(QObject *)0x0);
  *(undefined **)pQVar2 = &DAT_102273b70;
  *(QWidget **)(pQVar2 + 0x10) = param_1;
  *(undefined8 *)(pQVar2 + 0x30) = 0;
  *(undefined8 *)(pQVar2 + 0x28) = 0;
  *(undefined8 *)(pQVar2 + 0x20) = 0;
  *(undefined8 *)(pQVar2 + 0x18) = 0;
  auVar7._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar7._0_8_ = PTR_shared_null_1021e1288;
  auVar7._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(pQVar2 + 0x38) = auVar7;
  *(QObject **)(param_1 + 0x30) = pQVar2;
  QWidget::setWindowFlags(param_1,0x2000803);
  QWidget::setAttribute(param_1,0x78,1);
  lVar1 = *(long *)(param_1 + 0x30);
  pQVar2 = operator_new(0xa0);
  FUN_100386200(pQVar2,param_1);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar4 = *(int **)(lVar1 + 0x18);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(lVar1 + 0x18);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(lVar1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(lVar1 + 0x18));
      }
    }
    *(int **)(lVar1 + 0x18) = piVar3;
    *(QObject **)(lVar1 + 0x20) = pQVar2;
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
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x18);
  uVar5 = 0;
  if ((lVar1 != 0) && (uVar5 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
  }
  QObject::connect(local_38,uVar5,"2finished()",param_1,"1onFinished()",0);
  QMetaObject::Connection::~Connection(local_38);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x18);
  uVar5 = 0;
  if ((lVar1 != 0) && (uVar5 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
  }
  QObject::connect(local_40,uVar5,"2vmSelected(QString,bool)",param_1,"2vmSelected(QString,bool)",0)
  ;
  QMetaObject::Connection::~Connection(local_40);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x18);
  uVar5 = 0;
  if ((lVar1 != 0) && (uVar5 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
  }
  QObject::connect(local_48,uVar5,"2sceneRectChanged(QRectF)",param_1,"1onSceneRectChanged(QRectF)",
                   0);
  QMetaObject::Connection::~Connection(local_48);
  lVar1 = *(long *)(param_1 + 0x30);
  pQVar2 = operator_new(0x30);
  FUN_100389b30(pQVar2,param_1);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar4 = *(int **)(lVar1 + 0x28);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(lVar1 + 0x28);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(lVar1 + 0x28) != (void *)0x0)) {
        operator_delete(*(void **)(lVar1 + 0x28));
      }
    }
    *(int **)(lVar1 + 0x28) = piVar3;
    *(QObject **)(lVar1 + 0x30) = pQVar2;
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
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
  pQVar6 = (QGraphicsScene *)0x0;
  if ((lVar1 != 0) && (pQVar6 = (QGraphicsScene *)0x0, *(int *)(lVar1 + 4) != 0)) {
    pQVar6 = *(QGraphicsScene **)(*(long *)(param_1 + 0x30) + 0x30);
  }
  QGraphicsView::setScene(pQVar6);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
  uVar5 = 0;
  if ((lVar1 != 0) && (uVar5 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30);
  }
  QWidget::setFocusPolicy(uVar5,0xb);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
  uVar5 = 0;
  if ((lVar1 != 0) && (uVar5 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30);
  }
  QWidget::setFocus(uVar5,7);
  this = operator_new(0x20);
  QVBoxLayout::QVBoxLayout(this,param_1);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
  uVar5 = 0;
  if ((lVar1 != 0) && (uVar5 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30);
  }
  QBoxLayout::addWidget(this,uVar5,0,0);
  QLayout::setMargin((int)this);
  QMetaObject::tr((char *)&local_50,(char *)&PTR_staticMetaObject_10220f150,0x1defe40);
  QWidget::setWindowTitle((QString *)param_1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

