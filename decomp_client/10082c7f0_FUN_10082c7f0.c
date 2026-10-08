
void FUN_10082c7f0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  undefined4 local_5c;
  void *local_58;
  long *local_50;
  undefined4 *local_48;
  void *local_38;
  long *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar5 = plVar3[1];
    if ((pcVar4 == FUN_10082caa0) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_10082cb00) && (lVar5 == 0)) {
      *puVar2 = 1;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_10082cb50) && (lVar5 == 0)) {
      *puVar2 = 2;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_68 = *(long *)param_4[1];
      if (local_68 != 0) {
        _PrlHandle_AddRef();
      }
      local_60 = *(undefined4 *)param_4[2];
      local_58 = (void *)0x0;
      local_50 = &local_68;
      local_48 = &local_60;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220bc20,0,&local_58);
      if (local_68 != 0) {
        _PrlHandle_Free();
      }
      break;
    case 1:
      local_70 = *(long *)param_4[1];
      if (local_70 != 0) {
        _PrlHandle_AddRef();
      }
      local_38 = (void *)0x0;
      local_30 = &local_70;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220bc20,1,&local_38);
      if (local_70 != 0) {
        _PrlHandle_Free();
      }
      break;
    case 2:
      local_78 = *(long *)param_4[1];
      if (local_78 != 0) {
        _PrlHandle_AddRef();
      }
      local_5c = *(undefined4 *)param_4[2];
      local_58 = (void *)0x0;
      local_50 = &local_78;
      local_48 = &local_5c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220bc20,2,&local_58);
      if (local_78 != 0) {
        _PrlHandle_Free();
      }
      break;
    case 3:
      local_80 = *(long *)param_4[1];
      if (local_80 != 0) {
        _PrlHandle_AddRef();
      }
      FUN_10032d570(param_1,&local_80,*(undefined4 *)param_4[2]);
      if (local_80 != 0) {
        _PrlHandle_Free();
      }
    }
  }
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

