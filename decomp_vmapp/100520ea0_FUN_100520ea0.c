
undefined8 * FUN_100520ea0(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_1007109e0();
  if (0xa05ff < uVar2) {
    (*(code *)PTR__objc_msgSend_100ba25e8)
              (PTR__OBJC_CLASS___NSTimeZone_100bedc50,PTR_s_resetSystemTimeZone_100beda60);
  }
  lVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSTimeZone_100bedc50,PTR_s_systemTimeZone_100beda68);
  puVar1 = PTR__objc_msgSend_100ba25e8;
  if (lVar3 == 0) {
    *param_1 = 0;
  }
  else {
    uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)(lVar3,PTR_s_name_100bed408);
    uVar4 = (*(code *)puVar1)(uVar4,PTR_s_UTF8String_100bed218);
    FUN_100520be0(param_1,lVar3,uVar4);
  }
  return param_1;
}

