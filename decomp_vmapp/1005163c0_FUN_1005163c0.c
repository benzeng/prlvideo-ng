
void FUN_1005163c0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__objc_msgSend_100ba25e8;
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSString_100bedb00,PTR_s_alloc_100bed228);
  lVar1 = *param_3;
  uVar3 = (*(code *)puVar2)(uVar3,PTR_s_initWithCharacters_length__100beda30,
                            *(long *)(lVar1 + 0x10) + lVar1,(long)*(int *)(lVar1 + 4));
  (*(code *)puVar2)(uVar3,PTR_s_autorelease_100bed238);
  return;
}

