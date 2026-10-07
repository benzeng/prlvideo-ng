
void FUN_1000f0a60(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  QArrayData *pQVar7;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  CVmEvent local_148 [8];
  undefined1 local_140 [216];
  QEvent local_68 [32];
  long *local_48;
  QArrayData *local_40;
  long local_38;
  undefined1 local_29;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  FUN_10012eaa0(&local_38,param_3);
  piVar3 = *(int **)(local_38 + 0x10 + (long)*(int *)(local_38 + 8) * 8);
  param_1[1] = (long)piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    local_29 = *piVar3 != 0;
    UNLOCK();
  }
  FUN_100013180(&local_38);
  param_1[2] = (long)PTR_shared_null_100ba20d0;
  uVar4 = FUN_1000f01e0();
  uVar6 = 0;
  if (*param_2 != 0) {
    uVar6 = *(undefined8 *)(*param_2 + 0x10);
  }
  FUN_1007d6a90(&local_40,uVar6);
  plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar5 == (long *)0x0) {
    pQVar7 = (QArrayData *)param_1[2];
    if (*(int *)pQVar7 != -1) {
      if (*(int *)pQVar7 != 0) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        local_29 = *(int *)pQVar7 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000f0b51;
        pQVar7 = (QArrayData *)param_1[2];
      }
      QArrayData::deallocate(pQVar7,1,8);
    }
LAB_1000f0b51:
    pQVar7 = (QArrayData *)param_1[1];
    if (*(int *)pQVar7 != -1) {
      if (*(int *)pQVar7 != 0) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        local_29 = *(int *)pQVar7 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000f0b81;
        pQVar7 = (QArrayData *)param_1[1];
      }
      QArrayData::deallocate(pQVar7,2,8);
    }
LAB_1000f0b81:
    plVar5 = (long *)*param_1;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    operator_delete(param_1);
    plVar5 = (long *)0x0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = (long)param_1;
    *plVar5 = (long)&PTR_FUN_10110cda0;
  }
  local_48 = plVar5;
  FUN_1000f5470(uVar4,&local_40,&local_48);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000f0c0f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000f0c0f:
  local_150 = *(QArrayData **)(DAT_1011c3650 + 0x18);
  if (1 < *(int *)local_150 + 1U) {
    LOCK();
    *(int *)local_150 = *(int *)local_150 + 1;
    local_29 = *(int *)local_150 != 0;
    UNLOCK();
  }
  local_158 = (QArrayData *)QString::fromAscii_helper("",0);
  CVmEvent::CVmEvent(local_148,0x18aec,&local_150,0,100000,0,&local_158,0);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_29 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000f0cb6;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1000f0cb6:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_29 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000f0cec;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1000f0cec:
  lVar2 = DAT_1011c3650;
  CBaseNode::toString(SUB81(&local_160,0),SUB81(local_140,0));
  FUN_100063e20(lVar2,&local_160,0xbbb,param_2,0);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_29 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000f0d56;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1000f0d56:
  QEvent::~QEvent(local_68);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_148);
  return;
}

