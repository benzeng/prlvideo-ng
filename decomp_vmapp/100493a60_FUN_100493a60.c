
void FUN_100493a60(long param_1,long *param_2,ulong param_3)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_64;
  char local_59;
  QArrayData *local_58;
  long local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if ((param_3 & 0x20) == 0) {
    return;
  }
  lVar2 = *param_2;
  local_40 = (QArrayData *)QString::fromAscii_helper("parallels.ControlCenter.guest.win",0x21);
  cVar1 = QString::startsWith(lVar2 + 8,&local_40,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100493adf;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100493adf:
  if (cVar1 != '\0') {
    QString::mid((int)&local_48,(int)*param_2 + 8);
    local_58 = (QArrayData *)QString::fromAscii_helper(".",1);
    QString::split(&local_50,&local_48,&local_58,1,1);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100493b62;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100493b62:
    local_59 = '\0';
    local_6c = 7;
    local_70 = 0x10005;
    local_68 = (uint)(*(int *)(*param_2 + 0x58) == 1);
    if (*(int *)(local_50 + 0xc) != *(int *)(local_50 + 8)) {
      lVar2 = local_50 + 0x10 + (long)*(int *)(local_50 + 8) * 8;
      bVar3 = false;
      do {
        if (!bVar3) {
          local_78 = (QArrayData *)QString::fromAscii_helper("sesnId=",7);
          cVar1 = QString::startsWith(lVar2,&local_78,1);
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100493c10;
            }
            QArrayData::deallocate(local_78,2,8);
          }
LAB_100493c10:
          if (cVar1 != '\0') {
            QString::mid((int)&local_80,(int)lVar2);
            local_64 = QString::toInt((bool *)&local_80,(int)&local_59);
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100493c70;
              }
              QArrayData::deallocate(local_80,2,8);
            }
          }
        }
LAB_100493c70:
        lVar2 = lVar2 + 8;
        bVar3 = local_59 != '\0';
      } while (lVar2 != local_50 + 0x10 + (long)*(int *)(local_50 + 0xc) * 8);
      if (local_59 != '\0') {
        FUN_100493f30(param_1,&local_70);
      }
    }
    FUN_100013180(&local_50);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100493ce2;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100493ce2:
  lVar2 = *param_2;
  local_88 = (QArrayData *)QString::fromAscii_helper("parallels.ToolsDaemon.guest.lin",0x1f);
  cVar1 = QString::startsWith(lVar2 + 8,&local_88,1);
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(*param_2 + 0x58) == 1;
  }
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100493d51;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100493d51:
  if (bVar3) {
    QMutex::lock();
    cVar1 = *(char *)(param_1 + 0x69);
    QMutex::unlock();
    if (cVar1 == '\0') {
      FUN_10047f560(param_1);
    }
  }
  return;
}

