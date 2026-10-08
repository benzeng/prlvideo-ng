
void FUN_100a06d80(QObject *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  void *local_38;
  QObject *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  param_1[0x20] = (QObject)0x1;
  lVar2 = *(long *)(param_1 + 0x28);
  local_28 = lVar1;
  if (lVar2 != 0) {
    uVar3 = _CFNotificationCenterGetLocalCenter();
    _CFNotificationCenterRemoveObserver(uVar3,param_1,0,lVar2);
    _MDQueryStop(lVar2);
    _CFRelease(*(undefined8 *)(param_1 + 0x28));
    param_1[0x22] = (QObject)0x0;
    local_30 = param_1 + 0x18;
    local_38 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102236cc0,0,&local_38);
  }
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

