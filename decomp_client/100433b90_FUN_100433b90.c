
void FUN_100433b90(QObject *param_1,QObject *param_2,CVmConfiguration *param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f2658;
  *(QObject **)(param_1 + 0x10) = param_2;
  pvVar1 = operator_new(0x48);
  *(void **)(param_1 + 0x18) = pvVar1;
  *(CVmConfiguration **)(param_1 + 0x20) = param_3;
  CVmConfiguration::CVmConfiguration((CVmConfiguration *)(param_1 + 0x28),param_3);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  uVar2 = CVmSharing::getHostSharing();
  *(undefined8 *)(param_1 + 0x120) = uVar2;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  uVar2 = CVmSharing::getGuestSharing();
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  FUN_100433cd0(param_1);
  FUN_100433fb0(param_1);
  plVar3 = (long *)QAbstractItemView::model();
  local_58 = 0xffffffff;
  local_54 = 0xffffffff;
  local_48 = 0;
  local_50 = 0;
  (**(code **)(*plVar3 + 0x60))(local_40,plVar3,0,0,&local_58);
  QAbstractItemView::setCurrentIndex(*(QModelIndex **)(*(long *)(param_1 + 0x18) + 0x18));
  return;
}

