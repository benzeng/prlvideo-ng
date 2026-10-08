
void FUN_100df3870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_s_executeBlockWithTimer__10226a708;
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_5,PTR_s_copy_102269220);
  uVar4 = (*(code *)puVar1)(param_1,param_2,PTR_s_scheduledTimerWithTimeInterval_t_10226a710,param_2
                            ,puVar2,uVar3,param_4);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  _objc_autoreleaseReturnValue(uVar4);
  return;
}

