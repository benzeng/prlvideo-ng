
void FUN_1007b7720(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  int *local_78;
  long lStack_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  int *local_48;
  long lStack_40;
  undefined1 local_31;
  
  if (((*param_2 == 0) || (*(int *)(*param_2 + 4) == 0)) || (param_2[1] == 0)) {
    pcVar6 = "(!)Error: CDeviceWrap is null.";
LAB_1007b7821:
    FUN_100df99c0("","prl_client_app",0,pcVar6);
    return;
  }
  lVar5 = ___dynamic_cast(param_3,&PTR_vtable_10222d910,&PTR_vtable_10222da30,0);
  if (lVar5 == 0) {
    pcVar6 = "(!)Error: wrong device action type";
    goto LAB_1007b7821;
  }
  uVar2 = FUN_1007b5ce0(lVar5);
  piVar1 = (int *)*param_2;
  lStack_40 = param_2[1];
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  local_48 = piVar1;
  cVar3 = FUN_1007b65d0(param_1,uVar2,&local_48);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_31 = *piVar1 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar1);
    }
  }
  if (cVar3 == '\0') {
    return;
  }
  uVar4 = FUN_1007b5c70(lVar5);
  switch(uVar4) {
  case 0:
  case 4:
  case 6:
  case 7:
  case 8:
    break;
  case 1:
    piVar1 = (int *)*param_2;
    lStack_70 = param_2[1];
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_31 = *piVar1 != 0;
      UNLOCK();
    }
    local_78 = piVar1;
    FUN_1007b6b80(param_1,lVar5,&local_78);
    if (piVar1 == (int *)0x0) {
      return;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_31 = *piVar1 != 0;
    UNLOCK();
    if ((bool)local_31) {
      return;
    }
    operator_delete(piVar1);
    return;
  case 2:
    lVar7 = 0;
    if ((*param_2 != 0) && (lVar7 = 0, *(int *)(*param_2 + 4) != 0)) {
      lVar7 = param_2[1];
    }
    FUN_1007b5c80(&local_80,lVar5);
    FUN_1007b5cb0(&local_88,lVar5);
    FUN_1001487b0(lVar7,&local_80,&local_88);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007b79d9;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1007b79d9:
    if (*(int *)local_80 == -1) {
      return;
    }
    local_50 = local_80;
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return;
      }
      local_31 = 0;
    }
    goto LAB_1007b7b68;
  case 3:
    lVar7 = 0;
    if ((*param_2 != 0) && (lVar7 = 0, *(int *)(*param_2 + 4) != 0)) {
      lVar7 = param_2[1];
    }
    FUN_1007b5c80(&local_90,lVar5);
    FUN_1007b5cb0(&local_98,lVar5);
    FUN_100148260(lVar7,&local_90,&local_98);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007b7a8d;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1007b7a8d:
    if (*(int *)local_90 == -1) {
      return;
    }
    local_50 = local_90;
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      UNLOCK();
      if (*(int *)local_90 != 0) {
        return;
      }
      local_31 = 0;
    }
    goto LAB_1007b7b68;
  case 5:
    lVar7 = 0;
    if ((*param_2 != 0) && (lVar7 = 0, *(int *)(*param_2 + 4) != 0)) {
      lVar7 = param_2[1];
    }
    FUN_1007b5c80(&local_60,lVar5);
    FUN_1007b5cb0(&local_68,lVar5);
    FUN_100147a20(lVar7,&local_60,&local_68,3,0,0,0);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007b7b47;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1007b7b47:
    if (*(int *)local_60 == -1) {
      return;
    }
    local_50 = local_60;
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_31 = 0;
    }
    goto LAB_1007b7b68;
  default:
    FUN_100df99c0("","prl_client_app",0,"(!)Error: wrong real device type.");
    return;
  }
  lVar7 = 0;
  if ((*param_2 != 0) && (lVar7 = 0, *(int *)(*param_2 + 4) != 0)) {
    lVar7 = param_2[1];
  }
  FUN_1007b5c80(&local_50,lVar5);
  FUN_1007b5cb0(&local_58,lVar5);
  uVar2 = FUN_1007b5ce0(lVar5);
  FUN_100147a20(lVar7,&local_50,&local_58,0,uVar2,0,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b78e7;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007b78e7:
  if (*(int *)local_50 == -1) {
    return;
  }
  if (*(int *)local_50 != 0) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + -1;
    UNLOCK();
    if (*(int *)local_50 != 0) {
      return;
    }
    local_31 = 0;
  }
LAB_1007b7b68:
  QArrayData::deallocate(local_50,2,8);
  return;
}

