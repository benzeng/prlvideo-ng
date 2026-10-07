
void FUN_100643cc0(undefined8 param_1)

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
  
  puVar2 = PTR__objc_msgSend_100ba25e8;
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSNotificationCenter_100bedb78,PTR_s_defaultCenter_100bed538)
  ;
  puVar1 = PTR___NSConcreteStackBlock_100ba20c8;
  local_58 = PTR___NSConcreteStackBlock_100ba20c8;
  local_50 = 0xc0000000;
  local_4c = 0;
  local_48 = FUN_100643de0;
  local_40 = &DAT_100bc9710;
  local_38 = param_1;
  uVar4 = (*(code *)puVar2)(uVar3,PTR_s_addObserverForName_object_queue__100bed558,
                            *(undefined8 *)PTR__AVCaptureDeviceWasDisconnectedNotification_100ba2020
                            ,0,0,&local_58);
  local_80 = puVar1;
  local_78 = 0xc0000000;
  local_74 = 0;
  local_70 = FUN_100643ed0;
  local_68 = &DAT_100bc9730;
  local_60 = param_1;
  uVar3 = (*(code *)puVar2)(uVar3,PTR_s_addObserverForName_object_queue__100bed558,
                            *(undefined8 *)PTR__AVCaptureDeviceWasConnectedNotification_100ba2018,0,
                            0,&local_80);
  uVar5 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSArray_100bedb80,PTR_s_alloc_100bed228);
  DAT_1011cca98 = (*(code *)puVar2)(uVar5,PTR_s_initWithObjects__100bed570,uVar4,uVar3,0);
  return;
}

