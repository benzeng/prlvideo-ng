
void FUN_1005a64c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,QString *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("[",1);
  uVar1 = QString::indexOf(param_2,&local_40,0,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a653d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005a653d:
  local_48 = (QArrayData *)QString::fromAscii_helper("]",1);
  QString::indexOf(param_2,&local_48,uVar1,1,param_5,param_6,param_1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a659c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005a659c:
  QString::mid((int)&local_50,(int)param_2);
  uVar1 = QString::toInt((bool *)&local_50,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a65fd;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005a65fd:
  uVar2 = CParallelsNetworkConfig::getVirtualNetworks();
  uVar2 = FUN_100b3f210(uVar2,uVar1);
  *param_3 = uVar2;
  QString::mid((int)&local_58,(int)param_2);
  QString::operator=(param_4,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return;
}

