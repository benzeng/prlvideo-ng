
void FUN_1009cca90(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_48;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  undefined8 *local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 0xc) {
    if ((param_3 == 0) && (*(int *)param_4[1] == 1)) {
      uVar2 = FUN_1003dff90();
      *(undefined4 *)*param_4 = uVar2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_1009ccb70) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if ((param_2 == 0) && (param_3 == 0)) {
    local_3c = *(undefined4 *)param_4[1];
    local_48 = *(undefined8 *)param_4[2];
    local_38 = (void *)0x0;
    local_30 = &local_3c;
    local_28 = &local_48;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_102236490,0,&local_38);
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

