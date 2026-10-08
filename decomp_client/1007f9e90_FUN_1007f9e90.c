
int FUN_1007f9e90(QObject *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  undefined1 local_49;
  void *local_48;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  iVar2 = QAction::qt_metacall();
  if (-1 < iVar2) {
    if (param_2 == 0xc) {
      if (iVar2 < 2) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) goto LAB_1007f9f28;
      if (iVar2 < 2) {
        if (iVar2 == 1) {
          FUN_100132530(param_1);
        }
        else if (iVar2 == 0) {
          local_49 = *(undefined1 *)param_4[1];
          local_48 = (void *)0x0;
          local_40 = &local_49;
          QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f97f0,0,&local_48);
        }
      }
    }
    iVar2 = iVar2 + -2;
  }
LAB_1007f9f28:
  if (lVar1 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

