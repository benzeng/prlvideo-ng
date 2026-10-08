
void FUN_100df32f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR__objc_retain_1021e1c78;
  lVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar3 = (*(code *)puVar1)(param_4);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_dynamicProperties_10226a6b8);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  if ((lVar2 != 0) && (lVar5 == 0)) {
    lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSMutableDictionary_10226a878,PTR_s_new_102269070);
    (*(code *)PTR__objc_release_1021e1c70)(0);
    _objc_setAssociatedObject(param_1,PTR_s_dynamicProperties_10226a6b8,lVar5,1);
  }
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(lVar5,PTR_s_removeObjectForKey__10226a6c0,uVar3);
    lVar6 = (*(code *)puVar1)(lVar5,PTR_s_count_102268e68);
    if (lVar6 == 0) {
      _objc_setAssociatedObject(param_1,PTR_s_dynamicProperties_10226a6b8,0,1);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_1021e1c68)(lVar5,PTR_s_setObject_forKey__102269208,lVar2,uVar3);
  }
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(lVar5);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(lVar2);
  return;
}

