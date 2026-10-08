
void FUN_100cdef50(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined1 local_59;
  void *local_58;
  void **local_50;
  undefined1 *local_48;
  undefined8 local_40;
  void *local_38;
  void **local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar5 == FUN_100cdf0e0) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100cdf140) && (lVar6 == 0)) {
      *puVar2 = 1;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_59 = *(undefined1 *)param_4[2];
      local_38 = (void *)CONCAT44(local_38._4_4_,*(undefined4 *)param_4[1]);
      local_58 = (void *)0x0;
      local_50 = &local_38;
      local_48 = &local_59;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10225a1f0,0,&local_58);
      break;
    case 1:
      puVar4 = (undefined8 *)param_4[1];
      local_58 = (void *)*puVar4;
      local_50 = (void **)puVar4[1];
      local_48 = (undefined1 *)puVar4[2];
      local_40 = puVar4[3];
      local_38 = (void *)0x0;
      local_30 = &local_58;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10225a1f0,1,&local_38);
      break;
    case 2:
      FUN_100cd9c10(param_1,*(undefined4 *)param_4[1],*(undefined1 *)param_4[2]);
      return;
    case 3:
      FUN_100cd9bc0();
      return;
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

