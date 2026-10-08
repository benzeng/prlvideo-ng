
void FUN_100abaf30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (**(long **)(param_1 + 8) != 0) {
    uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
    uVar2 = (*(code *)puVar1)(uVar2,PTR_s_init_102268ca8);
    uVar3 = (*(code *)puVar1)(**(undefined8 **)(param_1 + 8),PTR_s_view_102269138);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setToolTip__102268d08,param_2);
                    /* WARNING: Could not recover jumptable at 0x000100abafa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_release_1022699b8);
    return;
  }
  return;
}

