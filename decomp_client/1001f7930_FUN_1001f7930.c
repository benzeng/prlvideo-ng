
void FUN_1001f7930(long *param_1,int param_2)

{
  QArrayData *pQVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  QVariant local_58;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  if (((param_1[7] != 0) && (*(int *)(param_1[7] + 4) != 0)) && (param_1[8] != 0)) {
    QWidget::close();
  }
  QObject::sender();
  lVar3 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001001f7b33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    return;
  }
  if ((-1 < param_2) || (param_2 == -0x7ffffd8b)) goto LAB_1001f7af3;
  uVar4 = CMessageManager::instance();
  local_40 = *(long *)(lVar3 + 0x10);
  if (local_40 != 0) {
    _PrlHandle_AddRef();
  }
  pQVar1 = *(QArrayData **)(lVar3 + 0x20);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  piVar2 = *(int **)(lVar3 + 0x30);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_31 = *piVar2 != 0;
    UNLOCK();
  }
  QVariant::QVariant(&local_58,(QVariant *)(lVar3 + 0x40));
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  lVar3 = 0;
  if ((param_1[9] != 0) && (lVar3 = 0, *(int *)(param_1[9] + 4) != 0)) {
    lVar3 = param_1[10];
  }
  local_48 = pQVar1;
  CMessageManager::showMessageBoxForJob(uVar4,&local_40,&local_48,0,lVar3);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001f7a88;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001f7a88:
  QVariant::~QVariant(&local_58);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_31 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (piVar2 != (int *)0x0)) {
      operator_delete(piVar2);
    }
  }
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001f7ae5;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001f7ae5:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
LAB_1001f7af3:
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

