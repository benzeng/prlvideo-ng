
void FUN_100746cd0(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100745b80) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_100745bd0(param_1,1);
      if (*(int *)(param_1 + 0x84) != 0) {
        QTimer::stop();
        iVar2 = 0;
        if ((*(long *)(param_1 + 0x88) != 0) &&
           (iVar2 = 0, *(int *)(*(long *)(param_1 + 0x88) + 4) != 0)) {
          iVar2 = (int)*(undefined8 *)(param_1 + 0x90);
        }
        if (lVar1 == local_20) {
          CReminder::start(iVar2);
          return;
        }
        goto LAB_100746dfb;
      }
    }
    else {
      if (param_3 == 1) {
        FUN_1007464d0(param_1,*(undefined4 *)param_4[1]);
        return;
      }
      if (param_3 == 0) {
        local_3c = *(undefined4 *)param_4[1];
        local_38 = (void *)0x0;
        local_30 = &local_3c;
        QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f6280,0,&local_38);
      }
    }
  }
  if (lVar1 == local_20) {
    return;
  }
LAB_100746dfb:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

