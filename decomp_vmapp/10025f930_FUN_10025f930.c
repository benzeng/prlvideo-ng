
undefined8 FUN_10025f930(long param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined4 *puVar12;
  long lVar13;
  bool bVar14;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  plVar4 = *(long **)(param_1 + 0x80);
  if (plVar4 == (long *)0x0) {
    QMutex::unlock();
    uVar10 = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    QMutex::unlock();
    uVar10 = 0;
    if (plVar4[2] != 0) {
      uVar10 = ___dynamic_cast(plVar4[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba21e8,0);
    }
  }
  uVar6 = CVmDevice::getIndex();
  uVar7 = CVmDevice::getEmulatedType();
  CVmDevice::getSystemName();
  QString::toLocal8Bit();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  FUN_1008e3970("","LocalDevices",0,"[Serial%d] Connecting (Mode = %d, Path = \'%s\')",uVar6,uVar7,
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025fa5d;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10025fa5d:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025fa8d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10025fa8d:
  QMutex::lock();
  iVar8 = CVmDevice::getEmulatedType();
  if (iVar8 == 0) {
    pvVar11 = operator_new(0x130);
    FUN_100262c20(pvVar11,param_1 + 0x90,uVar10);
  }
  else if (iVar8 == 2) {
    pvVar11 = operator_new(0x130);
    FUN_1002607a0(pvVar11,param_1 + 0x90,uVar10);
  }
  else {
    if (iVar8 != 3) {
      puVar12 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar12 = 0x80000003;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar12,PTR_typeinfo_100ba22d8,0);
    }
    pvVar11 = operator_new(0x158);
    FUN_100261b40(pvVar11,param_1 + 0x90,uVar10);
  }
  *(void **)(param_1 + 0xa8) = pvVar11;
  *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x2c) = 1;
  bVar5 = CVmSerialPort::isOperateAtRealSpeed();
  lVar13 = *(long *)(param_1 + 0xa0);
  *(uint *)(lVar13 + 0x14) = (uint)bVar5;
  if (bVar5 == 0) {
    uVar6 = FUN_1007da300("devices.serial.transfer_period",5000);
    lVar13 = *(long *)(param_1 + 0xa0);
    *(undefined4 *)(lVar13 + 0x20) = uVar6;
  }
  else {
    *(undefined4 *)(lVar13 + 0x20) = 50000;
  }
  if ((*(int *)(lVar13 + 0x2c) != 0) &&
     ((*(uint *)(lVar13 + 0x44) & *(int *)(lVar13 + 0x3c) - *(int *)(lVar13 + 0x38)) != 0)) {
    lVar13 = *(long *)(param_1 + 0xa0);
    uVar9 = *(uint *)(lVar13 + 0x18);
    do {
      puVar1 = (uint *)(lVar13 + 0x18);
      LOCK();
      uVar3 = *puVar1;
      bVar14 = uVar9 == uVar3;
      if (bVar14) {
        *puVar1 = uVar9 | 1;
        uVar3 = uVar9;
      }
      uVar9 = uVar3;
      UNLOCK();
    } while (!bVar14);
    FUN_1002effe0(*(undefined8 *)(param_1 + 0xb8));
  }
  QMutex::unlock();
  FUN_10025b310(param_1 + 0x68,1);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar13 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return 0;
}

