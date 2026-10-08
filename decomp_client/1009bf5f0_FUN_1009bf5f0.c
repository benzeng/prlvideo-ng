
void FUN_1009bf5f0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined2 local_5e;
  undefined1 local_5c [4];
  void *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined2 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar5 = plVar3[1];
    if ((pcVar4 == FUN_1009bf8d0) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_1009bf930) && (lVar5 == 0)) {
      *puVar2 = 1;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_1009bf9c0) && (lVar5 == 0)) {
      *puVar2 = 2;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_1009bfa20) && (lVar5 == 0)) {
      *puVar2 = 3;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_1009bfa90) && (lVar5 == 0)) {
      *puVar2 = 4;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)param_4[1]);
      local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)param_4[2]);
      local_58 = (void *)0x0;
      local_50 = &local_68;
      local_48 = &local_70;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102234620,0,&local_58);
      break;
    case 1:
      local_5c = *(undefined1 (*) [4])param_4[1];
      local_5e = *(undefined2 *)param_4[2];
      local_60 = *(undefined2 *)param_4[3];
      local_68 = *(undefined8 *)param_4[4];
      local_70 = *(undefined8 *)param_4[5];
      local_58 = (void *)0x0;
      local_50 = (undefined8 *)local_5c;
      local_48 = (undefined8 *)&local_5e;
      local_40 = &local_60;
      local_38 = &local_68;
      local_30 = &local_70;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102234620,1,&local_58);
      break;
    case 2:
      local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)param_4[1]);
      local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)param_4[2]);
      local_58 = (void *)0x0;
      local_50 = &local_68;
      local_48 = &local_70;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102234620,2,&local_58);
      break;
    case 3:
      local_5c = *(undefined1 (*) [4])param_4[3];
      local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)param_4[1]);
      local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)param_4[2]);
      local_58 = (void *)0x0;
      local_50 = &local_68;
      local_48 = &local_70;
      local_40 = (undefined2 *)local_5c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102234620,3,&local_58);
      break;
    case 4:
      local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)param_4[1]);
      local_58 = (void *)0x0;
      local_50 = &local_68;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102234620,4,&local_58);
    }
  }
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

