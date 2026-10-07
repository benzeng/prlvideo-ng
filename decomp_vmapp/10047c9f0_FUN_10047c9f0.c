
void FUN_10047c9f0(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  int *piVar4;
  code *pcVar5;
  long lVar6;
  int *local_68;
  undefined4 local_60;
  undefined1 local_59;
  void *local_58;
  int **local_50;
  undefined4 *local_48;
  void *local_38;
  undefined1 *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar5 == FUN_10047cba0) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10047cc00) && (lVar6 == 0)) {
      *puVar2 = 1;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 1) {
      local_59 = *(undefined1 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_59;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bc1e90,1,&local_38);
    }
    else if (param_3 == 0) {
      local_68 = *(int **)param_4[1];
      if (local_68 != (int *)0x0) {
        LOCK();
        *local_68 = *local_68 + 1;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,*local_68 != 0);
      }
      local_60 = *(undefined4 *)param_4[2];
      local_58 = (void *)0x0;
      local_50 = &local_68;
      local_48 = &local_60;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bc1e90,0,&local_58);
      piVar4 = local_68;
      if (local_68 != (int *)0x0) {
        LOCK();
        *local_68 = *local_68 + -1;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,*local_68 != 0);
        if ((*local_68 == 0) && (local_68 != (int *)0x0)) {
          FUN_100031ed0(local_68);
          operator_delete(piVar4);
        }
      }
    }
  }
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

