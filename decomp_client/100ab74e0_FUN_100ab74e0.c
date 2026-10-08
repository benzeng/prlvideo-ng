
void FUN_100ab74e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = operator_new(8);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSImage_10226a7c0,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSBundle_10226a988,PTR_s_mainBundle_102269b28);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithUTF8String__1022697c0,
                     param_2);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar3,PTR_s_pathForResource_ofType__10226a3d0,uVar4,&cf_icns);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar2,PTR_s_initWithContentsOfFile__10226a3d8,uVar3);
  *puVar1 = uVar2;
  *param_1 = puVar1;
  return;
}

