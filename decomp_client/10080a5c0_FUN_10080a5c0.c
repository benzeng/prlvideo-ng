
void FUN_10080a5c0(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  int *local_a8;
  undefined8 uStack_a0;
  int *local_98;
  undefined8 uStack_90;
  int *local_88;
  undefined8 uStack_80;
  int *local_78;
  undefined8 uStack_70;
  undefined1 local_59;
  void *local_58;
  int **local_50;
  int **local_48;
  void *local_38;
  int **local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 != 0xc) {
    if (param_2 == 10) {
      puVar2 = (undefined4 *)*param_4;
      plVar3 = (long *)param_4[1];
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
      if ((pcVar4 == FUN_10080a980) && (lVar5 == 0)) {
        *puVar2 = 0;
        pcVar4 = (code *)*plVar3;
        lVar5 = plVar3[1];
      }
      if ((pcVar4 == FUN_10080a9d0) && (lVar5 == 0)) {
        *puVar2 = 1;
        pcVar4 = (code *)*plVar3;
        lVar5 = plVar3[1];
      }
      if ((pcVar4 == FUN_10080aa20) && (lVar5 == 0)) {
        *puVar2 = 2;
      }
    }
    else if (param_2 == 0) {
      if (param_3 == 2) {
        local_a8 = *(int **)param_4[1];
        uStack_a0 = ((undefined8 *)param_4[1])[1];
        if (local_a8 != (int *)0x0) {
          LOCK();
          *local_a8 = *local_a8 + 1;
          local_59 = *local_a8 != 0;
          UNLOCK();
        }
        local_38 = (void *)0x0;
        local_30 = &local_a8;
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021ff720,2,&local_38);
        if (local_a8 != (int *)0x0) {
          LOCK();
          *local_a8 = *local_a8 + -1;
          local_59 = *local_a8 != 0;
          UNLOCK();
          if ((!(bool)local_59) && (local_a8 != (int *)0x0)) {
            operator_delete(local_a8);
          }
        }
      }
      else if (param_3 == 1) {
        local_98 = *(int **)param_4[1];
        uStack_90 = ((undefined8 *)param_4[1])[1];
        if (local_98 != (int *)0x0) {
          LOCK();
          *local_98 = *local_98 + 1;
          local_59 = *local_98 != 0;
          UNLOCK();
        }
        local_38 = (void *)0x0;
        local_30 = &local_98;
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021ff720,1,&local_38);
        if (local_98 != (int *)0x0) {
          LOCK();
          *local_98 = *local_98 + -1;
          local_59 = *local_98 != 0;
          UNLOCK();
          if ((!(bool)local_59) && (local_98 != (int *)0x0)) {
            operator_delete(local_98);
          }
        }
      }
      else if (param_3 == 0) {
        local_78 = *(int **)param_4[1];
        uStack_70 = ((undefined8 *)param_4[1])[1];
        if (local_78 != (int *)0x0) {
          LOCK();
          *local_78 = *local_78 + 1;
          local_59 = *local_78 != 0;
          UNLOCK();
        }
        local_88 = *(int **)param_4[2];
        uStack_80 = ((undefined8 *)param_4[2])[1];
        if (local_88 != (int *)0x0) {
          LOCK();
          *local_88 = *local_88 + 1;
          local_59 = *local_88 != 0;
          UNLOCK();
        }
        local_58 = (void *)0x0;
        local_50 = &local_78;
        local_48 = &local_88;
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021ff720,0,&local_58);
        if (local_88 != (int *)0x0) {
          LOCK();
          *local_88 = *local_88 + -1;
          local_59 = *local_88 != 0;
          UNLOCK();
          if ((!(bool)local_59) && (local_88 != (int *)0x0)) {
            operator_delete(local_88);
          }
        }
        if (local_78 != (int *)0x0) {
          LOCK();
          *local_78 = *local_78 + -1;
          local_59 = *local_78 != 0;
          UNLOCK();
          if ((!(bool)local_59) && (local_78 != (int *)0x0)) {
            operator_delete(local_78);
          }
        }
      }
    }
    goto LAB_10080a77b;
  }
  if (param_3 == 0) {
    if (1 < *(uint *)param_4[1]) goto LAB_10080a772;
  }
  else if (((param_3 != 1) && (param_3 != 2)) || (*(int *)param_4[1] != 0)) {
LAB_10080a772:
    *(undefined4 *)*param_4 = 0xffffffff;
    goto LAB_10080a77b;
  }
  if (DAT_10226c7b8 == 0) {
    DAT_10226c7b8 = FUN_100086f00("QPointer<QObject>",0xffffffffffffffff,1);
  }
  *(int *)*param_4 = DAT_10226c7b8;
LAB_10080a77b:
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

