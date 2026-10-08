
void FUN_1008523f0(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  undefined8 local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 != 0xc) {
    if (param_2 == 10) {
      puVar2 = (undefined4 *)*param_4;
      plVar3 = (long *)param_4[1];
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
      if ((pcVar5 == FUN_100852700) && (lVar6 == 0)) {
        *puVar2 = 0;
        pcVar5 = (code *)*plVar3;
        lVar6 = plVar3[1];
      }
      if ((pcVar5 == FUN_100852760) && (lVar6 == 0)) {
        *puVar2 = 1;
        pcVar5 = (code *)*plVar3;
        lVar6 = plVar3[1];
      }
      if ((pcVar5 == FUN_1008527c0) && (lVar6 == 0)) {
        *puVar2 = 2;
        pcVar5 = (code *)*plVar3;
        lVar6 = plVar3[1];
      }
      if ((pcVar5 == FUN_100852810) && (lVar6 == 0)) {
        *puVar2 = 3;
        pcVar5 = (code *)*plVar3;
        lVar6 = plVar3[1];
      }
      if ((pcVar5 == FUN_100852830) && (lVar6 == 0)) {
        *puVar2 = 4;
      }
    }
    else if (param_2 == 0) {
      switch(param_3) {
      case 0:
        local_28 = param_4[2];
        local_3c = *(undefined4 *)param_4[1];
        local_38 = (void *)0x0;
        local_30 = &local_3c;
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102226780,0,&local_38);
        break;
      case 1:
        local_3c = *(undefined4 *)param_4[1];
        local_38 = (void *)0x0;
        local_30 = &local_3c;
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102226780,1,&local_38);
        break;
      case 2:
        local_30 = (undefined4 *)param_4[1];
        local_38 = (void *)0x0;
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102226780,2,&local_38);
        break;
      case 3:
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102226780,3,(void **)0x0)
        ;
        return;
      case 4:
        local_30 = (undefined4 *)param_4[1];
        local_38 = (void *)0x0;
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102226780,4,&local_38);
      }
    }
    goto switchD_100852574_default;
  }
  if (param_3 == 0) {
    if (*(int *)param_4[1] != 0) {
      if (*(int *)param_4[1] == 1) goto LAB_1008525f7;
      goto LAB_100852626;
    }
    iVar4 = DAT_10226c7d8;
    if (DAT_10226c7d8 == 0) {
      iVar4 = FUN_1000871d0("Actions::ActionType",0xffffffffffffffff,1);
      DAT_10226c7d8 = iVar4;
    }
  }
  else if (param_3 == 1) {
    if (*(int *)param_4[1] != 0) {
LAB_100852626:
      *(undefined4 *)*param_4 = 0xffffffff;
      goto switchD_100852574_default;
    }
    iVar4 = DAT_1022743d8;
    if (DAT_1022743d8 == 0) {
      iVar4 = FUN_100598070("Shortcuts::GrabHostShortcutsType",0xffffffffffffffff,1);
      DAT_1022743d8 = iVar4;
    }
  }
  else {
    if ((param_3 != 2) || (*(int *)param_4[1] != 0)) goto LAB_100852626;
LAB_1008525f7:
    iVar4 = DAT_102274448;
    if (DAT_102274448 == 0) {
      iVar4 = FUN_100597d90("CShortcutInfo",0xffffffffffffffff,1);
      DAT_102274448 = iVar4;
    }
  }
  *(int *)*param_4 = iVar4;
switchD_100852574_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

