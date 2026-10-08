
int FUN_100b32050(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  
  QString::toUtf8();
  FUN_100df99c0("","dimg",0,"Open: try to open dev: %s",local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100b320d0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100b320d0:
  iVar5 = FUN_100b324b0(param_1);
  if ((iVar5 != 0) && (2 < DAT_10230ffd0)) {
    QString::toUtf8();
    FUN_100df99c0("","dimg",3,"Device %s appears to be not mounted",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) goto LAB_100b3214d;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
LAB_100b3214d:
  if ((*(byte *)(param_1 + 3) & 8) == 0) {
    if ((*(int *)(param_1[0xe] + 4) != 0) &&
       (iVar5 = (**(code **)(*param_1 + 0x1b8))(param_1), iVar5 != 0)) {
      FUN_100df99c0("","dimg",0,"Open: Device unmount error. May be it\'s not mounted.");
    }
    plVar1 = param_1 + 1;
    iVar5 = FUN_100b31a70(param_1,param_2,plVar1);
    if (iVar5 < 0) {
      QString::toUtf8();
      FUN_100df99c0("","dimg",0,"Error opening %s device",local_58 + *(long *)(local_58 + 0x10));
      if (*(int *)local_58 == -1) {
        return iVar5;
      }
      local_60 = local_58;
      if (*(int *)local_58 == 0) goto LAB_100b3235e;
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      iVar3 = *(int *)local_58;
      UNLOCK();
    }
    else {
      if (*(int *)(*param_3 + 4) == 0) {
LAB_100b321ef:
        iVar5 = FUN_100b32ee0(param_1,param_1 + 2,(int)param_1[3]);
        if (-1 < iVar5) {
          (**(code **)(*param_1 + 0x188))(param_1,param_1[7] * param_1[4]);
          return 0;
        }
        FUN_100df99c0("","dimg",0,"Error filling bootcamp device info");
        return iVar5;
      }
      plVar2 = param_1 + 0xd;
      iVar5 = FUN_100b31a70(param_1,param_3,plVar2);
      if (-1 < iVar5) {
        lVar4 = *plVar2;
        *plVar2 = *plVar1;
        *plVar1 = lVar4;
        goto LAB_100b321ef;
      }
      QString::toUtf8();
      FUN_100df99c0("","dimg",0,"Error opening %s raw device",local_60 + *(long *)(local_60 + 0x10))
      ;
      if (*(int *)local_60 == -1) {
        return iVar5;
      }
      if (*(int *)local_60 == 0) goto LAB_100b3235e;
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      iVar3 = *(int *)local_60;
      UNLOCK();
    }
  }
  else {
    QString::toUtf8();
    iVar5 = 0;
    FUN_100df99c0("","dimg",0,"Open: fake open of device %s",local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 == -1) {
      return 0;
    }
    local_60 = local_50;
    if (*(int *)local_50 == 0) goto LAB_100b3235e;
    LOCK();
    *(int *)local_50 = *(int *)local_50 + -1;
    iVar3 = *(int *)local_50;
    UNLOCK();
  }
  if (iVar3 != 0) {
    return iVar5;
  }
LAB_100b3235e:
  QArrayData::deallocate(local_60,1,8);
  return iVar5;
}

