
void FUN_10026eea0(long *param_1,undefined8 param_2)

{
  QString *this;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  undefined8 in_R9;
  long *plVar7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_31;
  
  FUN_10026b250();
  *param_1 = (long)&PTR_FUN_100baf4a0;
  param_1[1] = (long)&PTR_metaObject_100baf530;
  plVar7 = param_1 + 0xd;
  param_1[0xd] = (long)&PTR_FUN_100baf5a8;
  param_1[0x14] = (long)&PTR_FUN_100baf5d8;
  uVar2 = CVmClusteredDevice::getStackIndex();
  FUN_10026b650(param_1 + 0x14,plVar7,param_2,uVar2);
  *param_1 = (long)&PTR_FUN_100baf4a0;
  param_1[1] = (long)&PTR_metaObject_100baf530;
  param_1[0xd] = (long)&PTR_FUN_100baf5a8;
  param_1[0x14] = (long)&PTR_FUN_100baf5d8;
  uVar2 = CVmClusteredDevice::getStackIndex();
  *(undefined4 *)((long)param_1 + 0x1fc) = uVar2;
  this = (QString *)(param_1 + 0x40);
  param_1[0x40] = (long)PTR_shared_null_100ba20d0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x44),1);
  param_1[0x46] = 0;
  uVar1 = *(uint *)((long)param_1 + 0x1fc);
  lVar5 = FUN_100257d80(param_1);
  pvVar6 = _valloc(0x30000);
  param_1[0x46] = (long)pvVar6;
  if (pvVar6 == (void *)0x0) {
    FUN_1008e3970("","LocalDevices",0,"[DVDROM:ide] Cannot allocate memory (buffer)");
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80000180,&local_58);
    FUN_10002d9d0(&local_58);
    return;
  }
  switch(*(undefined4 *)((long)param_1 + 0x1fc)) {
  case 0:
    local_60.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("CD/DVD-ROM (0:0)",0x10);
    QString::operator=(this,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
    break;
  case 1:
    local_68.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("CD/DVD-ROM (0:1)",0x10);
    QString::operator=(this,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
    break;
  case 2:
    local_70.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("CD/DVD-ROM (1:0)",0x10);
    QString::operator=(this,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
    break;
  case 3:
    local_78.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("CD/DVD-ROM (1:1)",0x10);
    QString::operator=(this,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
    break;
  default:
    FUN_1008e3970("","LocalDevices",0,"[DVDROM:ide] Incorrect parameter to constructor (%d)",
                  *(undefined4 *)((long)param_1 + 0x1fc),in_R9,plVar7);
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80000180,&local_98);
    FUN_10002d9d0(&local_98);
    return;
  }
  iVar3 = CVmClusteredDevice::getInterfaceType();
  if (iVar3 == 0) {
    FUN_1003fb1f0(lVar5 + 0x2e0f8 + (ulong)uVar1 * 0x538,*(undefined1 *)((long)param_1 + 0x1fc),0);
    iVar3 = CVmDevice::getConnected();
    iVar4 = 0;
    if (iVar3 == 1) {
      iVar4 = (**(code **)(*param_1 + 0x70))(param_1);
    }
    *(undefined1 *)(param_1 + 0x16) = 0;
    FUN_100257c20(param_1);
    if (iVar4 < 0) {
      uVar2 = CVmDevice::getIndex();
      FUN_1003f9010(uVar2,0x80000263);
    }
  }
  else {
    uVar2 = CVmClusteredDevice::getInterfaceType();
    FUN_1008e3970("","LocalDevices",0,
                  "[DVDROM:ide] Incorrect device interface in configuration (%u)",uVar2);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80000180,&local_b8);
    FUN_10002d9d0(&local_b8);
  }
  return;
}

