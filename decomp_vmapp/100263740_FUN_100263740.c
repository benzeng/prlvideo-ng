
uint FUN_100263740(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  char *pcVar9;
  QArrayData *local_48;
  QArrayData *local_40;
  
  QMutex::lock();
  QMutex::lock();
  plVar2 = *(long **)(param_1 + 0x80);
  if (plVar2 != (long *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  QMutex::unlock();
  uVar7 = 0;
  if (plVar2 != (long *)0x0) {
    uVar7 = 0;
    if (plVar2[2] != 0) {
      uVar7 = ___dynamic_cast(plVar2[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2208,0);
    }
  }
  uVar4 = CVmDevice::getIndex();
  uVar5 = CVmDevice::getEmulatedType();
  if (*(long *)(param_1 + 0x90) == 0) {
    pcVar9 = "USB";
  }
  else {
    pcVar9 = "LPT";
  }
  CVmDevice::getSystemName();
  QString::toUtf8();
  FUN_1008e3970("","LocalDevices",0,"[Parallel%d] Connecting (Mode = %d, Ifc = %s, Path = \'%s\')",
                uVar4,uVar5,pcVar9,local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100263877;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100263877:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_1002638a7;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002638a7:
  if (*(long *)(param_1 + 0x90) == 0) {
    uVar6 = FUN_1002bacc0(0,4,uVar7);
  }
  else {
    uVar6 = FUN_100263a30(param_1,uVar7);
  }
  uVar4 = CVmDevice::getIndex();
  FUN_1008e3970("","LocalDevices",0,"[Parallel%d] Connect result %08x",uVar4,uVar6);
  uVar8 = 0;
  if (uVar6 != 0x80000013) {
    FUN_10025b310(param_1 + 0x68,uVar6 >> 0x1f ^ 1);
    uVar8 = uVar6;
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  QMutex::unlock();
  return uVar8;
}

