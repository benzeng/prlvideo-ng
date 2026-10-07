
undefined8 FUN_100252f20(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  if (param_2 == (long *)0x0) {
    uVar2 = 0;
  }
  else if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_100ba25e8)
              (*param_1,PTR_s_performSelector_onThread_withObj_100bed2c0,PTR_s_isPaired__100bed348,
               param_1[1],*param_2,1);
    uVar2 = (*(code *)puVar1)(*param_1,PTR_s_getIsPaired_100bed350);
  }
  return uVar2;
}

