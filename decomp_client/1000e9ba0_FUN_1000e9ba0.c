
void FUN_1000e9ba0(long *param_1,int *param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  if (*param_2 == 0x65) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else if (*param_2 == 100) {
    *(int *)(param_1 + 1) = param_2[1];
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((*(char *)(lVar1 + 0x48) != '\0') && (*(char *)((long)param_1 + 0xc) == '\0')) {
      (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
    }
  }
  lVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (*(char *)(lVar1 + 0x48) == '\0') {
    return;
  }
  switch(*param_2) {
  case 100:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
    break;
  case 0x65:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x18);
    break;
  default:
    return;
  case 0x68:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x28);
    break;
  case 0x69:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30);
    break;
  case 0x6c:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x90);
    break;
  case 0x6f:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xc0);
    break;
  case 0x70:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x40);
    break;
  case 0x71:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
    break;
  case 0x72:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x38);
    break;
  case 0x73:
    lVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    plVar2 = operator_new(0x18);
    param_4 = (long *)*param_4;
    if (param_4 == (long *)0x0) {
      *plVar2 = (long)&PTR_FUN_10226cee0;
      plVar2[1] = (long)param_1;
      plVar2[2] = 0;
    }
    else {
      LOCK();
      *(int *)(param_4 + 1) = (int)param_4[1] + 1;
      UNLOCK();
      *plVar2 = (long)&PTR_FUN_10226cee0;
      plVar2[1] = (long)param_1;
      plVar2[2] = (long)param_4;
      LOCK();
      *(int *)(param_4 + 1) = (int)param_4[1] + 1;
      UNLOCK();
    }
    local_38 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (local_38 == (long *)0x0) {
      local_38 = (long *)0x0;
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    else {
      *(undefined4 *)(local_38 + 1) = 1;
      local_38[2] = (long)plVar2;
      *local_38 = (long)&PTR_FUN_10226ce10;
    }
    FUN_1000eef10(lVar1 + 0xb8,&local_38);
    if (local_38 != (long *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      lVar1 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    if (param_4 != (long *)0x0) {
      LOCK();
      plVar2 = param_4 + 1;
      lVar1 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)(*param_4 + 0x10))(param_4);
        return;
      }
      return;
    }
    return;
  case 0x75:
    lVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    plVar2 = operator_new(0x18);
    param_4 = (long *)*param_4;
    if (param_4 == (long *)0x0) {
      *plVar2 = (long)&PTR_FUN_10226cf28;
      plVar2[1] = (long)param_1;
      plVar2[2] = 0;
    }
    else {
      LOCK();
      *(int *)(param_4 + 1) = (int)param_4[1] + 1;
      UNLOCK();
      *plVar2 = (long)&PTR_FUN_10226cf28;
      plVar2[1] = (long)param_1;
      plVar2[2] = (long)param_4;
      LOCK();
      *(int *)(param_4 + 1) = (int)param_4[1] + 1;
      UNLOCK();
    }
    local_40 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (local_40 == (long *)0x0) {
      local_40 = (long *)0x0;
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    else {
      *(undefined4 *)(local_40 + 1) = 1;
      local_40[2] = (long)plVar2;
      *local_40 = (long)&PTR_FUN_10226ce10;
    }
    FUN_1000eef10(lVar1 + 0xb8,&local_40);
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      lVar1 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    if (param_4 != (long *)0x0) {
      LOCK();
      plVar2 = param_4 + 1;
      lVar1 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)(*param_4 + 0x10))(param_4);
        return;
      }
      return;
    }
    return;
  case 0x7c:
    lVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    plVar2 = operator_new(0x18);
    param_4 = (long *)*param_4;
    if (param_4 == (long *)0x0) {
      *plVar2 = (long)&PTR_FUN_10226cf68;
      plVar2[1] = (long)param_1;
      plVar2[2] = 0;
    }
    else {
      LOCK();
      *(int *)(param_4 + 1) = (int)param_4[1] + 1;
      UNLOCK();
      *plVar2 = (long)&PTR_FUN_10226cf68;
      plVar2[1] = (long)param_1;
      plVar2[2] = (long)param_4;
      LOCK();
      *(int *)(param_4 + 1) = (int)param_4[1] + 1;
      UNLOCK();
    }
    local_48 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (local_48 == (long *)0x0) {
      local_48 = (long *)0x0;
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    else {
      *(undefined4 *)(local_48 + 1) = 1;
      local_48[2] = (long)plVar2;
      *local_48 = (long)&PTR_FUN_10226ce10;
    }
    FUN_1000eef10(lVar1 + 0xb8,&local_48);
    if (local_48 != (long *)0x0) {
      LOCK();
      plVar2 = local_48 + 1;
      lVar1 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    if (param_4 != (long *)0x0) {
      LOCK();
      plVar2 = param_4 + 1;
      lVar1 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)(*param_4 + 0x10))(param_4);
        return;
      }
      return;
    }
    return;
  case 0x7d:
    lVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    plVar2 = operator_new(0x18);
    param_4 = (long *)*param_4;
    if (param_4 == (long *)0x0) {
      *plVar2 = (long)&PTR_FUN_10226cfa8;
      plVar2[1] = (long)param_1;
      plVar2[2] = 0;
    }
    else {
      LOCK();
      *(int *)(param_4 + 1) = (int)param_4[1] + 1;
      UNLOCK();
      *plVar2 = (long)&PTR_FUN_10226cfa8;
      plVar2[1] = (long)param_1;
      plVar2[2] = (long)param_4;
      LOCK();
      *(int *)(param_4 + 1) = (int)param_4[1] + 1;
      UNLOCK();
    }
    local_50 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (local_50 == (long *)0x0) {
      local_50 = (long *)0x0;
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    else {
      *(undefined4 *)(local_50 + 1) = 1;
      local_50[2] = (long)plVar2;
      *local_50 = (long)&PTR_FUN_10226ce10;
    }
    FUN_1000eef10(lVar1 + 0xb8,&local_50);
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      lVar1 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
    if (param_4 != (long *)0x0) {
      LOCK();
      plVar2 = param_4 + 1;
      lVar1 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)(*param_4 + 0x10))(param_4);
        return;
      }
      return;
    }
    return;
  case 0x81:
    lVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    plVar2 = operator_new(0x18);
    param_4 = (long *)*param_4;
    if (param_4 == (long *)0x0) {
      *plVar2 = (long)&PTR_FUN_10226cfe8;
      plVar2[1] = (long)param_1;
      plVar2[2] = 0;
    }
    else {
      LOCK();
      *(int *)(param_4 + 1) = (int)param_4[1] + 1;
      UNLOCK();
      *plVar2 = (long)&PTR_FUN_10226cfe8;
      plVar2[1] = (long)param_1;
      plVar2[2] = (long)param_4;
      LOCK();
      *(int *)(param_4 + 1) = (int)param_4[1] + 1;
      UNLOCK();
    }
    local_58 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (local_58 == (long *)0x0) {
      local_58 = (long *)0x0;
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    else {
      *(undefined4 *)(local_58 + 1) = 1;
      local_58[2] = (long)plVar2;
      *local_58 = (long)&PTR_FUN_10226ce10;
    }
    FUN_1000eef10(lVar1 + 0xb8,&local_58);
    if (local_58 != (long *)0x0) {
      LOCK();
      plVar2 = local_58 + 1;
      lVar1 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
    if (param_4 != (long *)0x0) {
      LOCK();
      plVar2 = param_4 + 1;
      lVar1 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)(*param_4 + 0x10))(param_4);
        return;
      }
      return;
    }
    return;
  case 0x86:
    lVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
    plVar2 = operator_new(0x18);
    param_4 = (long *)*param_4;
    if (param_4 == (long *)0x0) {
      *plVar2 = (long)&PTR_FUN_10226d028;
      plVar2[1] = (long)param_1;
      plVar2[2] = 0;
    }
    else {
      LOCK();
      *(int *)(param_4 + 1) = (int)param_4[1] + 1;
      UNLOCK();
      *plVar2 = (long)&PTR_FUN_10226d028;
      plVar2[1] = (long)param_1;
      plVar2[2] = (long)param_4;
      LOCK();
      *(int *)(param_4 + 1) = (int)param_4[1] + 1;
      UNLOCK();
    }
    local_60 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (local_60 == (long *)0x0) {
      local_60 = (long *)0x0;
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    else {
      *(undefined4 *)(local_60 + 1) = 1;
      local_60[2] = (long)plVar2;
      *local_60 = (long)&PTR_FUN_10226ce10;
    }
    FUN_1000eef10(lVar1 + 0xb8,&local_60);
    if (local_60 != (long *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      lVar1 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
    if (param_4 == (long *)0x0) {
      return;
    }
    LOCK();
    plVar2 = param_4 + 1;
    lVar1 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar1 != 1) {
      return;
    }
    (**(code **)(*param_4 + 0x10))(param_4);
    return;
  case 0x87:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x78);
    break;
  case 0x88:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x80);
    break;
  case 0x89:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x88);
    break;
  case 0x8b:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x98);
    break;
  case 0x8c:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xa0);
    break;
  case 0x8d:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 200);
    break;
  case 0x8e:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xd0);
    break;
  case 0x90:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xa8);
    break;
  case 0x91:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    break;
  case 0x93:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb8);
    break;
  case 0x97:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xd8);
    break;
  case 0x98:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe0);
    break;
  case 0x99:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe8);
    break;
  case 0x9a:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xf0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000e9f7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}

