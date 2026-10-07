
undefined8
FUN_100252ad0(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  uVar2 = 0xe00002bc;
  if ((param_2 != (undefined1 *)0x0) && (param_1[1] != 0)) {
    local_20 = param_2[5];
    local_1f = param_2[4];
    local_1e = param_2[3];
    local_1d = param_2[2];
    local_1c = param_2[1];
    local_1b = *param_2;
    (*(code *)PTR__objc_msgSend_100ba25e8)
              (*param_1,PTR_s_setDeviceNameUpdate_callback_con_100bed2e0,&local_20,param_3,param_4);
    (*(code *)puVar1)(*param_1,PTR_s_performSelector_onThread_withObj_100bed2c0,
                      PTR_s_startDeviceNameUpdate_100bed2e8,param_1[1],0,1);
    uVar2 = (*(code *)puVar1)(*param_1,PTR_s_getResult_100bed2c8);
  }
  return uVar2;
}

