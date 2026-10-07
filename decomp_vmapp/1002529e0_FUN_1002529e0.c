
undefined8 FUN_1002529e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  if (param_1[1] != 0) {
    (*(code *)PTR__objc_msgSend_100ba25e8)
              (*param_1,PTR_s_setInquiryCallback_context__100bed2d0,param_2,param_3);
    (*(code *)puVar1)(*param_1,PTR_s_performSelector_onThread_withObj_100bed2c0,
                      PTR_s_startInquiry_100bed2d8,param_1[1],0,1);
    uVar2 = (*(code *)puVar1)(*param_1,PTR_s_getResult_100bed2c8);
    return uVar2;
  }
  return 0xe00002bc;
}

