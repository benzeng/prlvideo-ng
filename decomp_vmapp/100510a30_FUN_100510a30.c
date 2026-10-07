
void FUN_100510a30(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (param_1,PTR_s_dynamicPropertyForKey__100bed920,&cf_qtMethods);
  lVar2 = _objc_retainAutoreleasedReturnValue(uVar1);
  if (lVar2 == 0) {
    lVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)
                      (PTR__OBJC_CLASS___NSMutableDictionary_100bedc30,PTR_s_new_100bed280);
    (*(code *)PTR__objc_msgSend_100ba25e8)
              (param_1,PTR_s_setDynamicProperty_forKey__100bed928,lVar2,&cf_qtMethods);
  }
  _objc_autoreleaseReturnValue(lVar2);
  return;
}

