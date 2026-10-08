
void FUN_10016d660(undefined8 param_1,QString param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  CVmEventBase::getEventIssuerId();
  lVar2 = FUN_10015cb20(param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10016d6c1;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10016d6c1:
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance.");
    return;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("vminfo_vm_addition_state",0x18);
  lVar3 = CVmEvent::getEventParameter(param_2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10016d71e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10016d71e:
  if (lVar3 == 0) {
    CVmEventBase::getEventIssuerId();
    QString::toUtf8();
    if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f)
      ;
    }
    FUN_100df99c0("","prl_client_app",0,
                  "(!) Error: can\'t parse PET_DSP_EVT_VM_ADDITION_STATE_CHANGED event. For VM %s, Null event parameter occurred."
                  ,local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10016da2d;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_10016da2d:
    if (*(int *)local_58 == -1) {
      return;
    }
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
    return;
  }
  CVmEventParameter::getParamValue();
  uVar1 = QString::toInt((bool *)&local_60,0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10016d778;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10016d778:
  QString::toUtf8();
  if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f);
  }
  pQVar5 = local_68 + *(long *)(local_68 + 0x10);
  CVmEventBase::getEventIssuerId();
  QString::toUtf8();
  if ((1 < *(uint *)local_70) || (*(long *)(local_70 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_70,*(uint *)(local_70 + 4) + 1,*(uint *)(local_70 + 8) >> 0x1f);
  }
  pQVar4 = local_70 + *(long *)(local_70 + 0x10);
  EnumUtils::enumToString(&local_88,uVar1);
  QString::toUtf8();
  if ((1 < *(uint *)local_80) || (*(long *)(local_80 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_80,*(uint *)(local_80 + 4) + 1,*(uint *)(local_80 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0,"%s: VM %s addition state is <%s(0x%X)>",pQVar5,pQVar4,
                local_80 + *(long *)(local_80 + 0x10),uVar1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10016d8a2;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_10016d8a2:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10016d8d2;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10016d8d2:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10016d902;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_10016d902:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10016d932;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10016d932:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10016d962;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_10016d962:
  FUN_10018c860(lVar2,uVar1);
  return;
}

