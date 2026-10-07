
void FUN_1000b4150(undefined8 param_1,int param_2,int param_3)

{
  long lVar1;
  CVmEventParameter *pCVar2;
  long *plVar3;
  long *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  CVmEvent local_138 [8];
  undefined1 local_130 [216];
  QEvent local_58 [39];
  undefined1 local_31;
  
  local_140 = *(QArrayData **)(DAT_1011c3650 + 0x18);
  if (1 < *(int *)local_140 + 1U) {
    LOCK();
    *(int *)local_140 = *(int *)local_140 + 1;
    local_31 = *(int *)local_140 != 0;
    UNLOCK();
  }
  local_148 = (QArrayData *)QString::fromAscii_helper("",0);
  CVmEvent::CVmEvent(local_138,0x186f3,&local_140,0,100000,0,&local_148,0);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b4212;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1000b4212:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b4248;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1000b4248:
  pCVar2 = operator_new(0xd0);
  QString::number((uint)&local_150,param_2);
  local_158 = (QArrayData *)QString::fromAscii_helper("vm_debug_state",0xe);
  CVmEventParameter::CVmEventParameter(pCVar2,0,&local_150);
  CVmEvent::addEventParameter((CVmEventParameter *)local_138);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b42e6;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1000b42e6:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b431c;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1000b431c:
  if (param_3 != -1) {
    pCVar2 = operator_new(0xd0);
    QString::number((uint)&local_160,param_3);
    local_168 = (QArrayData *)QString::fromAscii_helper("vm_debug_port",0xd);
    CVmEventParameter::CVmEventParameter(pCVar2,0,&local_160);
    CVmEvent::addEventParameter((CVmEventParameter *)local_138);
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b43c4;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_1000b43c4:
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b43fa;
      }
      QArrayData::deallocate(local_160,2,8);
    }
  }
LAB_1000b43fa:
  lVar1 = DAT_1011c3650;
  CBaseNode::toString(SUB81(&local_170,0),SUB81(local_130,0));
  plVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_178 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(plVar3 + 1) = 1;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_100bef0d0;
    local_178 = plVar3;
  }
  FUN_100063e20(lVar1,&local_170,0xbbb,&local_178,0);
  if (local_178 != (long *)0x0) {
    LOCK();
    plVar3 = local_178 + 1;
    lVar1 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*local_178 + 0x10))();
    }
  }
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b44c8;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1000b44c8:
  QEvent::~QEvent(local_58);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_138);
  return;
}

