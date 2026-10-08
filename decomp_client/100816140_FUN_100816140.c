
void FUN_100816140(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined8 local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 0xc) {
    switch(param_3) {
    case 0:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      break;
    case 1:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      break;
    case 2:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      break;
    case 4:
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
        break;
      }
      if (*(int *)param_4[1] == 1) {
        if (DAT_10226db58 == 0) {
          DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
        }
        *(int *)*param_4 = DAT_10226db58;
        break;
      }
    default:
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar5 = plVar3[1];
    if ((pcVar4 == FUN_100816420) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_100816490) && (lVar5 == 0)) {
      *puVar2 = 1;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_4c = *(undefined4 *)param_4[1];
      local_50 = *(undefined4 *)param_4[2];
      local_54 = *(undefined4 *)param_4[3];
      local_48 = (void *)0x0;
      local_40 = &local_4c;
      local_38 = &local_50;
      local_30 = &local_54;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102203b50,0,&local_48);
      break;
    case 1:
      local_4c = *(undefined4 *)param_4[1];
      local_50 = *(undefined4 *)param_4[2];
      local_54 = *(undefined4 *)param_4[3];
      local_28 = param_4[4];
      local_48 = (void *)0x0;
      local_40 = &local_4c;
      local_38 = &local_50;
      local_30 = &local_54;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102203b50,1,&local_48);
      break;
    case 2:
      FUN_1002484a0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_1002481c0(param_1,param_4[1]);
      return;
    case 4:
      FUN_100248510(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],param_4[3]);
      return;
    }
  }
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

