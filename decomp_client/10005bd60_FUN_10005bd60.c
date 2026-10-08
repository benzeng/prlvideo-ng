
void FUN_10005bd60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_1021ed4a0;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_init_102268ca8);
  param_1[2] = uVar1;
  return;
}

