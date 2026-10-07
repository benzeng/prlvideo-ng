
undefined1 FUN_10026b7f0(long *param_1,char param_2,char param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  undefined1 uVar6;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *(undefined1 *)(param_1 + 4) = 0;
  lVar4 = DAT_1011c3698;
  if (param_1[5] == 0) {
    return 1;
  }
  lVar2 = param_1[1];
  QMutex::lock();
  plVar3 = *(long **)(lVar2 + 0x18);
  if (plVar3 != (long *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  QMutex::unlock();
  if (*(int *)(lVar4 + 0x1948) == 2) {
    CVmDevice::getSystemName();
    iVar5 = FUN_100407750(&local_40,param_1[5]);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10026b8b3;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10026b8b3:
    if (iVar5 < 0) goto LAB_10026b99b;
    param_1[5] = 0;
  }
  else {
    if ((*(char *)(lVar4 + 0x1ab8) != '\0') &&
       (iVar5 = (**(code **)(*(long *)param_1[5] + 0x18))(), iVar5 != 0)) {
      if (param_2 == '\0') {
        CVmDevice::getSystemName();
        QString::toUtf8();
        FUN_1008e3970("","LocalDevices",0,"[DVDROM] Failed to disconnect device \"%s\"",
                      local_48 + *(long *)(local_48 + 0x10));
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10026bb34;
          }
          QArrayData::deallocate(local_48,1,8);
        }
LAB_10026bb34:
        if (*(int *)local_50 == -1) {
          uVar6 = 0;
        }
        else {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) {
              uVar6 = 0;
              goto LAB_10026ba90;
            }
          }
          QArrayData::deallocate(local_50,2,8);
          uVar6 = 0;
        }
        goto LAB_10026ba90;
      }
      CVmDevice::getSystemName();
      QString::toUtf8();
      FUN_1008e3970("","LocalDevices",0,"[DVDROM] Forced eject of device \"%s\"",
                    local_58 + *(long *)(local_58 + 0x10));
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10026b96b;
        }
        QArrayData::deallocate(local_58,1,8);
      }
LAB_10026b96b:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10026b99b;
        }
        QArrayData::deallocate(local_60,2,8);
      }
    }
LAB_10026b99b:
    if ((long *)param_1[5] != (long *)0x0) {
      (**(code **)(*(long *)param_1[5] + 0x88))();
      *(undefined4 *)(param_1 + 0x2a) = 0;
    }
  }
  if (param_3 != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1,0x23a00);
  }
  param_1[5] = 0;
  CVmDevice::getSystemName();
  QString::toUtf8();
  FUN_1008e3970("","LocalDevices",0,"[DVDROM] Device \"%s\" was disconnected ",
                local_68 + *(long *)(local_68 + 0x10));
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026ba53;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_10026ba53:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026ba83;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10026ba83:
  uVar6 = 1;
  FUN_10025b310(param_1[1],0);
LAB_10026ba90:
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return uVar6;
}

