
void FUN_1007f3d10(QObject *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 local_40;
  long *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 *local_20;
  long local_18;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = (long *)*param_3;
  if (local_38 != (long *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  local_28 = (void *)0x0;
  local_20 = &local_40;
  local_40 = param_2;
  local_30 = param_4;
  local_18 = lVar2;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f85a0,0,&local_28);
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (lVar2 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

