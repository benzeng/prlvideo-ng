
void FUN_100ab71b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(8);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSImage_10226a7c0,PTR_s_alloc_102268b58);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (DAT_100e19980,DAT_100e19980,uVar2,PTR_s_initWithSize__10226a3b8);
  *puVar1 = uVar2;
  *param_1 = puVar1;
  return;
}

