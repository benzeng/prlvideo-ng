
void FUN_100496e60(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  int *piVar2;
  int *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_59;
  void *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  QArrayData **local_40;
  QArrayData **local_38;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  if (param_2 == 0xc) {
    if (param_3 == 0) {
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    goto LAB_100497060;
  }
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100497150) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
    goto LAB_100497060;
  }
  if (param_2 != 0) goto LAB_100497060;
  if (param_3 == 1) {
    local_80 = *(int **)param_4[1];
    if (local_80 != (int *)0x0) {
      LOCK();
      *local_80 = *local_80 + 1;
      local_59 = *local_80 != 0;
      UNLOCK();
    }
    FUN_100493a60(param_1,&local_80,*(undefined4 *)param_4[2]);
    piVar2 = local_80;
    if (local_80 != (int *)0x0) {
      LOCK();
      *local_80 = *local_80 + -1;
      local_59 = *local_80 != 0;
      UNLOCK();
      if ((!(bool)local_59) && (local_80 != (int *)0x0)) {
        FUN_100031ed0(local_80);
        operator_delete(piVar2);
      }
    }
    goto LAB_100497060;
  }
  if (param_3 != 0) goto LAB_100497060;
  local_60 = *(undefined4 *)param_4[1];
  local_64 = *(undefined4 *)param_4[2];
  local_70 = *(QArrayData **)param_4[3];
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_59 = *(int *)local_70 != 0;
    UNLOCK();
  }
  local_78 = *(QArrayData **)param_4[4];
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_59 = *(int *)local_78 != 0;
    UNLOCK();
  }
  local_58 = (void *)0x0;
  local_50 = &local_60;
  local_48 = &local_64;
  local_40 = &local_70;
  local_38 = &local_78;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bc2130,0,&local_58);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_59 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_100497028;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100497028:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_59 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_100497060;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100497060:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

