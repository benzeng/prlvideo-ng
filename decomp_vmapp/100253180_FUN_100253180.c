
undefined8 FUN_100253180(undefined8 *param_1,long param_2,long param_3,uint param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  uVar2 = 0xe00002bc;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1[1] != 0)) && (uVar2 = 0, param_4 != 0)) {
    IVar3 = NSData::dataWithBytes_length_
                      ((ID)PTR__OBJC_CLASS___NSData_100bedb08,PTR_s_dataWithBytes_length__100bed220,
                       param_3,(ulong)param_4);
    (*(code *)puVar1)(param_2,PTR_s_setData__100bed3a0,IVar3);
    (*(code *)puVar1)(*param_1,PTR_s_performSelector_onThread_withObj_100bed2c0,
                      PTR_s_sendL2CAPChannel__100bed3a8,param_1[1],param_2,1);
    uVar2 = (*(code *)puVar1)(*param_1,PTR_s_getResult_100bed2c8);
    return uVar2;
  }
  return uVar2;
}

