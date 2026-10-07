
void FUN_100252bf0(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  if (param_1[1] != 0) {
    (*(code *)PTR__objc_msgSend_100ba25e8)(*param_1,PTR_s_setPairingCallback_context__100bed2f0,0,0)
    ;
    (*(code *)puVar1)(*param_1,PTR_s_performSelector_onThread_withObj_100bed2c0,
                      PTR_s_stopPairing_100bed300,param_1[1],0,1);
    (*(code *)puVar1)(*param_1,PTR_s_setPairingCallback_context__100bed2f0,0,0);
    return;
  }
  return;
}

