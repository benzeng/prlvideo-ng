
void FUN_10081b3f0(QObject *param_1,int param_2,int param_3,long *param_4)

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
    if ((((param_3 == 10) || (param_3 == 0xb)) || (param_3 == 0xc)) && (*(int *)param_4[1] == 1)) {
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
    if ((pcVar5 == FUN_10081b840) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10081b890) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10081b8b0) && (lVar6 == 0)) {
      *puVar2 = 2;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10081b910) && (lVar6 == 0)) {
      *puVar2 = 3;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_30 = (undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102205db0,0,&local_38);
      break;
    case 1:
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102205db0,1,(void **)0x0);
      return;
    case 2:
      local_3c = CONCAT31(local_3c._1_3_,*(undefined1 *)param_4[1]);
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102205db0,2,&local_38);
      break;
    case 3:
      local_3c = *(undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102205db0,3,&local_38);
      break;
    case 4:
      FUN_10027b3e0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_10027b740(param_1,*(undefined1 *)param_4[1],param_4[2]);
      return;
    case 6:
      FUN_10027bc40(param_1,*(undefined4 *)param_4[1]);
      return;
    case 7:
      FUN_10027bdd0(param_1,param_4[1],*(undefined4 *)param_4[2],*(undefined4 *)param_4[3]);
      return;
    case 8:
      FUN_10027bef0(param_1,param_4[1],*(undefined4 *)param_4[2],*(undefined4 *)param_4[3]);
      return;
    case 9:
      FUN_10027c5a0(param_1,*(undefined1 *)param_4[1],param_4[2]);
      return;
    case 10:
      FUN_1002794b0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 0xb:
      FUN_10027cc30(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 0xc:
      FUN_10027cdc0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 0xd:
      uVar4 = FUN_100279610();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0xe:
      uVar4 = FUN_100278e70();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0xf:
      uVar4 = FUN_100279f70();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0x10:
      uVar4 = FUN_10027a300();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0x11:
      uVar4 = FUN_10027a9a0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0x12:
      uVar4 = FUN_10027afa0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0x13:
      uVar4 = FUN_10027b280();
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

