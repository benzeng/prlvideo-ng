
int FUN_10083e980(QObject *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 local_4c;
  void *local_48;
  undefined4 *local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  iVar2 = CContentWindow::qt_metacall();
  if (-1 < iVar2) {
    if (param_2 == 0xc) {
      if (iVar2 < 1) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) goto LAB_10083ea04;
      if (iVar2 < 1) {
        local_4c = *(undefined4 *)param_4[1];
        local_48 = (void *)0x0;
        local_40 = &local_4c;
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10221dc70,0,&local_48);
      }
    }
    iVar2 = iVar2 + -1;
  }
LAB_10083ea04:
  if (lVar1 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

