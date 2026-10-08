
void FUN_10085be40(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 local_39;
  void *local_38;
  undefined1 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_10085bef0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 1) {
    if (param_3 == 0) {
      puVar2 = (undefined1 *)*param_4;
      uVar3 = FUN_10076b500();
      *puVar2 = uVar3;
    }
  }
  else if ((param_2 == 0) && (param_3 == 0)) {
    local_39 = *(undefined1 *)param_4[1];
    local_38 = (void *)0x0;
    local_30 = &local_39;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022299e0,0,&local_38);
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

