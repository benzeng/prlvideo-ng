
long FUN_10098c4a0(long param_1,long param_2,long param_3)

{
  char cVar1;
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
  
  if (param_2 == 0) {
    FUN_100df99c0("","BattWatcher",0,"Incoming parameter is NULL for IOReg getter.");
    return 0;
  }
  lVar2 = _IORegistryEntryCreateCFProperty
                    (*(undefined4 *)(param_1 + 0x10),param_2,
                     *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,0);
  if (lVar2 == 0) {
    FUN_100deed00(&local_38,param_2);
    cVar1 = FUN_10098baf0(param_1,&local_38);
    if (cVar1 == '\0') goto LAB_10098c723;
    QString::toUtf8();
    pQVar4 = local_40 + *(long *)(local_40 + 0x10);
    lVar2 = _CFCopyTypeIDDescription(param_3);
    if (lVar2 == 0) {
      local_50 = (QArrayData *)QString::fromAscii_helper("Unknown",7);
    }
    else {
      FUN_100deed00(&local_50,lVar2);
    }
    QString::toUtf8();
    FUN_100df99c0("","BattWatcher",0,"Can\'t create CFProperty %s with type %s from registry",pQVar4
                  ,local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10098c6c3;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_10098c6c3:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10098c6f3;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10098c6f3:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10098c723;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_10098c723:
    if (*(int *)local_38 == -1) {
      return 0;
    }
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
    return 0;
  }
  lVar3 = _CFGetTypeID(lVar2);
  if (lVar3 == param_3) {
    return lVar2;
  }
  lVar3 = _CFCopyTypeIDDescription(param_3);
  if (lVar3 == 0) {
    local_60 = (QArrayData *)QString::fromAscii_helper("Unknown",7);
  }
  else {
    FUN_100deed00(&local_60,lVar3);
  }
  QString::toUtf8();
  FUN_100df99c0("","BattWatcher",0,"Value is not %s. Can\'t convert.",
                local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10098c608;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10098c608:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10098c638;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10098c638:
  _CFRelease(lVar2);
  return 0;
}

