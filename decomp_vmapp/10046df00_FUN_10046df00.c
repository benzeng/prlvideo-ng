
undefined8 FUN_10046df00(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  CVmGuestOsInformation *pCVar4;
  long *plVar5;
  long lVar6;
  CGuestToolsList *pCVar7;
  CBaseNode *this;
  bool bVar8;
  QArrayData *local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  
  pCVar4 = operator_new(0xd8);
  CVmGuestOsInformation::CVmGuestOsInformation(pCVar4);
  plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  bVar8 = plVar5 == (long *)0x0;
  if (bVar8) {
    (**(code **)(*(long *)pCVar4 + 0x88))(pCVar4);
    plVar5 = (long *)0x0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = (long)pCVar4;
    *plVar5 = (long)&PTR_FUN_10111c5d8;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  plVar2 = *(long **)(param_1 + 0x18);
  *(long **)(param_1 + 0x18) = plVar5;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (!bVar8) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  this = (CBaseNode *)0x0;
  if (*(long *)(param_1 + 0x18) != 0) {
    this = *(CBaseNode **)(*(long *)(param_1 + 0x18) + 0x10);
  }
  local_38 = (QArrayData *)*param_2;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_2b = *(int *)local_38 != 0;
    UNLOCK();
  }
  iVar3 = CBaseNode::fromString
                    (this,(QTypedArrayData<unsigned_short> *)&local_38,false,(QString *)0x0,
                     (int *)0x0,(int *)0x0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_10046e027;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10046e027:
  if (iVar3 != 0) {
    pCVar4 = operator_new(0xd8);
    CVmGuestOsInformation::CVmGuestOsInformation(pCVar4);
    plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    bVar8 = plVar5 == (long *)0x0;
    if (bVar8) {
      (**(code **)(*(long *)pCVar4 + 0x88))(pCVar4);
      plVar5 = (long *)0x0;
    }
    else {
      *(undefined4 *)(plVar5 + 1) = 1;
      plVar5[2] = (long)pCVar4;
      *plVar5 = (long)&PTR_FUN_10111c5d8;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    plVar2 = *(long **)(param_1 + 0x18);
    *(long **)(param_1 + 0x18) = plVar5;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    if (!bVar8) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar6 = CVmGuestOsInformation::getGuestToolsList();
  if (lVar6 == 0) {
    pCVar7 = operator_new(0xa0);
    CGuestToolsList::CGuestToolsList(pCVar7);
    pCVar7 = (CGuestToolsList *)0x0;
    if (*(long *)(param_1 + 0x18) != 0) {
      pCVar7 = *(CGuestToolsList **)(*(long *)(param_1 + 0x18) + 0x10);
    }
    CVmGuestOsInformation::setGuestToolsList(pCVar7);
  }
  return 1;
}

