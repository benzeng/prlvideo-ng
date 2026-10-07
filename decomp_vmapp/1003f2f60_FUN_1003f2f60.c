
undefined8 FUN_1003f2f60(long *param_1,QString *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  QArrayData *pQVar4;
  long lVar5;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (*(int *)(param_2->field0_0x0 + 4) != 0) {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("/dev/r",6);
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
    QString::append(&local_48);
    QString::operator=(&local_40,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003f3003;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1003f3003:
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003f3030;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
  }
LAB_1003f3030:
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],&local_40,1,1,0,0x100);
  uVar2 = (**(code **)(*(long *)param_1[6] + 0xb0))();
  *(undefined4 *)((long)param_1 + 0xc4) = uVar2;
  cVar1 = (**(code **)(*(long *)param_1[6] + 0x98))();
  if (cVar1 == '\0') {
    QString::toUtf8();
    if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f)
      ;
    }
    pQVar4 = local_50;
    lVar5 = *(long *)(local_50 + 0x10);
    uVar2 = *(undefined4 *)((long)param_1 + 0xc4);
    uVar3 = FUN_100768f60();
    FUN_1008e3970("","DVDImage",0,"[Devices] Can not open device \"%s\"! (%u,%u)",pQVar4 + lVar5,
                  uVar2,uVar3);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003f318f;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x2c) = 1;
    lVar5 = (**(code **)(*param_1 + 0x70))(param_1);
    param_1[0x14] = lVar5;
    param_1[0x13] = lVar5 + 1;
    FUN_1008e3970("","DVDImage",0,"Size of a media %llu",lVar5 + 1);
  }
LAB_1003f318f:
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  *(undefined4 *)((long)param_1 + 0x7c) = 2;
  *(undefined4 *)((long)param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined4 *)(param_1 + 0x12) = 0;
  QString::operator=((QString *)(param_1 + 0x24),param_2);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return 0;
}

