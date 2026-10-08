
void FUN_10016d270(undefined8 param_1,QString param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  QArrayData *pQVar4;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  CVmEventBase::getEventIssuerId();
  lVar2 = FUN_10015cb20(param_1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016d2cf;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10016d2cf:
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance to update Tools state.");
    return;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("vm_tools_state",0xe);
  lVar3 = CVmEvent::getEventParameter(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016d32c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10016d32c:
  if (lVar3 == 0) {
    return;
  }
  CVmEventParameter::getParamValue();
  uVar1 = QString::toInt((bool *)&local_48,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016d386;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10016d386:
  QString::toUtf8();
  if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
  }
  pQVar4 = local_50 + *(long *)(local_50 + 0x10);
  EnumUtils::enumToString(&local_60,uVar1);
  QString::toUtf8();
  if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0,
                "%s: received event PET_DSP_EVT_VM_TOOLS_STATE_CHANGED. Tools state = <%s>",pQVar4,
                local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016d45e;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10016d45e:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016d48e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10016d48e:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016d4be;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10016d4be:
  FUN_10018e970(lVar2,uVar1);
  return;
}

