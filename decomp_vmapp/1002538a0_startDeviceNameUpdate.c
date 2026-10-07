
/* Function Stack Size: 0x10 bytes */

void BTController::startDeviceNameUpdate(ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 local_140;
  undefined1 local_13f;
  undefined1 local_13e;
  undefined1 local_13d;
  undefined1 local_13c;
  undefined1 local_13b;
  undefined4 local_138;
  char local_134 [247];
  undefined1 local_3d;
  long local_38;
  
  lVar2 = _name_update_cb;
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  if (*(long *)(param_1 + _name_update_cb) != 0) {
    if (*(char *)(param_1 + _name_update_in_progress) == '\0') {
      *(undefined1 *)(param_1 + _name_update_in_progress) = 1;
      IVar3 = IOBluetoothDevice::deviceWithAddress_
                        ((ID)PTR__OBJC_CLASS___IOBluetoothDevice_100bedb50,
                         PTR_s_deviceWithAddress__100bed400,_name_update_addr + param_1);
      if (IVar3 == 0) {
        FUN_1008e3970("","LocalDevices",0,"Can\'t create device!");
        *(undefined4 *)(param_1 + _result) = 0xe00002bd;
      }
      else {
        IVar4 = IOBluetoothDevice::name(IVar3,PTR_s_name_100bed408);
        if (IVar4 == 0) {
          IVar3 = IOBluetoothDevice::remoteNameRequest_
                            (IVar3,PTR_s_remoteNameRequest__100bed410,param_1);
          *(int *)(param_1 + _result) = (int)IVar3;
          if ((int)IVar3 == 0) goto LAB_100253a90;
          FUN_1008e3970("","LocalDevices",0,"Can\'t start name request!");
        }
        else {
          puVar5 = (undefined1 *)IOBluetoothDevice::getAddress(IVar3,PTR_s_getAddress_100bed3e0);
          local_140 = puVar5[5];
          local_13f = puVar5[4];
          local_13e = puVar5[3];
          local_13d = puVar5[2];
          local_13c = puVar5[1];
          local_13b = *puVar5;
          IVar4 = IOBluetoothDevice::nameOrAddress(IVar3,PTR_s_nameOrAddress_100bed3e8);
          pcVar6 = (char *)IOBluetoothDevice::UTF8String(IVar4,PTR_s_UTF8String_100bed218);
          _strncpy(local_134,pcVar6,0xf8);
          local_3d = 0;
          IVar3 = IOBluetoothDevice::classOfDevice(IVar3,PTR_s_classOfDevice_100bed3f0);
          local_138 = (undefined4)IVar3;
          (**(code **)(param_1 + lVar2))(4,&local_140,0,*(undefined8 *)(param_1 + _name_update_ctx))
          ;
          *(undefined4 *)(param_1 + _result) = 0;
        }
        *(undefined1 *)(param_1 + _name_update_in_progress) = 0;
      }
    }
    else {
      FUN_1008e3970("","LocalDevices",0,"DeviceNameUpdate is already started!");
      *(undefined4 *)(param_1 + _result) = 0xe00002bc;
    }
  }
LAB_100253a90:
  if (lVar1 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

