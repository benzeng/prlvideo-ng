
void FUN_100507f20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = operator_new(8);
  uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSImage_100bedb10,PTR_s_alloc_100bed228);
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSBundle_100bedc00,PTR_s_mainBundle_100bed860);
  uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSString_100bedb00,PTR_s_stringWithUTF8String__100bed208,
                     param_2);
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (uVar3,PTR_s_pathForResource_ofType__100bed868,uVar4,&cf_icns);
  uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (uVar2,PTR_s_initWithContentsOfFile__100bed870,uVar3);
  *puVar1 = uVar2;
  *param_1 = puVar1;
  return;
}

