
void FUN_100a50d80(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *local_50;
  long *local_48;
  undefined4 local_3c;
  void *local_38;
  long **local_30;
  undefined4 *local_28;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_18 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100a50f00) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 1) {
      local_50 = *(long **)param_4[1];
      if (local_50 != (long *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      FUN_100a50640(param_1,&local_50,*(undefined4 *)param_4[2]);
      if (local_50 == (long *)0x0) goto LAB_100a50e91;
      LOCK();
      plVar3 = local_50 + 1;
      iVar2 = (int)*plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      plVar3 = local_50;
    }
    else {
      if (param_3 != 0) goto LAB_100a50e91;
      local_48 = *(long **)param_4[1];
      if (local_48 != (long *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
      }
      local_3c = *(undefined4 *)param_4[2];
      local_38 = (void *)0x0;
      local_30 = &local_48;
      local_28 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102238750,0,&local_38);
      if (local_48 == (long *)0x0) goto LAB_100a50e91;
      LOCK();
      plVar3 = local_48 + 1;
      iVar2 = (int)*plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      plVar3 = local_48;
    }
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
LAB_100a50e91:
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

