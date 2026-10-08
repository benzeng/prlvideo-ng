
void FUN_10016cec0(undefined8 param_1,QString param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_38 = (QArrayData *)QString::fromAscii_helper("device_type",0xb);
  lVar3 = CVmEvent::getEventParameter(param_2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016cf29;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10016cf29:
  if (lVar3 == 0) goto LAB_10016d0dd;
  CVmEventParameter::getParamValue();
  iVar1 = QString::toInt((bool *)&local_40,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016cf82;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10016cf82:
  if (iVar1 != 0xf) goto LAB_10016d0dd;
  local_48 = (QArrayData *)QString::fromAscii_helper("vm_config_dev_image",0x13);
  lVar3 = CVmEvent::getEventParameter(param_2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016cfdf;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10016cfdf:
  local_50 = (QArrayData *)QString::fromAscii_helper("usb_connection_type",0x13);
  lVar4 = CVmEvent::getEventParameter(param_2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016d033;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10016d033:
  if ((lVar3 == 0) || (lVar4 == 0)) goto LAB_10016d0dd;
  CVmEventParameter::getParamValue();
  CVmEventParameter::getParamValue();
  uVar2 = QString::toInt((bool *)&local_60,0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016d09f;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10016d09f:
  FUN_100800e10(param_1,&local_58,uVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10016d0dd;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10016d0dd:
  FUN_1001603f0(param_1);
  return;
}

