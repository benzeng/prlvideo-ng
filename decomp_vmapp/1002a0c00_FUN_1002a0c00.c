
int FUN_1002a0c00(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  QArrayData *pQVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  QArrayData *pQVar13;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [15];
  undefined1 local_31;
  
  QMutex::lock();
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 == (long *)0x0) {
    QMutex::unlock();
    uVar7 = 0;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    QMutex::unlock();
    if (plVar2[2] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = ___dynamic_cast(plVar2[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2200,0);
    }
  }
  QMutex::lock();
  iVar6 = FUN_1002a1480(uVar7,local_40,local_48);
  if (iVar6 < 0) {
    FUN_1008e3970("AudioVM","LocalDevices",0,"Sound init, invalid config data");
    goto LAB_1002a1112;
  }
  if (2 < DAT_1011b55f8) {
    QMutex::lock();
    iVar6 = CVmDevice::getConnected();
    QMutex::unlock();
    pcVar12 = "no";
    if (iVar6 == 1) {
      pcVar12 = "yes";
    }
    CVmDevice::getSystemName();
    QString::toUtf8();
    pQVar9 = local_50 + *(long *)(local_50 + 0x10);
    CVmDevice::getUserFriendlyName();
    QString::toUtf8();
    pQVar8 = local_60 + *(long *)(local_60 + 0x10);
    cVar5 = CVmDevice::isRemote();
    pcVar10 = "local";
    pcVar11 = "local";
    if (cVar5 != '\0') {
      pcVar11 = "remote";
    }
    CVmDevice::getSystemName();
    QString::toUtf8();
    pQVar13 = local_70 + *(long *)(local_70 + 0x10);
    CVmDevice::getUserFriendlyName();
    QString::toUtf8();
    pQVar4 = local_80;
    lVar3 = *(long *)(local_80 + 0x10);
    cVar5 = CVmDevice::isRemote();
    if (cVar5 != '\0') {
      pcVar10 = "remote";
    }
    FUN_1008e3970("AudioVM","LocalDevices",3,
                  "\nSound init:\n  connected: %s\n  playback:  [%s], \"%s\", %s\n  capture:   [%s], \"%s\", %s"
                  ,pcVar12,pQVar9,pQVar8,pcVar11,pQVar13,pQVar4 + lVar3,pcVar10);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a0e5f;
      }
      QArrayData::deallocate(local_80,1,8);
    }
LAB_1002a0e5f:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a0e8f;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1002a0e8f:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a0ebf;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_1002a0ebf:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a0eef;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1002a0eef:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a0f2d;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_1002a0f2d:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a0f5d;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1002a0f5d:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a0f8d;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1002a0f8d:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a0fbd;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1002a0fbd:
    if (3 < DAT_1011b55f8) {
      local_a0 = (QArrayData *)QString::fromAscii_helper("Sound",5);
      FUN_1002a2540(&local_98,uVar7,&local_a0);
      QString::toUtf8();
      FUN_1008e3970("AudioVM","LocalDevices",4,"\n%s",local_90 + *(long *)(local_90 + 0x10));
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002a1074;
        }
        QArrayData::deallocate(local_90,1,8);
      }
LAB_1002a1074:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002a10aa;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1002a10aa:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002a10e0;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
    }
  }
LAB_1002a10e0:
  iVar6 = 0;
  FUN_10025c560(param_1 + 0x10);
LAB_1002a1112:
  QMutex::unlock();
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  return iVar6;
}

