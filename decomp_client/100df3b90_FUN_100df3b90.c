
void FUN_100df3b90(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_dynamicPropertyForKey__102268b28,&cf_qtMethods);
  lVar2 = _objc_retainAutoreleasedReturnValue(uVar1);
  if (lVar2 == 0) {
    lVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSMutableDictionary_10226a878,PTR_s_new_102269070);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (param_1,PTR_s_setDynamicProperty_forKey__102268b38,lVar2,&cf_qtMethods);
  }
  _objc_autoreleaseReturnValue(lVar2);
  return;
}

