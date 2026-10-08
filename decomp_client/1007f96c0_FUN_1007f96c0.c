
void FUN_1007f96c0(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

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
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 0xc) {
    if (((param_3 == 0) || (param_3 == 1)) && (*(int *)param_4[1] == 0)) {
      if (DAT_10226ca68 == 0) {
        DAT_10226ca68 = FUN_10009c520("SmartCharPtr_t",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226ca68;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_1007f98a0) && (((long *)param_4[1])[1] == 0)) {
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
      FUN_100107c80(param_1,&local_50,*(undefined4 *)param_4[2]);
      if (local_50 == (long *)0x0) goto LAB_1007f9831;
      LOCK();
      plVar3 = local_50 + 1;
      iVar2 = (int)*plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      plVar3 = local_50;
    }
    else {
      if (param_3 != 0) goto LAB_1007f9831;
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
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f9590,0,&local_38);
      if (local_48 == (long *)0x0) goto LAB_1007f9831;
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
LAB_1007f9831:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

