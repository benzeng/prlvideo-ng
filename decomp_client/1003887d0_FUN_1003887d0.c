
void FUN_1003887d0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 local_40;
  void *local_38;
  undefined8 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 0xc) {
    switch(param_3) {
    case 0:
    case 1:
    case 2:
    case 3:
      if (*(int *)param_4[1] == 0) {
        uVar4 = FUN_100389910();
        *(undefined4 *)*param_4 = uVar4;
        goto switchD_100388909_default;
      }
    }
    *(undefined4 *)*param_4 = 0xffffffff;
  }
  else if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar5 == FUN_100385260) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100385370) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100385550) && (lVar6 == 0)) {
      *puVar2 = 2;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_1003854f0) && (lVar6 == 0)) {
      *puVar2 = 3;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_40 = *(undefined8 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_40;
      QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f15f0,0,&local_38);
      break;
    case 1:
      local_40 = *(undefined8 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_40;
      QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f15f0,1,&local_38);
      break;
    case 2:
      local_40 = *(undefined8 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_40;
      QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f15f0,2,&local_38);
      break;
    case 3:
      local_40 = *(undefined8 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_40;
      QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f15f0,3,&local_38);
    }
  }
switchD_100388909_default:
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

