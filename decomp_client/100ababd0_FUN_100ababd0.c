
void FUN_100ababd0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = **(long **)(param_1 + 8);
  if (lVar1 != 0) {
    **(long **)(param_1 + 8) = 0;
    puVar2 = PTR__objc_msgSend_1021e1c68;
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
    uVar3 = (*(code *)puVar2)(uVar3,PTR_s_init_102268ca8);
    lVar4 = (*(code *)puVar2)(lVar1,PTR_s_view_102269138);
    (*(code *)PTR__objc_msgSend_1021e1c68)(lVar4,PTR_s_setEnabled__102268dc8,0);
    *(undefined8 *)(lVar4 + StatusView::statusItem) = 0;
    *(undefined8 *)(lVar4 + StatusView::cppItem) = 0;
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSStatusBar_10226aac0,PTR_s_systemStatusBar_10226a460);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_removeStatusItem__10226a488,lVar1);
    (*(code *)PTR__objc_msgSend_1021e1c68)(lVar1,PTR_s_release_1022699b8);
                    /* WARNING: Could not recover jumptable at 0x000100abaca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_release_1022699b8);
    return;
  }
  return;
}

