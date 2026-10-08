
void FUN_10081fa10(QObject *param_1,int param_2,int param_3,long *param_4)

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
    if ((param_3 == 0xc) && (*(int *)param_4[1] == 1)) {
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
    if ((pcVar5 == FUN_10081fea0) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10081fef0) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10081ff10) && (lVar6 == 0)) {
      *puVar2 = 2;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10081ff70) && (lVar6 == 0)) {
      *puVar2 = 3;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_10081ffd0) && (lVar6 == 0)) {
      *puVar2 = 4;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_30 = (undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022078f0,0,&local_38);
      break;
    case 1:
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022078f0,1,(void **)0x0);
      return;
    case 2:
      local_3c = CONCAT31(local_3c._1_3_,*(undefined1 *)param_4[1]);
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022078f0,2,&local_38);
      break;
    case 3:
      local_3c = *(undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022078f0,3,&local_38);
      break;
    case 4:
      local_3c = *(undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022078f0,4,&local_38);
      break;
    case 5:
      FUN_1002a2b40(param_1,*(undefined4 *)param_4[1]);
      return;
    case 6:
      FUN_1002a53e0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 7:
      FUN_1002a55c0();
      return;
    case 8:
      FUN_1002a8e80(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],
                    *(undefined4 *)param_4[3]);
      return;
    case 9:
      FUN_1002a9000();
      return;
    case 10:
      FUN_1002a2080(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0xb:
      FUN_1002a19c0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0xc:
      FUN_1002a5390(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 0xd:
      FUN_1002a7140();
      return;
    case 0xe:
      FUN_1002a7770();
      return;
    case 0xf:
      uVar4 = FUN_1002a19e0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0x10:
      uVar4 = FUN_1002a21d0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0x11:
      uVar4 = FUN_1002a3ea0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0x12:
      uVar4 = FUN_1002a7790();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0x13:
      uVar4 = FUN_1002a96c0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0x14:
      uVar4 = FUN_1002a7460();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0x15:
      uVar4 = FUN_1002a64e0();
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

