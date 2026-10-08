
void FUN_1002ce3d0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  QWidget *pQVar7;
  CProgressDialog *this;
  int *piVar8;
  int *piVar9;
  QString *pQVar10;
  QString local_68;
  QArrayData *local_60;
  long local_58;
  int *local_50 [2];
  int *local_40;
  long local_38;
  undefined1 local_29;
  
  uVar5 = FUN_100152280();
  lVar1 = param_1 + 0x18;
  lVar6 = FUN_1001548f0(uVar5,lVar1);
  if (lVar6 == 0) {
    return;
  }
  uVar5 = FUN_100152280();
  lVar6 = FUN_1001548f0(uVar5,lVar1);
  if (lVar6 == 0) {
LAB_1002ce440:
    uVar5 = FUN_100370280();
    uVar2 = DAT_100e152b8;
    FUN_100370e30(&local_40,uVar5,lVar1,DAT_100e152b8);
    pQVar7 = (QWidget *)0x0;
    if (local_40 != (int *)0x0) {
      pQVar7 = (QWidget *)0x0;
      if ((local_40[1] != 0) && (pQVar7 = (QWidget *)0x0, local_38 != 0)) {
        uVar5 = FUN_100370280();
        FUN_100370e30(local_50,uVar5,lVar1,uVar2);
        pQVar7 = (QWidget *)QWidget::window();
        if (local_50[0] != (int *)0x0) {
          LOCK();
          *local_50[0] = *local_50[0] + -1;
          local_29 = *local_50[0] != 0;
          UNLOCK();
          if ((!(bool)local_29) && (local_50[0] != (int *)0x0)) {
            operator_delete(local_50[0]);
          }
        }
      }
      if (local_40 != (int *)0x0) {
        LOCK();
        *local_40 = *local_40 + -1;
        local_29 = *local_40 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_40 != (int *)0x0)) {
          operator_delete(local_40);
        }
      }
    }
  }
  else {
    uVar5 = FUN_100152280();
    uVar5 = FUN_1001548f0(uVar5,lVar1);
    uVar5 = FUN_10018c280(uVar5);
    iVar4 = FUN_100319ae0(uVar5);
    pQVar7 = (QWidget *)0x0;
    if (iVar4 != 3) goto LAB_1002ce440;
  }
  this = operator_new(0x70);
  CProgressDialog::CProgressDialog(this,pQVar7);
  piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  piVar9 = *(int **)(param_1 + 0x50);
  if (piVar9 != piVar8) {
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      local_29 = *piVar8 != 0;
      UNLOCK();
      piVar9 = *(int **)(param_1 + 0x50);
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_29 = *piVar9 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x50));
      }
    }
    *(int **)(param_1 + 0x50) = piVar8;
    *(CProgressDialog **)(param_1 + 0x58) = this;
  }
  if (piVar8 != (int *)0x0) {
    LOCK();
    *piVar8 = *piVar8 + -1;
    local_29 = *piVar8 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar8);
    }
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x50) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
  }
  QObject::connect(&local_58,uVar5,"2canceled()",param_1,"1cancelConvertaton()",0);
  if (local_58 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x50) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
  }
  QWidget::setAttribute(uVar5,0x37,1);
  pQVar10 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (pQVar10 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
    pQVar10 = *(QString **)(param_1 + 0x58);
  }
  FUN_1001c72e0(&local_60);
  QWidget::setWindowTitle(pQVar10);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ce656;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1002ce656:
  pQVar10 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (pQVar10 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
    pQVar10 = *(QString **)(param_1 + 0x58);
  }
  QMetaObject::tr((char *)&local_68,(char *)&PTR_staticMetaObject_1022099e0,0x1de4a78);
  puVar3 = PTR_shared_null_1021e1288;
  CProgressDialog::setText(pQVar10,&local_68);
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_29 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ce6d9;
    }
    QArrayData::deallocate((QArrayData *)puVar3,2,8);
  }
LAB_1002ce6d9:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ce709;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1002ce709:
  iVar4 = 0;
  if ((*(long *)(param_1 + 0x50) != 0) && (iVar4 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0))
  {
    iVar4 = (int)*(undefined8 *)(param_1 + 0x58);
  }
  CProgressDialog::setRange(iVar4,0);
  if (pQVar7 == (QWidget *)0x0) {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x58);
    }
    QWidget::setWindowModality(uVar5,2);
  }
  QWidget::show();
  return;
}

