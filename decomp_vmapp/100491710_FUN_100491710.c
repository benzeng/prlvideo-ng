
undefined8
FUN_100491710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  CVmEventParameter *pCVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  CVmEvent local_258 [8];
  undefined1 local_250 [216];
  QEvent local_178 [32];
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  CVmEvent local_130 [8];
  undefined1 local_128 [216];
  QEvent local_50 [39];
  undefined1 local_29;
  
  lVar1 = FUN_1002a6010(param_4);
  uVar4 = 0xffffffff;
  if ((lVar1 == 0) || (uVar4 = 1, *(int *)(lVar1 + 0x10) != 4)) {
    FUN_1008e3970("TCHOST","ToolsCenterHost",0,"GetToolCenterRetcode() = %d",uVar4);
    iVar3 = -0x7ffcbffc;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x2c);
  }
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("TCHOST","ToolsCenterHost",2,"Set network settings ret=%d",iVar3);
  }
  if (iVar3 != 0) {
    local_138 = *(QArrayData **)(DAT_1011c3650 + 0x18);
    if (1 < *(int *)local_138 + 1U) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + 1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
    }
    local_140 = (QArrayData *)QString::fromAscii_helper("",0);
    CVmEvent::CVmEvent(local_130,0x18896,&local_138,0,0x80034005,0,&local_140,0);
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_29 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10049184b;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_10049184b:
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_29 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100491881;
      }
      QArrayData::deallocate(local_138,2,8);
    }
LAB_100491881:
    pCVar2 = operator_new(0xd0);
    local_148 = (QArrayData *)
                QString::fromAscii_helper("Parallels Tools returned an unknown error. ",0x2b);
    local_150 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
    CVmEventParameter::CVmEventParameter(pCVar2,1,&local_148,&local_150);
    CVmEvent::addEventParameter((CVmEventParameter *)local_130);
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_29 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100491926;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_100491926:
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_29 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10049195c;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_10049195c:
    lVar1 = DAT_1011c3650;
    CBaseNode::toString(SUB81(&local_158,0),SUB81(local_128,0));
    FUN_100063e20(lVar1,&local_158,0xbbb,param_1,0);
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_29 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004919c6;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_1004919c6:
    QEvent::~QEvent(local_50);
    CVmEventBase::~CVmEventBase((CVmEventBase *)local_130);
  }
  local_260 = *(QArrayData **)(DAT_1011c3650 + 0x18);
  if (1 < *(int *)local_260 + 1U) {
    LOCK();
    *(int *)local_260 = *(int *)local_260 + 1;
    local_29 = *(int *)local_260 != 0;
    UNLOCK();
  }
  local_268 = (QArrayData *)QString::fromAscii_helper("",0);
  CVmEvent::CVmEvent(local_258,0x186e6,&local_260,0,100000,0,&local_268,0);
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_29 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100491a82;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_100491a82:
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      local_29 = *(int *)local_260 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100491ab8;
    }
    QArrayData::deallocate(local_260,2,8);
  }
LAB_100491ab8:
  lVar1 = DAT_1011c3650;
  CBaseNode::toString(SUB81(&local_270,0),SUB81(local_250,0));
  FUN_100063e20(lVar1,&local_270,0xbbb,param_1,0);
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_29 = *(int *)local_270 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100491b22;
    }
    QArrayData::deallocate(local_270,2,8);
  }
LAB_100491b22:
  QEvent::~QEvent(local_178);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_258);
  return 0;
}

