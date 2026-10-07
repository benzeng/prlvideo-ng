
undefined8
FUN_1004887a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  CVmEventParameter *pCVar5;
  undefined8 uVar6;
  char cVar7;
  long *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  CVmEvent local_140 [8];
  undefined1 local_138 [216];
  QEvent local_60 [32];
  long *local_40;
  undefined1 local_31;
  
  lVar4 = FUN_1002a6010(param_4);
  iVar3 = -0x7ffcbffc;
  if ((lVar4 != 0) && (iVar3 = -0x7ffcbffc, *(int *)(lVar4 + 0x10) == 4)) {
    iVar3 = *(int *)(lVar4 + 0x2c);
  }
  uVar6 = 0x80034004;
  if (iVar3 == 0) {
    uVar6 = 0;
  }
  FUN_100119090(&local_40,param_1,uVar6);
  lVar4 = 0;
  if (local_40 != (long *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    lVar4 = local_40[2];
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
  if (iVar3 != 0) {
    CVmEventBase::setEventCode((int)local_140);
    pCVar5 = operator_new(0xd0);
    local_150 = (QArrayData *)QString::fromAscii_helper("%1",2);
    QString::arg(&local_148,&local_150,(long)iVar3,0,10,0x20);
    local_158 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
    CVmEventParameter::CVmEventParameter(pCVar5,0,&local_148,&local_158);
    CVmEvent::addEventParameter((CVmEventParameter *)local_140);
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_31 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10048890f;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_10048890f:
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100488947;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_100488947:
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10048897d;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_10048897d:
    local_160 = (QArrayData *)PTR_shared_null_100ba20d0;
    iVar3 = FUN_100488f00(param_4,&local_160,0x1000);
    if (-1 < iVar3) {
      pCVar5 = operator_new(0xd0);
      local_168 = local_160;
      if (1 < *(int *)local_160 + 1U) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + 1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
      }
      local_170 = (QArrayData *)QString::fromAscii_helper("vm_message_param_1",0x12);
      CVmEventParameter::CVmEventParameter(pCVar5,1,&local_168,&local_170);
      CVmEvent::addEventParameter((CVmEventParameter *)local_140);
      if (*(int *)local_170 != -1) {
        if (*(int *)local_170 != 0) {
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_31 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100488a53;
        }
        QArrayData::deallocate(local_170,2,8);
      }
LAB_100488a53:
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_31 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100488a89;
        }
        QArrayData::deallocate(local_168,2,8);
      }
    }
LAB_100488a89:
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100488abf;
      }
      QArrayData::deallocate(local_160,2,8);
    }
  }
LAB_100488abf:
  CBaseNode::toString(SUB81(&local_178,0),SUB81(local_138,0));
  FUN_100125480(lVar4);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100488b1b;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_100488b1b:
  uVar6 = DAT_1011c3650;
  FUN_10011cf50(&local_188);
  cVar7 = '\0';
  if (local_188 != (long *)0x0) {
    cVar7 = (char)local_188[2];
  }
  CBaseNode::toString(SUB81(&local_180,0),(bool)(cVar7 + '\b'));
  FUN_100063e20(uVar6,&local_180,0x1389,param_1,0);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100488bb6;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_100488bb6:
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar1 = local_188 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_188 + 0x10))();
    }
  }
  QEvent::~QEvent(local_60);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_140);
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return 0;
}

