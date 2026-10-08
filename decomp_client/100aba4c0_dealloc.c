
/* Function Stack Size: 0x10 bytes */

void StatusView::dealloc(ID param_1,SEL param_2)

{
  long lVar1;
  objc_super local_28;
  
  lVar1 = normalImage;
  if (*(long *)(param_1 + normalImage) != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(*(long *)(param_1 + normalImage),PTR_s_release_1022699b8)
    ;
    *(undefined8 *)(param_1 + lVar1) = 0;
  }
  lVar1 = pressedImage;
  if (*(long *)(param_1 + pressedImage) != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (*(long *)(param_1 + pressedImage),PTR_s_release_1022699b8);
    *(undefined8 *)(param_1 + lVar1) = 0;
  }
  local_28.super_class = (class_t *)PTR_StatusView_10226ac30;
  local_28.receiver = param_1;
  _objc_msgSendSuper2(&local_28,PTR_s_dealloc_102268c60);
  return;
}

