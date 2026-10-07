
undefined8 FUN_100252e60(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)(*param_1,PTR_s_getPairingCtx_100bed338);
  puVar1 = PTR__objc_msgSend_100ba25e8;
  if ((lVar2 == param_3) && (param_1[1] != 0)) {
    (*(code *)PTR__objc_msgSend_100ba25e8)(*param_1,PTR_s_setPairingCallback_context__100bed2f0,0,0)
    ;
    (*(code *)puVar1)(*param_1,PTR_s_performSelector_onThread_withObj_100bed2c0,
                      PTR_s_stopPairing_100bed300,param_1[1],0,1);
    (*(code *)puVar1)(*param_1,PTR_s_setPairingCallback_context__100bed2f0,0,0);
  }
  (*(code *)PTR__objc_msgSend_100ba25e8)
            (*param_1,PTR_s_performSelector_onThread_withObj_100bed2c0,PTR_s_closeDevice__100bed340,
             param_1[1],*param_2,1);
  if (param_2 != (undefined8 *)0x0) {
    operator_delete(param_2);
  }
  return 0;
}

