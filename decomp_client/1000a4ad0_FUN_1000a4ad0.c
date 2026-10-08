
undefined1 FUN_1000a4ad0(long param_1,QString *param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  QArrayData *local_48;
  long *local_40;
  char local_32;
  undefined1 local_31;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar7 = 0;
  if (lVar1 != 0) {
    do {
      while (lVar5 = lVar1, cVar2 = operator<((QString *)(lVar5 + 0x18),param_2), cVar2 == '\0') {
        lVar1 = *(long *)(lVar5 + 8);
        lVar7 = lVar5;
        if (*(long *)(lVar5 + 8) == 0) goto LAB_1000a4b36;
      }
      lVar1 = *(long *)(lVar5 + 0x10);
    } while (*(long *)(lVar5 + 0x10) != 0);
    lVar5 = lVar7;
    if (lVar7 != 0) {
LAB_1000a4b36:
      cVar2 = operator<(param_2,(QString *)(lVar5 + 0x18));
      if (cVar2 == '\0') {
        return 1;
      }
    }
  }
  plVar3 = operator_new(0x40);
  FUN_1000a0d90(plVar3,param_2,&local_32);
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
    plVar4 = (long *)0x0;
  }
  else {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = (long)plVar3;
    *plVar4 = (long)&PTR_FUN_10226cab0;
  }
  local_40 = plVar4;
  if (local_32 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("VSDD","prl_client_app",0,
                  "Failed to create SharedHostApps client for vmUuid=\"%s\"",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      uVar6 = 0;
    }
    else {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) {
          uVar6 = 0;
          goto LAB_1000a4c3b;
        }
      }
      QArrayData::deallocate(local_48,1,8);
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 1;
    FUN_1000a5a20(param_1 + 0x10,param_2,&local_40);
  }
LAB_1000a4c3b:
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
  return uVar6;
}

