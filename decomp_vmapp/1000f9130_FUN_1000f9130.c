
void FUN_1000f9130(long param_1,int param_2)

{
  long lVar1;
  CVmEventParameter *pCVar2;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  CVmEvent local_138 [8];
  undefined1 local_130 [216];
  QEvent local_58 [39];
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  if (*(long *)(*(long *)(param_1 + 0x48) + 0x10) == 0) {
    return;
  }
  local_140 = *(QArrayData **)(DAT_1011c3650 + 0x18);
  if (1 < *(int *)local_140 + 1U) {
    LOCK();
    *(int *)local_140 = *(int *)local_140 + 1;
    local_31 = *(int *)local_140 != 0;
    UNLOCK();
  }
  local_148 = (QArrayData *)QString::fromAscii_helper("",0);
  CVmEvent::CVmEvent(local_138,0x186d3,&local_140,0,100000,0,&local_148,0);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f920b;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1000f920b:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f9241;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1000f9241:
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",2,"Reporting guest dump progress %u%%",param_2);
  }
  pCVar2 = operator_new(0xd0);
  QString::number((uint)&local_150,param_2);
  local_158 = (QArrayData *)QString::fromAscii_helper("progress_changed",0x10);
  CVmEventParameter::CVmEventParameter(pCVar2,0,&local_150,&local_158);
  CVmEvent::addEventParameter((CVmEventParameter *)local_138);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f930f;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1000f930f:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f9345;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1000f9345:
  lVar1 = DAT_1011c3650;
  CBaseNode::toString(SUB81(&local_160,0),SUB81(local_130,0));
  FUN_100063e20(lVar1,&local_160,0xbbb,param_1 + 0x48,0);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f93b4;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1000f93b4:
  QEvent::~QEvent(local_58);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_138);
  return;
}

