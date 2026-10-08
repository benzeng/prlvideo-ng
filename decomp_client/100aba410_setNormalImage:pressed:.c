
/* Function Stack Size: 0x20 bytes */

void StatusView::setNormalImage_pressed_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = normalImage;
  if (*(long *)(param_1 + normalImage) != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(*(long *)(param_1 + normalImage),PTR_s_release_1022699b8)
    ;
  }
  if (*(long *)(param_1 + pressedImage) != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (*(long *)(param_1 + pressedImage),PTR_s_release_1022699b8);
  }
  lVar2 = pressedImage;
  *(ID *)(param_1 + lVar1) = param_3;
  *(ID *)(param_1 + lVar2) = param_4;
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(lVar1,PTR_s_retain_102269a88);
    param_4 = *(ID *)(param_1 + pressedImage);
  }
  if (param_4 != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_4,PTR_s_retain_102269a88);
  }
                    /* WARNING: Could not recover jumptable at 0x000100aba4ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setNeedsDisplay__1022692b8,1);
  return;
}

