
bool FUN_10006d3e0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *local_150;
  QArrayData *local_148;
  long *local_140;
  CVmEvent local_138 [8];
  undefined1 local_130 [216];
  QEvent local_58 [32];
  long *local_38;
  undefined1 local_29;
  
  FUN_10011a560(&local_38);
  CVmEvent::CVmEvent(local_138);
  cVar3 = (**(code **)(*(long *)local_38[2] + 0x10))();
  iVar4 = -0x7fffff7d;
  if ((cVar3 != '\0') &&
     (iVar4 = FUN_1000b1bd0(*(undefined8 *)(param_1 + 0x20),local_138), -1 < iVar4)) {
    cVar3 = FUN_10006b4e0(param_1,param_2,iVar4);
    goto LAB_10006d589;
  }
  CVmEventBase::setEventCode((int)local_138);
  uVar5 = CVmEventBase::getEventCode();
  FUN_100119090(&local_140,param_2,uVar5);
  lVar6 = 0;
  if (local_140 != (long *)0x0) {
    LOCK();
    *(int *)(local_140 + 1) = (int)local_140[1] + 1;
    UNLOCK();
    lVar6 = local_140[2];
    LOCK();
    plVar1 = local_140 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_140 + 0x10))();
    }
  }
  CBaseNode::toString(SUB81(&local_148,0),SUB81(local_130,0));
  FUN_100125480(lVar6,&local_148);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_29 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10006d512;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_10006d512:
  FUN_10011cf50(&local_150,lVar6);
  lVar6 = 0;
  if (local_150 != (long *)0x0) {
    lVar6 = local_150[2];
  }
  cVar3 = FUN_10006b660(param_1,param_2,lVar6);
  if (local_150 != (long *)0x0) {
    LOCK();
    plVar1 = local_150 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*local_150 + 0x10))();
    }
  }
  if (local_140 != (long *)0x0) {
    LOCK();
    plVar1 = local_140 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*local_140 + 0x10))();
    }
  }
LAB_10006d589:
  QEvent::~QEvent(local_58);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_138);
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return -1 < iVar4 && cVar3 != '\0';
}

