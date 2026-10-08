
void FUN_100aebe10(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,PTR_s_defaultCenter_102268ba8)
  ;
  puVar1 = PTR___NSConcreteStackBlock_1021e1280;
  local_58 = PTR___NSConcreteStackBlock_1021e1280;
  local_50 = 0xc0000000;
  local_4c = 0;
  local_48 = FUN_100aebf30;
  local_40 = &DAT_10223b5b0;
  local_38 = param_1;
  uVar4 = (*(code *)puVar2)(uVar3,PTR_s_addObserverForName_object_queue__1022692e0,
                            *(undefined8 *)PTR__AVCaptureDeviceWasDisconnectedNotification_1021e1020
                            ,0,0,&local_58);
  local_80 = puVar1;
  local_78 = 0xc0000000;
  local_74 = 0;
  local_70 = FUN_100aec020;
  local_68 = &DAT_10223b5d0;
  local_60 = param_1;
  uVar3 = (*(code *)puVar2)(uVar3,PTR_s_addObserverForName_object_queue__1022692e0,
                            *(undefined8 *)PTR__AVCaptureDeviceWasConnectedNotification_1021e1018,0,
                            0,&local_80);
  uVar5 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSArray_10226a818,PTR_s_alloc_102268b58);
  DAT_102311860 = (*(code *)puVar2)(uVar5,PTR_s_initWithObjects__10226a578,uVar4,uVar3,0);
  return;
}

