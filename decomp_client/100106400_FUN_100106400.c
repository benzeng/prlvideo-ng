
undefined1 FUN_100106400(long param_1,QString *param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  QArrayData *local_58;
  QArrayData *local_50;
  long *local_48;
  long *plStack_40;
  char local_32;
  undefined1 local_31;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar8 = 0;
  if (lVar1 != 0) {
    do {
      while (lVar6 = lVar1, cVar2 = operator<((QString *)(lVar6 + 0x18),param_2), cVar2 == '\0') {
        lVar1 = *(long *)(lVar6 + 8);
        lVar8 = lVar6;
        if (*(long *)(lVar6 + 8) == 0) goto LAB_100106466;
      }
      lVar1 = *(long *)(lVar6 + 0x10);
    } while (*(long *)(lVar6 + 0x10) != 0);
    lVar6 = lVar8;
    if (lVar8 != 0) {
LAB_100106466:
      cVar2 = operator<(param_2,(QString *)(lVar6 + 0x18));
      if (cVar2 == '\0') {
        return 1;
      }
    }
  }
  local_48 = (long *)0x0;
  plStack_40 = (long *)0x0;
  plVar3 = operator_new(0x28);
  FUN_100107a50(plVar3,param_2,&local_32);
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
    local_48 = (long *)0x0;
    plVar4 = (long *)0x0;
  }
  else {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = (long)plVar3;
    *plVar4 = (long)&PTR_FUN_10226d5e0;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar4 + 1;
    lVar1 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    local_48 = plVar4;
    if ((int)lVar1 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  if (local_32 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("GSHEXT","prl_client_app",0,
                  "Error: failed to create SHAShellExt client for vmUuid=\"%s\"",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 == -1) {
      uVar7 = 0;
    }
    else {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) {
          uVar7 = 0;
          goto LAB_1001066f8;
        }
      }
      QArrayData::deallocate(local_50,1,8);
      uVar7 = 0;
    }
    goto LAB_1001066f8;
  }
  plVar3 = operator_new(0x30);
  FUN_100108a20(plVar3,param_2,&local_32);
  plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
    plStack_40 = (long *)0x0;
    plVar5 = (long *)0x0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = (long)plVar3;
    *plVar5 = (long)&PTR_FUN_10226d648;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar5 + 1;
    lVar1 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    plStack_40 = plVar5;
    if ((int)lVar1 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  if (local_32 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("GSHEXT","prl_client_app",0,
                  "Error: failed to create SharedHostApps client for vmUuid=\"%s\"",
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 == -1) {
      uVar7 = 0;
    }
    else {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) {
          uVar7 = 0;
          goto LAB_1001066d7;
        }
      }
      QArrayData::deallocate(local_58,1,8);
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 1;
    FUN_100106f70(param_1 + 0x10,param_2,&local_48);
  }
LAB_1001066d7:
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar1 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_1001066f8:
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar1 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return uVar7;
}

