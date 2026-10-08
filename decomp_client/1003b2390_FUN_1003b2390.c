
bool FUN_1003b2390(undefined8 param_1,int param_2,int *param_3,uint param_4,undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  bool bVar9;
  
  lVar7 = FUN_1003b0a30();
  if (lVar7 == 0) {
    return false;
  }
  lVar7 = FUN_1003b0a60(param_1);
  if (lVar7 == 0) {
    return false;
  }
  uVar8 = FUN_1003b0a30(param_1);
  uVar2 = FUN_10018a9d0(uVar8);
  uVar3 = param_4 >> 8 & 0xff;
  uVar8 = FUN_1003b0a60(param_1);
  FUN_10015a340(uVar8);
  if ((param_2 == 0xd) && (uVar2 == 0x30000004)) {
    uVar8 = FUN_1003b0a60(param_1);
    cVar1 = FUN_1001754c0(uVar8,1);
    if (cVar1 == '\0') {
      return false;
    }
    cVar1 = FUN_100cd0070(uVar3,param_4,param_5);
    if (cVar1 != '\0') {
      uVar2 = param_3[5];
      CHostHardwareInfoBase::getDeviceInterfaceSettings();
      uVar3 = CHwDeviceInterfaceSettings::getMaxSataDevices();
      return uVar2 < uVar3;
    }
    return false;
  }
  if ((param_2 == 0xf) && ((uVar2 & 0xfffffffe) == 0x30000004)) {
    iVar4 = FUN_1003b2630(param_1,1);
    bVar9 = iVar4 == 0;
    goto LAB_1003b25f3;
  }
  if (uVar2 != 0x30000001) {
    return false;
  }
  switch(param_2) {
  case 0xb:
    bVar9 = *param_3 == 0;
    break;
  case 0xc:
    uVar2 = param_3[4];
    CHostHardwareInfoBase::getDeviceInterfaceSettings();
    iVar4 = CHwDeviceInterfaceSettings::getMaxScsiDevices();
    bVar9 = true;
    if (iVar4 - 1U <= uVar2) {
      uVar2 = param_3[3];
      CHostHardwareInfoBase::getDeviceInterfaceSettings();
      uVar5 = CHwDeviceInterfaceSettings::getMaxIdeDevices();
      bVar9 = uVar2 < uVar5;
    }
    if (uVar3 == 7) {
      uVar3 = 7;
      goto LAB_1003b2569;
    }
LAB_1003b2572:
    uVar2 = param_3[5];
    CHostHardwareInfoBase::getDeviceInterfaceSettings();
    uVar3 = CHwDeviceInterfaceSettings::getMaxSataDevices();
    bVar9 = (bool)(bVar9 | uVar2 < uVar3);
    break;
  case 0xd:
    uVar2 = param_3[4];
    CHostHardwareInfoBase::getDeviceInterfaceSettings();
    iVar4 = CHwDeviceInterfaceSettings::getMaxScsiDevices();
    bVar9 = true;
    if (iVar4 - 1U <= uVar2) {
      uVar2 = param_3[3];
      CHostHardwareInfoBase::getDeviceInterfaceSettings();
      uVar5 = CHwDeviceInterfaceSettings::getMaxIdeDevices();
      bVar9 = uVar2 < uVar5;
    }
LAB_1003b2569:
    cVar1 = FUN_100cd0070(uVar3,param_4,param_5);
    if (cVar1 != '\0') goto LAB_1003b2572;
    break;
  case 0xe:
    bVar9 = (uint)param_3[6] < 4;
    break;
  case 0xf:
    iVar4 = FUN_1003b2630(param_1,1);
    iVar6 = FUN_1003b2630(param_1,0);
    bVar9 = iVar6 + iVar4 != 0;
    break;
  case 0x10:
    lVar7 = CHostHardwareInfoBase::getNetworkSettings();
    uVar2 = 0;
    if (lVar7 != 0) {
      uVar2 = CHwNetworkSettings::getMaxVmNetAdapters();
    }
    uVar3 = 5;
    if (uVar2 != 0) {
      uVar3 = uVar2;
    }
    bVar9 = (uint)param_3[8] < uVar3;
    break;
  case 0x11:
    bVar9 = param_3[9] == 0;
    break;
  case 0x12:
    bVar9 = param_3[10] == 0;
    break;
  default:
    bVar9 = false;
  }
  bVar9 = !bVar9;
LAB_1003b25f3:
  return !bVar9;
}

