
void FUN_1002adb00(long param_1)

{
  int *piVar1;
  CTaskGenericId *pCVar2;
  long *plVar3;
  QVariant local_58;
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  pCVar2 = (CTaskGenericId *)CTaskManager::instance();
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_21 = *piVar1 != 0;
    UNLOCK();
  }
  QObject::property((char *)&local_58);
  QVariant::toString();
  FUN_100086960(local_40,&local_48);
  CTaskManager::getTaskById(pCVar2);
  plVar3 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220ab00);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002adbbd;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002adbbd:
  QVariant::~QVariant(&local_58);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_21 = *piVar1 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar1);
    }
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x78))(plVar3,0x80000275);
  }
  return;
}

