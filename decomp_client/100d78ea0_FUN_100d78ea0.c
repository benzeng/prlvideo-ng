
void FUN_100d78ea0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar2 = (*(code *)puVar1)(uVar2,PTR_s_init_102268ca8);
  *param_1 = uVar2;
  uVar2 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSBundle_10226a988,PTR_s_mainBundle_102269b28);
  param_1[1] = uVar2;
  return;
}

