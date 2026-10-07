
void FUN_10040fdb0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined1 local_3a;
  undefined1 local_39;
  void *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar5 = plVar3[1];
    if ((pcVar4 == FUN_10040ffc0) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_100410020) && (lVar5 == 0)) {
      *puVar2 = 1;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_100410080) && (lVar5 == 0)) {
      *puVar2 = 2;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_39 = *(undefined1 *)param_4[1];
      local_3a = *(undefined1 *)param_4[2];
      local_38 = (void *)0x0;
      local_30 = &local_39;
      local_28 = &local_3a;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bc0280,0,&local_38);
      break;
    case 1:
      local_39 = *(undefined1 *)param_4[1];
      local_3a = *(undefined1 *)param_4[2];
      local_38 = (void *)0x0;
      local_30 = &local_39;
      local_28 = &local_3a;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bc0280,1,&local_38);
      break;
    case 2:
      local_39 = *(undefined1 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_39;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bc0280,2,&local_38);
      break;
    case 3:
      FUN_10040a030(param_1,*(undefined1 *)param_4[1],*(undefined1 *)param_4[2]);
      return;
    case 4:
      FUN_10040a190(param_1,*(undefined1 *)param_4[1],*(undefined1 *)param_4[2]);
      return;
    case 5:
      FUN_10040a380(param_1,*(undefined1 *)param_4[1]);
      return;
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

