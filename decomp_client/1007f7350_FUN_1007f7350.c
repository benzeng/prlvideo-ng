
void FUN_1007f7350(QObject *param_1,int param_2,int param_3,long *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined1 uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  undefined1 local_70 [8];
  long *local_68;
  undefined4 local_5c;
  void *local_58;
  long **local_50;
  undefined4 *local_48;
  void *local_38;
  undefined1 *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (param_2 == 0xc) {
    if ((param_3 == 2) && (*(int *)param_4[1] == 0)) {
      if (DAT_10226ca68 == 0) {
        DAT_10226ca68 = FUN_10009c520("SmartCharPtr_t",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226ca68;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    goto switchD_1007f7498_default;
  }
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar7 = plVar3[1];
    if ((pcVar5 == FUN_1007f76b0) && (lVar7 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar5 == FUN_1007f76d0) && (lVar7 == 0)) {
      *puVar2 = 1;
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar5 == FUN_1007f76f0) && (lVar7 == 0)) {
      *puVar2 = 2;
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar5 == FUN_1007f7750) && (lVar7 == 0)) {
      *puVar2 = 3;
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar5 == FUN_1007f7770) && (lVar7 == 0)) {
      *puVar2 = 4;
    }
    goto switchD_1007f7498_default;
  }
  if (param_2 != 0) goto switchD_1007f7498_default;
  switch(param_3) {
  case 0:
    iVar6 = 0;
    goto LAB_1007f75a3;
  case 1:
    iVar6 = 1;
    goto LAB_1007f75a3;
  case 2:
    local_68 = *(long **)param_4[1];
    if (local_68 != (long *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
    local_5c = *(undefined4 *)param_4[2];
    local_58 = (void *)0x0;
    local_50 = &local_68;
    local_48 = &local_5c;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f8ba0,2,&local_58);
    if (local_68 != (long *)0x0) {
      LOCK();
      plVar3 = local_68 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    break;
  case 3:
    iVar6 = 3;
LAB_1007f75a3:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f8ba0,iVar6,(void **)0x0)
    ;
    return;
  case 4:
    FUN_1000b7180(local_70,param_4[1]);
    local_38 = (void *)0x0;
    local_30 = local_70;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f8ba0,4,&local_38);
    FUN_1000b70d0(local_70);
    break;
  case 5:
    FUN_1000b6b70(param_1);
    return;
  case 6:
    uVar4 = FUN_1000b6b90(param_1);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar4;
    }
    break;
  case 7:
    FUN_1000b6d50(param_1);
    return;
  }
switchD_1007f7498_default:
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

