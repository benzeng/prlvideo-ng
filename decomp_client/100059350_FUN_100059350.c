
undefined8 FUN_100059350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **local_30 [2];
  
  FUN_10005ae70(local_30);
  local_30[0] = &PTR_FUN_10226c3b8;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSMutableDictionary_10226a878,PTR_s_alloc_102268b58);
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_init_102268ca8);
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_autorelease_102269a10);
  FUN_10005aef0(local_30,uVar1);
  FUN_10005b6e0(local_30,param_2,0);
  FUN_10005b8b0(local_30,3,1,5);
  FUN_10005b960(local_30,2);
  FUN_10005b9b0(local_30,param_3);
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSMutableDictionary_10226a878,PTR_s_alloc_102268b58);
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_init_102268ca8);
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_autorelease_102269a10);
  FUN_10005aef0(param_1,uVar1);
  FUN_10005bb10(param_1,local_30);
  FUN_10005bac0(param_1,1);
  FUN_10005aeb0(local_30);
  return 1;
}

