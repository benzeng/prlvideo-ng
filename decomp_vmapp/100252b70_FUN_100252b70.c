
undefined8 FUN_100252b70(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__objc_msgSend_100ba25e8;
  if ((param_1[1] != 0) && (lVar1 = *param_2, lVar1 != 0)) {
    (*(code *)PTR__objc_msgSend_100ba25e8)(*param_1,PTR_s_setPairingCallback_context__100bed2f0);
    (*(code *)puVar2)(*param_1,PTR_s_performSelector_onThread_withObj_100bed2c0,
                      PTR_s_startPairing__100bed2f8,param_1[1],lVar1,1);
    uVar3 = (*(code *)puVar2)(*param_1,PTR_s_getResult_100bed2c8);
    return uVar3;
  }
  return 0xe00002bc;
}

