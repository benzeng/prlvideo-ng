
void FUN_100117ac0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  if (param_2 != 10) {
    if (param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100baa650,0,(void **)0x0);
      return;
    case 1:
      goto switchD_100117b2a_caseD_1;
    case 2:
      FUN_1001033e0();
      return;
    case 3:
      FUN_100104ee0();
      return;
    default:
      return;
    }
  }
  if (*(code **)param_4[1] != FUN_100117ca0) {
    return;
  }
  if (((long *)param_4[1])[1] != 0) {
    return;
  }
  *(undefined4 *)*param_4 = 0;
  return;
switchD_100117b2a_caseD_1:
  uVar1 = *(undefined4 *)param_4[1];
  uVar2 = *(undefined4 *)param_4[2];
  local_20 = *(QArrayData **)param_4[3];
  if (1 < *(int *)local_20 + 1U) {
    LOCK();
    *(int *)local_20 = *(int *)local_20 + 1;
    local_11 = *(int *)local_20 != 0;
    UNLOCK();
  }
  local_28 = *(QArrayData **)param_4[4];
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_11 = *(int *)local_28 != 0;
    UNLOCK();
  }
  FUN_100104520(param_1,uVar1,uVar2,&local_20,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100117bc3;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100117bc3:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return;
}

