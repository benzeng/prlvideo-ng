
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1002112a0(long param_1,long *param_2)

{
  int iVar1;
  CProgressDialog *this;
  int *piVar2;
  int *piVar3;
  QString *pQVar4;
  long *plVar5;
  QWidget *pQVar6;
  longlong lVar7;
  undefined8 uVar8;
  QArrayData *local_90;
  long local_88 [3];
  Connection local_70 [8];
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  long local_50 [3];
  int local_38;
  undefined1 local_31;
  
  local_38 = 100000;
  _PrlEvent_GetType(*param_2,&local_38);
  if (local_38 != 0x188a9) {
    return 0;
  }
  local_50[2] = 0;
  local_50[1] = 0;
  local_50[0] = *param_2;
  if (local_50[0] != 0) {
    _PrlHandle_AddRef();
  }
  iVar1 = FUN_10011d190(local_50,local_50 + 2,local_50 + 1);
  if (local_50[0] != 0) {
    _PrlHandle_Free();
  }
  if (iVar1 < 0) {
    return 0;
  }
  if (((*(long *)(param_1 + 0x238) != 0) && (*(int *)(*(long *)(param_1 + 0x238) + 4) != 0)) &&
     (*(long *)(param_1 + 0x240) != 0)) goto LAB_1002115e2;
  this = operator_new(0x70);
  pQVar6 = (QWidget *)0x0;
  if ((*(long *)(param_1 + 0x218) != 0) &&
     (pQVar6 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x218) + 4) != 0)) {
    pQVar6 = *(QWidget **)(param_1 + 0x220);
  }
  CProgressDialog::CProgressDialog(this,pQVar6);
  piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  piVar3 = *(int **)(param_1 + 0x238);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_31 = *piVar2 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x238);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_31 = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x238) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x238));
      }
    }
    *(int **)(param_1 + 0x238) = piVar2;
    *(CProgressDialog **)(param_1 + 0x240) = this;
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_31 = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar2);
    }
  }
  pQVar4 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x238) != 0) &&
     (pQVar4 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x238) + 4) != 0)) {
    pQVar4 = *(QString **)(param_1 + 0x240);
  }
  FUN_1001c72e0(&local_58);
  QWidget::setWindowTitle(pQVar4);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10021145a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10021145a:
  pQVar4 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x238) != 0) &&
     (pQVar4 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x238) + 4) != 0)) {
    pQVar4 = *(QString **)(param_1 + 0x240);
  }
  QMetaObject::tr((char *)&local_60,(char *)&PTR_staticMetaObject_102200d70,0x1ddbe9e);
  local_68 = (QArrayData *)PTR_shared_null_1021e1288;
  CProgressDialog::setText(pQVar4,&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002114e5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002114e5:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100211515;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100211515:
  iVar1 = 0;
  if ((*(long *)(param_1 + 0x238) != 0) &&
     (iVar1 = 0, *(int *)(*(long *)(param_1 + 0x238) + 4) != 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x240);
  }
  uVar8 = 0;
  CProgressDialog::setRange(iVar1,0);
  if ((*(long *)(param_1 + 0x238) != 0) &&
     (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x238) + 4) != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x240);
  }
  iVar1 = 0;
  QObject::connect(local_70,uVar8,"2canceled()",param_1,"1onCommitConfigCanceled()",0);
  QMetaObject::Connection::~Connection(local_70);
  if ((*(long *)(param_1 + 0x238) != 0) &&
     (iVar1 = 0, *(int *)(*(long *)(param_1 + 0x238) + 4) != 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x240);
  }
  plVar5 = (long *)0x0;
  CProgressDialog::setValue(iVar1);
  if ((*(long *)(param_1 + 0x238) != 0) &&
     (plVar5 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x238) + 4) != 0)) {
    plVar5 = *(long **)(param_1 + 0x240);
  }
  (**(code **)(*plVar5 + 0x1a0))(plVar5);
LAB_1002115e2:
  local_88[2] = 0;
  local_88[1] = 0;
  local_88[0] = *param_2;
  if (local_88[0] != 0) {
    _PrlHandle_AddRef();
  }
  FUN_10011d190(local_88,local_88 + 2,local_88 + 1);
  if (local_88[0] != 0) {
    _PrlHandle_Free();
  }
  lVar7 = 0;
  if ((*(long *)(param_1 + 0x248) != 0) &&
     (lVar7 = 0, *(int *)(*(long *)(param_1 + 0x248) + 4) != 0)) {
    lVar7 = *(longlong *)(param_1 + 0x250);
  }
  CTimeEstimator::getTextForProgress((longlong)&local_90,lVar7);
  iVar1 = 0;
  if ((*(long *)(param_1 + 0x238) != 0) &&
     (iVar1 = 0, *(int *)(*(long *)(param_1 + 0x238) + 4) != 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x240);
  }
  CProgressDialog::setValue(iVar1);
  pQVar4 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x238) != 0) &&
     (pQVar4 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x238) + 4) != 0)) {
    pQVar4 = *(QString **)(param_1 + 0x240);
  }
  CProgressDialog::setDescription(pQVar4);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      UNLOCK();
      if (*(int *)local_90 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_90,2,8);
  }
  return 0;
}

