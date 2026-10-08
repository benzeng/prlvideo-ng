
void FUN_100835fa0(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 local_48 [2];
  undefined4 local_40 [2];
  void *local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 0xc) {
    if ((param_3 == 0) && (*(uint *)param_4[1] < 2)) {
      if (DAT_102273e18 == 0) {
        DAT_102273e18 = FUN_1003a4e90("CVmEditorItem::Attributes",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_102273e18;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_1008360a0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if ((param_2 == 0) && (param_3 == 0)) {
    local_40[0] = *(undefined4 *)param_4[1];
    local_48[0] = *(undefined4 *)param_4[2];
    local_38 = (void *)0x0;
    local_30 = local_40;
    local_28 = local_48;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022104a0,0,&local_38);
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

