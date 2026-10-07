
void FUN_1000bea50(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  CVmEventParameter *pCVar3;
  long *plVar4;
  undefined4 uVar5;
  long *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  CVmEvent local_130 [8];
  undefined1 local_128 [216];
  QEvent local_50 [39];
  undefined1 local_29;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x109c8) + 0x1f0);
  uVar5 = 0x188a0;
  if ((uVar1 & 0x2000000) == 0) {
    uVar5 = 0x1889f;
    if ((uVar1 & 0x200000) != 0) {
      uVar5 = 0x188a5;
    }
  }
  local_138 = *(QArrayData **)(DAT_1011c3650 + 0x18);
  if (1 < *(int *)local_138 + 1U) {
    LOCK();
    *(int *)local_138 = *(int *)local_138 + 1;
    local_29 = *(int *)local_138 != 0;
    UNLOCK();
  }
  local_140 = (QArrayData *)QString::fromAscii_helper("",0);
  CVmEvent::CVmEvent(local_130,uVar5,&local_138,0,100000,0,&local_140,0);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_29 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000beb34;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1000beb34:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000beb6a;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1000beb6a:
  pCVar3 = operator_new(0xd0);
  QString::number((uint)&local_148,param_2);
  local_150 = (QArrayData *)QString::fromAscii_helper("progress_changed",0x10);
  CVmEventParameter::CVmEventParameter(pCVar3,0,&local_148);
  CVmEvent::addEventParameter((CVmEventParameter *)local_130);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_29 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000bec08;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1000bec08:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_29 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000bec3e;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1000bec3e:
  lVar2 = DAT_1011c3650;
  CBaseNode::toString(SUB81(&local_158,0),SUB81(local_128,0));
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_160 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_100bef0d0;
    local_160 = plVar4;
  }
  FUN_100063e20(lVar2,&local_158,0xbbb,&local_160,0);
  if (local_160 != (long *)0x0) {
    LOCK();
    plVar4 = local_160 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_160 + 0x10))();
    }
  }
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_29 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000bed0b;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1000bed0b:
  QEvent::~QEvent(local_50);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_130);
  return;
}

