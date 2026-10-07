
void FUN_100510790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_s_executeBlockWithTimer__100bed9a0;
  puVar1 = PTR__objc_msgSend_100ba25e8;
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_5,PTR_s_copy_100bed9a8);
  uVar4 = (*(code *)puVar1)(param_1,param_2,PTR_s_timerWithTimeInterval_target_sel_100bed9b8,param_2
                            ,puVar2,uVar3,param_4);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_release_100ba25f0)(uVar3);
  _objc_autoreleaseReturnValue(uVar4);
  return;
}

