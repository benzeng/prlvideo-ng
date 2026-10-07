
void FUN_10047f230(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  QArrayData *pQVar6;
  long lVar7;
  long *local_48;
  long *local_40;
  undefined1 local_31;
  
  lVar3 = *param_1;
  QMutex::lock();
  plVar1 = param_1 + 1;
  lVar5 = FUN_10047def0(lVar3 + 0x50,plVar1);
  if (lVar5 != 0) {
    if (*(int *)(*(long *)(lVar5 + 0x30) + 0xc) == *(int *)(*(long *)(lVar5 + 0x30) + 8)) {
      *(undefined1 *)(lVar5 + 0x22) = 0;
      local_40 = (long *)0x0;
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = 0;
      FUN_100495b40(&local_40,lVar5 + 0x30);
    }
    QMutex::unlock();
    if (lVar7 != 0) {
      FUN_1004c07d0(lVar3 + 0x10,lVar7,0);
    }
    plVar4 = local_40;
    if ((local_40 != (long *)0x0) && (local_40[2] != 0)) {
      local_48 = local_40;
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      FUN_10047e9d0(lVar3,param_1 + 2,&local_48,plVar1);
      if (local_48 != (long *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
    }
    if (param_1 == (long *)0x0) goto LAB_10047f3f8;
    pQVar6 = (QArrayData *)param_1[2];
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_31 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10047f3c2;
        pQVar6 = (QArrayData *)param_1[2];
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
LAB_10047f3c2:
    pQVar6 = (QArrayData *)*plVar1;
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_31 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10047f3f0;
        pQVar6 = (QArrayData *)*plVar1;
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
LAB_10047f3f0:
    operator_delete(param_1);
LAB_10047f3f8:
    if (plVar4 == (long *)0x0) {
      return;
    }
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 != 1) {
      return;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  QMutex::unlock();
  pQVar6 = (QArrayData *)param_1[2];
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047f2c7;
      pQVar6 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_10047f2c7:
  pQVar6 = (QArrayData *)*plVar1;
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047f2f5;
      pQVar6 = (QArrayData *)*plVar1;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_10047f2f5:
  operator_delete(param_1);
  return;
}

