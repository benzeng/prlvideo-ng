
undefined8
FUN_1004933f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  CVmEventParameter *pCVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  long *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  CVmEvent local_140 [8];
  undefined1 local_138 [216];
  QEvent local_60 [32];
  long *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar3 = FUN_1002a6010(param_4);
  iVar6 = -0x7ffcbffc;
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == 4)) {
    iVar6 = *(int *)(lVar3 + 0x2c);
  }
  local_38 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_100488f00(param_4,&local_38,0x800);
  uVar5 = 0x80034004;
  if (iVar6 == 0) {
    uVar5 = 0;
  }
  FUN_100119090(&local_40,param_1,uVar5);
  if (iVar6 != 0) {
    lVar3 = 0;
    if (local_40 != (long *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      lVar3 = local_40[2];
      LOCK();
      plVar1 = local_40 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    CVmEvent::CVmEvent(local_140);
    CVmEventBase::setEventCode((int)local_140);
    pCVar4 = operator_new(0xd0);
    local_148 = local_38;
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
    }
    local_150 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
    CVmEventParameter::CVmEventParameter(pCVar4,1,&local_148,&local_150);
    CVmEvent::addEventParameter((CVmEventParameter *)local_140);
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_29 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100493555;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_100493555:
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_29 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10049358b;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_10049358b:
    CBaseNode::toString(SUB81(&local_158,0),SUB81(local_138,0));
    FUN_100125480(lVar3,&local_158);
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_29 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004935e7;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_1004935e7:
    QString::toUtf8();
    if ((1 < *(uint *)local_160) || (*(long *)(local_160 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_160,*(uint *)(local_160 + 4) + 1,*(uint *)(local_160 + 8) >> 0x1f);
    }
    FUN_1008e3970("TCHOST","ToolsCenterHost",0,"prl_newsid failed: %s",
                  local_160 + *(long *)(local_160 + 0x10));
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_29 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100493683;
      }
      QArrayData::deallocate(local_160,1,8);
    }
LAB_100493683:
    QEvent::~QEvent(local_60);
    CVmEventBase::~CVmEventBase((CVmEventBase *)local_140);
  }
  uVar5 = DAT_1011c3650;
  FUN_10011cf50(&local_170);
  cVar7 = '\0';
  if (local_170 != (long *)0x0) {
    cVar7 = (char)local_170[2];
  }
  CBaseNode::toString(SUB81(&local_168,0),(bool)(cVar7 + '\b'));
  FUN_100063e20(uVar5,&local_168,0x1389,param_1,0);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_29 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100493733;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100493733:
  if (local_170 != (long *)0x0) {
    LOCK();
    plVar1 = local_170 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_170 + 0x10))();
    }
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return 0;
}

