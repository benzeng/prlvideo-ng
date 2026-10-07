
undefined1 FUN_10006d8f0(long param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  CVmEventParameter *pCVar6;
  long lVar7;
  int iVar8;
  long *local_188;
  QArrayData *local_180;
  long *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  CVmEvent local_130 [8];
  undefined1 local_128 [216];
  QEvent local_50 [39];
  undefined1 local_29;
  
  uVar2 = *(undefined4 *)(*(long *)(*param_2 + 0x10) + 0x40);
  local_138 = *(QArrayData **)(*(long *)(param_1 + 0x10) + 0x18);
  if (1 < *(int *)local_138 + 1U) {
    LOCK();
    *(int *)local_138 = *(int *)local_138 + 1;
    local_29 = *(int *)local_138 != 0;
    UNLOCK();
  }
  local_140 = (QArrayData *)QString::fromAscii_helper("",0);
  CVmEvent::CVmEvent(local_130,uVar2,&local_138,0,100000,0,&local_140,0);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_29 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10006d9b0;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10006d9b0:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10006d9e6;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10006d9e6:
  uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + 0xa4);
  iVar8 = 5;
  if (uVar3 != 4) {
    iVar8 = (uVar3 < 0xe) + 3;
  }
  pCVar6 = operator_new(0xd0);
  QString::number((uint)&local_148,iVar8);
  local_150 = (QArrayData *)QString::fromAscii_helper("vm_runtime_status",0x11);
  CVmEventParameter::CVmEventParameter(pCVar6,0,&local_148,&local_150);
  CVmEvent::addEventParameter((CVmEventParameter *)local_130);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_29 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10006daa2;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10006daa2:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_29 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10006dad8;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_10006dad8:
  pCVar6 = operator_new(0xd0);
  QString::number((uint)&local_158,1);
  local_160 = (QArrayData *)QString::fromAscii_helper("vm_guest_tool_status",0x14);
  CVmEventParameter::CVmEventParameter(pCVar6,0,&local_158,&local_160);
  CVmEvent::addEventParameter((CVmEventParameter *)local_130);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_29 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10006db78;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_10006db78:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_29 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10006dbae;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10006dbae:
  pCVar6 = operator_new(0xd0);
  QString::number((uint)&local_168,2);
  local_170 = (QArrayData *)QString::fromAscii_helper("vm_kernel_status",0x10);
  CVmEventParameter::CVmEventParameter(pCVar6,0,&local_168,&local_170);
  CVmEvent::addEventParameter((CVmEventParameter *)local_130);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_29 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10006dc4e;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_10006dc4e:
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_29 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10006dc84;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_10006dc84:
  FUN_100119090(&local_178,param_2,0);
  lVar7 = 0;
  if (local_178 != (long *)0x0) {
    LOCK();
    *(int *)(local_178 + 1) = (int)local_178[1] + 1;
    UNLOCK();
    lVar7 = local_178[2];
    LOCK();
    plVar1 = local_178 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_178 + 0x10))();
    }
  }
  CBaseNode::toString(SUB81(&local_180,0),SUB81(local_128,0));
  FUN_100125240(lVar7,&local_180);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_29 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10006dd25;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_10006dd25:
  lVar7 = 0;
  if (local_178 != (long *)0x0) {
    lVar7 = local_178[2];
  }
  FUN_10011cf50(&local_188,lVar7);
  lVar7 = 0;
  if (local_188 != (long *)0x0) {
    lVar7 = local_188[2];
  }
  uVar5 = FUN_10006b660(param_1,param_2,lVar7);
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar1 = local_188 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_188 + 0x10))();
    }
  }
  if (local_178 != (long *)0x0) {
    LOCK();
    plVar1 = local_178 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_178 + 0x10))();
    }
  }
  QEvent::~QEvent(local_50);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_130);
  return uVar5;
}

