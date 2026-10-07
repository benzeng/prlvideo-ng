
undefined8 FUN_1003f3f70(long *param_1,undefined8 param_2)

{
  QArrayData *pQVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  int local_30;
  undefined1 local_29;
  
  local_30 = 0;
  FUN_1003f4260(param_1,param_2,&local_30);
  uVar3 = (**(code **)(*(long *)param_1[6] + 0xb0))();
  *(undefined4 *)((long)param_1 + 0xc4) = uVar3;
  *(undefined4 *)((long)param_1 + 0x7c) = 1;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined4 *)(param_1 + 0x12) = 0;
  cVar2 = (**(code **)(*(long *)param_1[6] + 0x98))();
  if (cVar2 != '\0') {
    *(undefined4 *)((long)param_1 + 0x2c) = 1;
    lVar5 = (**(code **)(*param_1 + 0x70))(param_1);
    param_1[0x13] = lVar5;
    param_1[0x14] = lVar5 + -1;
    FUN_1008e3970("","DVDImage",0,"[DVDRom]  Size of a media %llu");
    return 0;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f);
  }
  pQVar1 = local_38;
  lVar5 = *(long *)(local_38 + 0x10);
  uVar3 = *(undefined4 *)((long)param_1 + 0xc4);
  uVar4 = FUN_100768f60();
  FUN_1008e3970("","DVDImage",0,"[DVDRom] Can not open device \"%s\"! (%u,%u)",pQVar1 + lVar5,uVar3,
                uVar4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f40cd;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1003f40cd:
  if (local_30 == 0) {
    return 0xffffffff;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("/dev/",5);
  local_48 = (QArrayData *)param_1[0x24];
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_29 = *(int *)local_48 != 0;
    UNLOCK();
  }
  cVar2 = QString::startsWith(&local_48,&local_40,1);
  if (cVar2 != '\0') {
    QString::remove((int)&local_48,0);
  }
  FUN_100785e80(&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f416f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003f416f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0xffffffff;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return 0xffffffff;
}

