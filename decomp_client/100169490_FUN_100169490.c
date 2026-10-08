
void FUN_100169490(undefined8 param_1,QString param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  QArrayData *local_f0;
  undefined4 local_e4;
  QArrayData *local_e0;
  QArrayData *local_d8;
  undefined1 local_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 *local_38;
  char *local_30;
  
  CVmEventBase::getEventIssuerId();
  lVar2 = FUN_10015cb20(param_1,&local_d8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_c9 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_c9) goto LAB_100169504;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100169504:
  if (lVar2 == 0) {
    pcVar4 = "(!)Error: can\'t get VM instance to update configuration.";
    goto LAB_10016975a;
  }
  local_e0 = (QArrayData *)QString::fromAscii_helper("progress_changed",0x10);
  lVar3 = CVmEvent::getEventParameter(param_2);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_c9 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_c9) goto LAB_100169573;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100169573:
  if (lVar3 == 0) {
    pcVar4 = "(!)Error: can\'t extract hdd resize progress value.";
    goto LAB_10016975a;
  }
  CVmEventParameter::getParamValue();
  local_e4 = QString::toUInt((bool *)&local_f0,0);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_38 = &local_e4;
  local_30 = "int";
  local_48 = 0;
  uStack_40 = 0;
  cVar1 = QMetaObject::invokeMethod
                    (lVar2,param_3,0,0,0,param_6,local_38,"int",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0)
  ;
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_c9 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_c9) goto LAB_100169713;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100169713:
  if (cVar1 != '\0') {
    return;
  }
  pcVar4 = "(!)Error: failed to invoke hddResizeProgressChanged method.";
LAB_10016975a:
  FUN_100df99c0("","prl_client_app",0,pcVar4);
  return;
}

