
/* Function Stack Size: 0x10 bytes */

int BTController::startInquiry(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ID self;
  int iVar5;
  
  lVar3 = _inquiry;
  lVar2 = _inquiry_in_progress;
  puVar1 = PTR__objc_msgSend_100ba25e8;
  if (*(char *)(param_1 + _inquiry_in_progress) == '\0') {
    (*(code *)PTR__objc_msgSend_100ba25e8)
              (*(undefined8 *)(param_1 + _inquiry),PTR_s_release_100bed2a0);
    self = IOBluetoothDeviceInquiry::inquiryWithDelegate_
                     ((ID)PTR__OBJC_CLASS___IOBluetoothDeviceInquiry_100bedb48,
                      PTR_s_inquiryWithDelegate__100bed3b8,param_1);
    *(ID *)(param_1 + lVar3) = self;
    if (self == 0) {
      *(undefined4 *)(param_1 + _result) = 0xe00002bd;
      iVar5 = 0xe00002bd;
    }
    else {
      IOBluetoothDeviceInquiry::retain(self,PTR_s_retain_100bed3c0);
      iVar5 = 0;
      (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar3),PTR_s_setUpdateNewDeviceNames__100bed3c8,0)
      ;
      *(undefined1 *)(param_1 + lVar2) = 1;
      iVar4 = (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar3),PTR_s_start_100bed3d0);
      *(int *)(param_1 + _result) = iVar4;
      if (iVar4 != 0) {
        FUN_1008e3970("","LocalDevices",0,"failed to start inquiry: %d");
        (*(code *)PTR__objc_msgSend_100ba25e8)
                  (*(undefined8 *)(param_1 + lVar3),PTR_s_release_100bed2a0);
        *(undefined8 *)(param_1 + lVar3) = 0;
        *(undefined1 *)(param_1 + lVar2) = 0;
        iVar5 = *(int *)(param_1 + _result);
      }
    }
  }
  else {
    FUN_1008e3970("","LocalDevices",0,"BTInquiry is already started!");
    *(undefined4 *)(param_1 + _result) = 0xe00002bc;
    iVar5 = 0xe00002bc;
  }
  return iVar5;
}

