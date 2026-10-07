
/* Function Stack Size: 0x18 bytes */

int BTController::startPairing_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  ID self;
  char *pcVar4;
  
  lVar2 = _pairing;
  if (*(long *)(param_1 + _pairing) == 0) {
    self = IOBluetoothDevicePair::pairWithDevice_
                     ((ID)PTR__OBJC_CLASS___IOBluetoothDevicePair_100bedb58,
                      PTR_s_pairWithDevice__100bed418);
    *(ID *)(param_1 + lVar2) = self;
    puVar1 = PTR__objc_msgSend_100ba25e8;
    if (self != 0) {
      IOBluetoothDevicePair::retain(self,PTR_s_retain_100bed3c0);
      (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar2),PTR_s_setDelegate__100bed290,param_1);
      iVar3 = (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar2),PTR_s_start_100bed3d0);
      if (iVar3 == 0) {
        return 0;
      }
      FUN_1008e3970("","LocalDevices",0,"Failed to start pairing: 0x%x");
      (*(code *)PTR__objc_msgSend_100ba25e8)
                (*(undefined8 *)(param_1 + lVar2),PTR_s_release_100bed2a0);
      *(undefined8 *)(param_1 + lVar2) = 0;
      goto LAB_100253da6;
    }
    pcVar4 = "Failed to start pairing, pairing object is zero!";
  }
  else {
    pcVar4 = "BTPairing is already started!";
  }
  FUN_1008e3970("","LocalDevices",0,pcVar4);
LAB_100253da6:
  *(undefined4 *)(param_1 + _result) = 0xe00002bc;
  return 0xe00002bc;
}

