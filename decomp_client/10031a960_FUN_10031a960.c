
undefined8 FUN_10031a960(long param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar7;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  uint local_34;
  
  uVar7 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 0x20);
  cVar1 = FUN_10033fc40(*(undefined8 *)(param_1 + 0xd8),&local_34,0);
  if ((cVar1 != '\0') && (local_34 == 0)) {
    if (DAT_10230ffd0 < 1) {
      return 0;
    }
    local_48 = *(QArrayData **)(param_1 + 0x28);
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      UNLOCK();
      local_34 = (uint)(*(int *)local_48 != 0);
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",1,
                  "VM [%s] desktop is being closed and cannot be opened. Ignore open request.",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        local_34 = CONCAT31(local_34._1_3_,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_10031ac9f;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_10031ac9f:
    if (*(int *)local_48 == -1) {
      return 0;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      local_34 = CONCAT31(local_34._1_3_,*(int *)local_48 != 0);
      if (*(int *)local_48 != 0) {
        return 0;
      }
    }
    QArrayData::deallocate(local_48,2,8);
    return 0;
  }
  if ((((*(long *)(param_1 + 0x150) != 0) && (*(int *)(*(long *)(param_1 + 0x150) + 4) != 0)) &&
      (*(long *)(param_1 + 0x158) != 0)) && (cVar1 = CAbstractTask::isFinished(), cVar1 == '\0')) {
    (**(code **)(**(long **)(param_1 + 0x158) + 0x80))();
    goto LAB_10031abe1;
  }
  local_58 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    UNLOCK();
    local_34 = CONCAT31(local_34._1_3_,*(int *)local_58 != 0);
  }
  QString::toLocal8Bit();
  pQVar6 = local_50 + *(long *)(local_50 + 0x10);
  EnumUtils::enumToString(&local_68,param_2,1);
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,
                "About to create open VM [%s] desktop into [%s] view mode task with %d action on open"
                ,pQVar6,local_60 + *(long *)(local_60 + 0x10),CONCAT44(uVar7,param_3));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      local_34 = CONCAT31(local_34._1_3_,*(int *)local_60 != 0);
      if (*(int *)local_60 != 0) goto LAB_10031aa75;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10031aa75:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      local_34 = CONCAT31(local_34._1_3_,*(int *)local_68 != 0);
      if (*(int *)local_68 != 0) goto LAB_10031aaa5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10031aaa5:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      local_34 = CONCAT31(local_34._1_3_,*(int *)local_50 != 0);
      if (*(int *)local_50 != 0) goto LAB_10031aad5;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10031aad5:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      local_34 = CONCAT31(local_34._1_3_,*(int *)local_58 != 0);
      if (*(int *)local_58 != 0) goto LAB_10031ab09;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10031ab09:
  pQVar2 = operator_new(0x58);
  FUN_100224f40(pQVar2,param_1,param_2,param_3);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar4 = *(int **)(param_1 + 0x150);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      local_34 = CONCAT31(local_34._1_3_,*piVar3 != 0);
      piVar4 = *(int **)(param_1 + 0x150);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      local_34 = CONCAT31(local_34._1_3_,*piVar4 != 0);
      if ((*piVar4 == 0) && (*(void **)(param_1 + 0x150) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x150));
      }
    }
    *(int **)(param_1 + 0x150) = piVar3;
    *(QObject **)(param_1 + 0x158) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    local_34 = CONCAT31(local_34._1_3_,*piVar3 != 0);
    if (*piVar3 == 0) {
      operator_delete(piVar3);
    }
  }
  CAbstractTask::execute();
LAB_10031abe1:
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x150) != 0) &&
     (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x150) + 4) != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x158);
  }
  return uVar5;
}

