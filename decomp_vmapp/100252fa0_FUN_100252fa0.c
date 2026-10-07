
undefined8
FUN_100252fa0(undefined8 *param_1,long *param_2,long *param_3,undefined2 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  uVar2 = 0xe00002bc;
  if ((((param_2 != (long *)0x0) && (param_1[1] != 0)) && (param_3 != (long *)0x0)) &&
     (*param_2 != 0)) {
    (*(code *)PTR__objc_msgSend_100ba25e8)
              (*param_1,PTR_s_performSelector_onThread_withObj_100bed2c0,
               PTR_s_allocateBTL2CAPChannelDelegate_100bed358,param_1[1],0,1);
    lVar3 = (*(code *)puVar1)(*param_1,PTR_s_getAllocatedImpl_100bed360);
    if (lVar3 == 0) {
      uVar2 = 0xe00002bc;
    }
    else {
      (*(code *)puVar1)(lVar3,PTR_s_setFlags__100bed498,0);
      (*(code *)puVar1)(lVar3,PTR_s_setCb__100bed368,param_5);
      (*(code *)puVar1)(lVar3,PTR_s_setCtx__100bed370,param_6);
      (*(code *)puVar1)(lVar3,PTR_s_setPsm__100bed378,param_4);
      (*(code *)puVar1)(lVar3,PTR_s_setL2cap__100bed458,0);
      (*(code *)puVar1)(lVar3,PTR_s_setDev__100bed380,*param_2);
      (*(code *)puVar1)(*param_1,PTR_s_performSelector_onThread_withObj_100bed2c0,
                        PTR_s_openL2CAPChannel__100bed388,param_1[1],lVar3,1);
      lVar4 = (*(code *)puVar1)(lVar3,PTR_s_l2cap_100bed450);
      if (lVar4 == 0) {
        (*(code *)PTR__objc_msgSend_100ba25e8)(lVar3,PTR_s_release_100bed2a0);
        uVar2 = 0xe00002bc;
      }
      else {
        *param_3 = lVar3;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

