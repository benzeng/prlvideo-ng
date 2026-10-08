
int FUN_10084d1c0(QObject *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 local_50;
  void *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  iVar2 = QObject::qt_metacall();
  if (-1 < iVar2) {
    if (param_2 == 0xc) {
      if (iVar2 < 2) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) goto LAB_10084d25a;
      if (iVar2 < 2) {
        if (iVar2 == 1) {
          FUN_1006935a0(param_1);
        }
        else if (iVar2 == 0) {
          local_50 = *(undefined8 *)param_4[1];
          local_48 = (void *)0x0;
          local_40 = &local_50;
          QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022248e0,0,&local_48);
        }
      }
    }
    iVar2 = iVar2 + -2;
  }
LAB_10084d25a:
  if (lVar1 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

