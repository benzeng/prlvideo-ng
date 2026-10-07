
int FUN_1002a1d20(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
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
    uVar9 = 0;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    QMutex::unlock();
    uVar9 = 0;
    if (plVar2[2] != 0) {
      uVar9 = ___dynamic_cast(plVar2[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2200,0);
    }
  }
  QMutex::lock();
  iVar8 = FUN_1002a1480(uVar9,local_40,local_48);
  if (iVar8 < 0) {
    FUN_1008e3970("AudioVM","LocalDevices",0,"Sound disconnect from host, invalid config data");
    goto LAB_1002a20bc;
  }
  if (2 < DAT_1011b55f8) {
    CVmDevice::getSystemName();
    QString::toUtf8();
    lVar3 = *(long *)(local_50 + 0x10);
    CVmDevice::getUserFriendlyName();
    QString::toUtf8();
    lVar4 = *(long *)(local_60 + 0x10);
    cVar7 = CVmDevice::isRemote();
    pcVar10 = "remote";
    pcVar11 = "local";
    if (cVar7 == '\0') {
      pcVar10 = "local";
    }
    CVmDevice::getSystemName();
    QString::toUtf8();
    lVar5 = *(long *)(local_70 + 0x10);
    CVmDevice::getUserFriendlyName();
    QString::toUtf8();
    lVar6 = *(long *)(local_80 + 0x10);
    cVar7 = CVmDevice::isRemote();
    if (cVar7 != '\0') {
      pcVar11 = "remote:";
    }
    FUN_1008e3970("AudioVM","LocalDevices",3,
                  "\nSound disconnect from host:\n  playback:  [%s], \"%s\", %s\n  capture:   [%s], \"%s\", %s"
                  ,local_50 + lVar3,local_60 + lVar4,pcVar10,local_70 + lVar5,local_80 + lVar6,
                  pcVar11);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a1f2e;
      }
      QArrayData::deallocate(local_80,1,8);
    }
LAB_1002a1f2e:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a1f5e;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1002a1f5e:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a1f8e;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_1002a1f8e:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a1fbe;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1002a1fbe:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a1ffc;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_1002a1ffc:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a202c;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1002a202c:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a205c;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1002a205c:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a208c;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_1002a208c:
  iVar8 = 0;
  FUN_10025b310(param_1 + 0x10,0);
LAB_1002a20bc:
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
  return iVar8;
}

