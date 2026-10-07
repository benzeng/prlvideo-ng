
void FUN_100043250(undefined8 param_1,undefined8 *param_2,long *param_3,uint param_4)

{
  uint *puVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  long *plVar6;
  long *local_48;
  long *local_40;
  long *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (param_4 < 0x20) {
    return;
  }
  plVar6 = (long *)*param_3;
  piVar5 = (int *)plVar6[2];
  if (*piVar5 != 1) {
    return;
  }
  if (piVar5[1] != 0xe) {
    return;
  }
  switch(piVar5[2]) {
  case 0:
    if (plVar6 != (long *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      piVar5 = (int *)plVar6[2];
    }
    puVar1 = (uint *)(piVar5 + 7);
    if ((ulong)*puVar1 + 0x20 == (ulong)param_4) {
      if (plVar6 == (long *)0x0) {
        piVar5 = (int *)0x0;
      }
      if ((ulong)(uint)piVar5[0xc] + 0x14 <= (ulong)*puVar1 + 0x20) {
        FUN_100045b10(param_1,piVar5 + 8);
      }
    }
    LOCK();
    plVar2 = plVar6 + 1;
    iVar4 = (int)*plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    break;
  default:
    goto switchD_10004329e_caseD_1;
  case 4:
    local_30 = (QArrayData *)*param_2;
    if (1 < *(int *)local_30 + 1U) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      plVar6 = (long *)*param_3;
    }
    if (plVar6 != (long *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_38 = plVar6;
    FUN_1000435e0(param_1,&local_30,&local_38);
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    if (*(int *)local_30 == -1) {
      return;
    }
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
    return;
  case 5:
    QMutex::lock();
    lVar3 = DAT_1011cc7e0;
    if (DAT_1011cc7e0 == 0) {
      QMutex::unlock();
      return;
    }
    DAT_1011cc7e8 = DAT_1011cc7e8 + 1;
    QMutex::unlock();
    FUN_100484230(lVar3);
    FUN_10003b2b0(&DAT_1011cc7d0);
    return;
  case 6:
    if (plVar6 != (long *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_40 = plVar6;
    FUN_100043a20(param_1,&local_40,param_4);
    if (plVar6 == (long *)0x0) {
      return;
    }
    LOCK();
    plVar2 = plVar6 + 1;
    iVar4 = (int)*plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    break;
  case 7:
    if (plVar6 != (long *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_48 = plVar6;
    FUN_100043b60(param_1,&local_48,param_4);
    if (plVar6 == (long *)0x0) {
      return;
    }
    LOCK();
    plVar2 = plVar6 + 1;
    iVar4 = (int)*plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
  }
  if (iVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000100043446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x10))(plVar6);
    return;
  }
switchD_10004329e_caseD_1:
  return;
}

