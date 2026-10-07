
void FUN_100472410(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  int *local_58;
  undefined4 local_50;
  undefined1 local_49;
  void *local_48;
  int **local_40;
  undefined4 *local_38;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar7 = plVar3[1];
    if ((pcVar5 == FUN_100472610) && (lVar7 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar5 == FUN_100472630) && (lVar7 == 0)) {
      *puVar2 = 1;
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar5 == FUN_100472690) && (lVar7 == 0)) {
      *puVar2 = 2;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 2) {
      iVar6 = 2;
LAB_100472587:
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_100bc16a0,iVar6,(void **)0x0);
      return;
    }
    if (param_3 == 1) {
      local_58 = *(int **)param_4[1];
      if (local_58 != (int *)0x0) {
        LOCK();
        *local_58 = *local_58 + 1;
        local_49 = *local_58 != 0;
        UNLOCK();
      }
      local_50 = *(undefined4 *)param_4[2];
      local_48 = (void *)0x0;
      local_40 = &local_58;
      local_38 = &local_50;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_100bc16a0,1,&local_48);
      piVar4 = local_58;
      if (local_58 != (int *)0x0) {
        LOCK();
        *local_58 = *local_58 + -1;
        local_49 = *local_58 != 0;
        UNLOCK();
        if ((!(bool)local_49) && (local_58 != (int *)0x0)) {
          FUN_100031ed0(local_58);
          operator_delete(piVar4);
        }
      }
    }
    else if (param_3 == 0) {
      iVar6 = 0;
      goto LAB_100472587;
    }
  }
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

