
void FUN_100484e00(undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  CVmEventParameter *pCVar4;
  char cVar5;
  long lVar6;
  long *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  CVmEvent local_138 [8];
  undefined1 local_130 [216];
  QEvent local_58 [32];
  long *local_38;
  undefined1 local_29;
  
  FUN_100119090(&local_38,param_1,0);
  if (local_38 == (long *)0x0) {
LAB_100484e59:
    lVar6 = 0;
    FUN_1008e3970("TCHOST","ToolsCenterHost",0,"ASSERT( %s ) occured in %s:%d [%s]","pResponseCmd",
                  "../ToolsCenterHost.cpp",0x747,"SendRetcode");
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    lVar6 = local_38[2];
    LOCK();
    plVar1 = local_38 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
    if (lVar6 == 0) goto LAB_100484e59;
  }
  CVmEvent::CVmEvent(local_138);
  pCVar4 = operator_new(0xd0);
  QString::number((int)&local_140,param_2);
  local_148 = (QArrayData *)QString::fromAscii_helper("vm_exec_app_ret_code",0x14);
  CVmEventParameter::CVmEventParameter(pCVar4,0,&local_140,&local_148);
  CVmEvent::addEventParameter((CVmEventParameter *)local_138);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_29 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100484f47;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100484f47:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_29 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100484f7d;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100484f7d:
  CBaseNode::toString(SUB81(&local_150,0),SUB81(local_130,0));
  FUN_100128660(lVar6);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_29 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100484fd9;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100484fd9:
  uVar3 = DAT_1011c3650;
  FUN_10011cf50(&local_160);
  cVar5 = '\0';
  if (local_160 != (long *)0x0) {
    cVar5 = (char)local_160[2];
  }
  CBaseNode::toString(SUB81(&local_158,0),(bool)(cVar5 + '\b'));
  FUN_100063e20(uVar3,&local_158,0x1389,param_1,0);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_29 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100485074;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100485074:
  if (local_160 != (long *)0x0) {
    LOCK();
    plVar1 = local_160 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*local_160 + 0x10))();
    }
  }
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
  return;
}

