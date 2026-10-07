
void FUN_100507c40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(8);
  uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSImage_100bedb10,PTR_s_alloc_100bed228);
  uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (DAT_100b46188,DAT_100b46188,uVar2,PTR_s_initWithSize__100bed848);
  *puVar1 = uVar2;
  *param_1 = puVar1;
  return;
}

