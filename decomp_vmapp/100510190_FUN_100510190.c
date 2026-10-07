
void FUN_100510190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR__objc_retain_100ba25f8;
  lVar2 = (*(code *)PTR__objc_retain_100ba25f8)(param_3);
  uVar3 = (*(code *)puVar1)(param_4);
  uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_dynamicProperties_100bed8f8);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  if ((lVar2 != 0) && (lVar5 == 0)) {
    lVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)
                      (PTR__OBJC_CLASS___NSMutableDictionary_100bedc30,PTR_s_new_100bed280);
    (*(code *)PTR__objc_release_100ba25f0)(0);
    _objc_setAssociatedObject(param_1,PTR_s_dynamicProperties_100bed8f8,lVar5,1);
  }
  puVar1 = PTR__objc_msgSend_100ba25e8;
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_100ba25e8)(lVar5,PTR_s_removeObjectForKey__100bed908,uVar3);
    lVar6 = (*(code *)puVar1)(lVar5,PTR_s_count_100bed950);
    if (lVar6 == 0) {
      _objc_setAssociatedObject(param_1,PTR_s_dynamicProperties_100bed8f8,0,1);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_100ba25e8)(lVar5,PTR_s_setObject_forKey__100bed9e8,lVar2,uVar3);
  }
  puVar1 = PTR__objc_release_100ba25f0;
  (*(code *)PTR__objc_release_100ba25f0)(lVar5);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(lVar2);
  return;
}

