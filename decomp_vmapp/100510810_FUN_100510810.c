
void FUN_100510810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_s_userInfo_100bed9c0;
  uVar2 = (*(code *)PTR__objc_retain_100ba25f8)(param_3);
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_3,puVar1);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar2);
  puVar1 = PTR__objc_release_100ba25f0;
  (*(code *)PTR__objc_release_100ba25f0)(uVar2);
  (*(code *)puVar1)(lVar4);
  return;
}

