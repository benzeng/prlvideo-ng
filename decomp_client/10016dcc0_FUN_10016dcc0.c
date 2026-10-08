
void FUN_10016dcc0(undefined8 param_1,QString param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  QArrayData *pQVar6;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  CVmEventBase::getEventIssuerId();
  lVar3 = FUN_10015cb20(param_1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016dd1f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10016dd1f:
  if (lVar3 == 0) {
    pcVar5 = "(!)Error: can\'t get VM instance.";
    goto LAB_10016dfbb;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("vminfo_vm_state",0xf);
  lVar4 = CVmEvent::getEventParameter(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016dd7c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10016dd7c:
  if (lVar4 == 0) {
    pcVar5 = 
    "(!) Error: can\'t parse PET_DSP_EVT_VM_STATE_CHANGED event. Null event parameter occurred.";
LAB_10016dfbb:
    FUN_100df99c0("","prl_client_app",0,pcVar5);
    return;
  }
  CVmEventParameter::getParamValue();
  iVar1 = QString::toInt((bool *)&local_48,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016ddd6;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10016ddd6:
  QString::toUtf8();
  if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
  }
  pQVar6 = local_50 + *(long *)(local_50 + 0x10);
  EnumUtils::enumToString(&local_60,iVar1);
  QString::toUtf8();
  if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0,
                "%s: received event PET_DSP_EVT_VM_STATE_CHANGED, VM state is <%s>",pQVar6,
                local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016deac;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10016deac:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016dedc;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10016dedc:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016df0c;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10016df0c:
  if (0x11 < iVar1 + 0xcfffffffU) {
    EnumUtils::enumToString(&local_78,iVar1);
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",0,"(!) Warning: unknown Vm state %s (%u)",
                  local_70 + *(long *)(local_70 + 0x10),iVar1);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10016e048;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_10016e048:
    if (*(int *)local_78 == -1) {
      return;
    }
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_78,2,8);
    return;
  }
  uVar2 = CSdkCommunicator::requestStorage();
  FUN_100188480(&local_68,lVar3);
  lVar4 = CRequestStorage::findLastRunningRequest(uVar2,(QString *)0x80e);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016df7a;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10016df7a:
  if (lVar4 != 0) {
    FUN_1001923f0(lVar3,0);
    return;
  }
  FUN_10018c880(lVar3,iVar1);
  return;
}

