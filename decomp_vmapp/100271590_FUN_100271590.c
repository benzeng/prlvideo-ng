
undefined4 FUN_100271590(long param_1)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QMutex::lock();
  QMutex::lock();
  plVar1 = *(long **)(param_1 + 0x80);
  if (plVar1 != (long *)0x0) {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
  }
  QMutex::unlock();
  if ((plVar1 != (long *)0x0) && (plVar1[2] != 0)) {
    ___dynamic_cast(plVar1[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba21e0,0);
  }
  CVmDevice::getSystemName();
  uVar4 = CVmDevice::getIndex();
  uVar5 = CVmDevice::getEmulatedType();
  CVmDevice::getSystemName();
  QString::toUtf8();
  FUN_1008e3970("","LocalDevices",0,"[Floppy%d] Connecting (Mode = %d, Path = \'%s\')",uVar4,uVar5,
                local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002716ae;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1002716ae:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002716de;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002716de:
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 8))();
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  CVmDevice::getSystemName();
  lVar6 = FUN_100407ff0(&local_58);
  *(long *)(param_1 + 0x90) = lVar6;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
LAB_10027173e:
      QArrayData::deallocate(local_58,2,8);
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10027173e;
    }
    lVar6 = *(long *)(param_1 + 0x90);
  }
  if (lVar6 == 0) {
    plVar7 = operator_new(0x30);
    FUN_100406040(plVar7);
    *(long **)(param_1 + 0x90) = plVar7;
    cVar2 = (**(code **)(*plVar7 + 0x10))(plVar7,&local_40,0,1);
    if (cVar2 != '\0') goto LAB_100271797;
    uVar4 = 0x80000263;
    FUN_10025b310(param_1 + 0x68,0);
  }
  else {
LAB_100271797:
    FUN_10025b310(param_1 + 0x68,1);
    lVar6 = FUN_100257d80(param_1);
    bVar3 = (**(code **)(**(long **)(param_1 + 0x90) + 0x50))();
    *(uint *)(lVar6 + 0x31ca4) = (uint)bVar3;
    uVar4 = 0;
    QString::operator=((QString *)(param_1 + 0xd8),&local_40);
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100271821;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100271821:
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar7 = plVar1 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  QMutex::unlock();
  return uVar4;
}

