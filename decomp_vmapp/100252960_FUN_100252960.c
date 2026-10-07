
void FUN_100252960(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  if (param_1[1] != 0) {
    (*(code *)PTR__objc_msgSend_100ba25e8)
              (*param_1,PTR_s_performSelector_onThread_withObj_100bed2c0,
               PTR_s_stopController_100bed2b8,param_1[1],0,1);
    iVar2 = (*(code *)puVar1)(*param_1,PTR_s_getResult_100bed2c8);
    if (iVar2 != 0) {
      FUN_1008e3970("","LocalDevices",0,"StopController finished with 0x%x");
    }
    param_1[1] = 0;
  }
  return;
}

