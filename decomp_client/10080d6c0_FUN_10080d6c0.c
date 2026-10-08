
void FUN_10080d6c0(QObject *param_1,int param_2,int param_3,long *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  code *pcVar5;
  long lVar6;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 0xc) {
    if ((((param_3 == 8) || (param_3 == 9)) || (param_3 == 10)) && (*(int *)param_4[1] == 1)) {
      if (DAT_10226db58 == 0) {
        DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226db58;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar5 == FUN_10080da40) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10080da90) && (lVar6 == 0)) {
      *puVar2 = 1;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_3c = *(undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102200470,0,&local_38);
      break;
    case 1:
      local_3c = *(undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102200470,1,&local_38);
      break;
    case 2:
      FUN_100200200();
      return;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x00010080d86a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0xb0))(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_100200260(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_1002003f0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 6:
      FUN_1001ff8b0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 7:
      FUN_1002007a0(param_1,param_4[1]);
      return;
    case 8:
      FUN_100200740(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],param_4[3]);
      return;
    case 9:
      FUN_1001ff820(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 10:
      FUN_1001ff880(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 0xb:
      FUN_100200140();
      return;
    case 0xc:
      FUN_1001fc880();
      return;
    case 0xd:
      FUN_1001fecd0();
      return;
    case 0xe:
      uVar4 = FUN_1001fcb80();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0xf:
      uVar4 = FUN_1001fd860();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0x10:
      uVar4 = FUN_1001fc6d0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0x11:
      uVar4 = FUN_1001fe9e0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

