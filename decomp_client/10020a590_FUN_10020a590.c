
undefined8 FUN_10020a590(long param_1)

{
  QObject *pQVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int *local_68;
  QObject *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  lVar3 = FUN_100209ac0();
  if (lVar3 == 0) {
    return 0x80000009;
  }
  uVar4 = FUN_100209ac0(param_1);
  FUN_10018c2b0(uVar4);
  lVar3 = CVmConfiguration::getVmHardwareList();
  if (*(int *)(*(long *)(lVar3 + 0x1b0) + 0xc) == *(int *)(*(long *)(lVar3 + 0x1b0) + 8)) {
    return 0x3bfa;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar4 = FUN_100209ac0(param_1);
  FUN_10018c2b0(uVar4);
  lVar3 = CVmConfiguration::getVmHardwareList();
  local_58 = *(Data **)(lVar3 + 0x1b0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar5 = (long)*(int *)(local_58 + 8);
      lVar3 = *(long *)(lVar3 + 0x1b0);
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_58 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_58 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar5 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      pQVar1 = *(QObject **)local_50;
      piVar7 = (int *)0x0;
      if (pQVar1 != (QObject *)0x0) {
        piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
      }
      local_68 = piVar7;
      local_60 = pQVar1;
      FUN_10020b770(param_1 + 0x160,&local_68);
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        local_31 = *piVar7 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar7);
        }
      }
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10020a735;
    }
    QListData::dispose(local_58);
  }
LAB_10020a735:
  plVar2 = *(long **)(*(long *)(param_1 + 0x160) + 0x10 +
                     (long)*(int *)(*(long *)(param_1 + 0x160) + 8) * 8);
  lVar3 = *plVar2;
  lVar5 = 0;
  if ((lVar3 != 0) && (lVar5 = 0, *(int *)(lVar3 + 4) != 0)) {
    lVar5 = plVar2[1];
  }
  FUN_10020a460(param_1,lVar5);
  return 0;
}

