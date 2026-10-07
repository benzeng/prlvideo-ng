
void FUN_10011cf80(long param_1,undefined8 *param_2)

{
  long lVar1;
  CVmEventParameter *pCVar2;
  QString QVar3;
  CVmEventParameter *pCVar4;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  }
  local_38 = (QArrayData *)*param_2;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  CBaseNode::fromString
            ((CBaseNode *)(lVar1 + 8),(QTypedArrayData<unsigned_short> *)&local_38,false,
             (QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011d001;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10011d001:
  QVar3.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar3.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("proto_force_questions_sign",0x1a);
  lVar1 = CVmEvent::getEventParameter(QVar3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011d065;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10011d065:
  if (lVar1 == 0) {
    pCVar4 = (CVmEventParameter *)0x0;
    if (*(long *)(param_1 + 8) != 0) {
      pCVar4 = *(CVmEventParameter **)(*(long *)(param_1 + 8) + 0x10);
    }
    pCVar2 = operator_new(0xd0);
    QString::number((uint)&local_48,0);
    local_50 = (QArrayData *)QString::fromAscii_helper("proto_force_questions_sign",0x1a);
    CVmEventParameter::CVmEventParameter(pCVar2,0,&local_48,&local_50);
    CVmEvent::addEventParameter(pCVar4);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10011d106;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10011d106:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10011d136;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10011d136:
  QVar3.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar3.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_58 = (QArrayData *)QString::fromAscii_helper("proto_command_flags",0x13);
  lVar1 = CVmEvent::getEventParameter(QVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011d19a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10011d19a:
  if (lVar1 != 0) {
    return;
  }
  pCVar4 = (CVmEventParameter *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    pCVar4 = *(CVmEventParameter **)(*(long *)(param_1 + 8) + 0x10);
  }
  pCVar2 = operator_new(0xd0);
  QString::number((uint)&local_60,0);
  local_68 = (QArrayData *)QString::fromAscii_helper("proto_command_flags",0x13);
  CVmEventParameter::CVmEventParameter(pCVar2,0,&local_60,&local_68);
  CVmEvent::addEventParameter(pCVar4);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011d23e;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10011d23e:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return;
}

