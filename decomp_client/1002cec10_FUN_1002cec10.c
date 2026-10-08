
undefined8 FUN_1002cec10(long param_1)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  CVmEventParameter *pCVar6;
  long *plVar7;
  long local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  CVmEvent local_140 [8];
  undefined1 local_138 [216];
  QEvent local_60 [32];
  char *local_40;
  long local_38;
  undefined1 local_29;
  
  uVar4 = FUN_100152280();
  lVar1 = param_1 + 0x18;
  lVar5 = FUN_1001548f0(uVar4,lVar1);
  if (lVar5 == 0) {
    return 0x80000009;
  }
  uVar4 = FUN_100152280();
  uVar4 = FUN_1001548f0(uVar4,lVar1);
  lVar5 = FUN_10018d490(uVar4);
  if (lVar5 == 0) {
    return 0x80000009;
  }
  local_38 = 0;
  iVar3 = _PrlEvent_CreateResponse(*(undefined8 *)(param_1 + 0x38),&local_38);
  uVar4 = 0x80000009;
  if ((iVar3 < 0) || (iVar3 = _PrlHandle_ToString(local_38,&local_40), pcVar2 = local_40, iVar3 < 0)
     ) goto LAB_1002cef8e;
  if (local_40 != (char *)0x0) {
    _strlen(local_40);
  }
  QString::fromUtf8_helper((char *)&local_150,(int)pcVar2);
  QString::normalized(&local_148,&local_150,1,0);
  CVmEvent::CVmEvent(local_140,(QTypedArrayData<unsigned_short> *)&local_148);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_29 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ced2c;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1002ced2c:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_29 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ced62;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1002ced62:
  _PrlBuffer_Free(local_40);
  pCVar6 = operator_new(0xd0);
  local_158 = (QArrayData *)QString::fromAscii_helper("",0);
  local_160 = (QArrayData *)QString::fromAscii_helper("disp_vm_request_payload",0x17);
  CVmEventParameter::CVmEventParameter(pCVar6,1,&local_158,&local_160);
  CVmEvent::addEventParameter((CVmEventParameter *)local_140);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_29 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002cee0d;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1002cee0d:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_29 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002cee43;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1002cee43:
  lVar5 = local_38;
  CBaseNode::toString(SUB81(&local_170,0),SUB81(local_138,0));
  QString::toUtf8();
  if ((1 < *(uint *)local_168) || (*(long *)(local_168 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_168,*(uint *)(local_168 + 4) + 1,*(uint *)(local_168 + 8) >> 0x1f);
  }
  iVar3 = _PrlHandle_FromString(lVar5,local_168 + *(long *)(local_168 + 0x10));
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_29 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ceee9;
    }
    QArrayData::deallocate(local_168,1,8);
  }
LAB_1002ceee9:
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_29 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002cef1f;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1002cef1f:
  uVar4 = 0x80000009;
  if (-1 < iVar3) {
    uVar4 = FUN_100152280();
    uVar4 = FUN_1001548f0(uVar4,lVar1);
    plVar7 = (long *)FUN_10018d490(uVar4);
    (**(code **)(*plVar7 + 0x60))(&local_178,plVar7);
    _PrlSrv_SendAnswer(local_178,local_38);
    uVar4 = 0;
    if (local_178 != 0) {
      _PrlHandle_Free();
    }
  }
  QEvent::~QEvent(local_60);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_140);
LAB_1002cef8e:
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  return uVar4;
}

