
undefined8 FUN_100253100(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  uVar2 = 0xe00002bc;
  if ((param_2 != 0) && (param_1[1] != 0)) {
    (*(code *)PTR__objc_msgSend_100ba25e8)
              (*param_1,PTR_s_performSelector_onThread_withObj_100bed2c0,
               PTR_s_closeL2CAPChannel__100bed390,param_1[1],param_2,1);
    (*(code *)puVar1)(*param_1,PTR_s_performSelector_onThread_withObj_100bed2c0,
                      PTR_s_releaseBTL2CAPChannelDelegate__100bed398,param_1[1],param_2,1);
    uVar2 = 0;
  }
  return uVar2;
}

