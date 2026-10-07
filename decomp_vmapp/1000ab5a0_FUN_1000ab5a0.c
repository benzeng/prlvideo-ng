
void FUN_1000ab5a0(long param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  QArrayData *pQVar2;
  QString this;
  long *plVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x110) != 0) {
    pcVar1 = *(code **)(*param_2 + 0x1d0);
    CBaseNode::toString(SUB81(&local_40,0),(bool)((char)*(long *)(param_1 + 0x110) + '\x10'));
    (*pcVar1)(param_2,&local_40);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000ab61c;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1000ab61c:
  pQVar2 = (QArrayData *)*param_3;
  if (*(int *)(pQVar2 + 4) == 0) {
    FUN_1000aa4c0(&local_48,param_1);
  }
  else {
    local_48 = pQVar2;
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
  }
  if (*(int *)(local_48 + 4) == 0) {
    FUN_1008e3970("","vm",0,"Cannot create guest screenshot CPCIVideo pointer = %p",
                  *(undefined8 *)(param_1 + 0x1a38));
    goto LAB_1000ab70a;
  }
  this.field0_0x0 = operator_new(0xa8);
  CRepScreenShot::CRepScreenShot((CRepScreenShot *)this.field0_0x0);
  pQVar2 = local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  CRepScreenShot::setName(this);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ab6c1;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1000ab6c1:
  CProblemReport::getUserDefinedData();
  plVar3 = (long *)CRepUserDefinedData::getScreenShots();
  (**(code **)(*plVar3 + 0xa0))(plVar3,this.field0_0x0);
LAB_1000ab70a:
  FUN_10009f410(param_1,param_2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

