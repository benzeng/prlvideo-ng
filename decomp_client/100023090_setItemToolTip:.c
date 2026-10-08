
/* Function Stack Size: 0x18 bytes */

void PDBarButtonItem::setItemToolTip_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  lVar1 = _itemToolTip;
  if (*(long *)(param_1 + _itemToolTip) != lVar2) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar2,PTR_s_copy_102269220);
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = uVar3;
    (*(code *)PTR__objc_release_1021e1c70)(uVar4);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_button_1022695f0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_setToolTip__102268d08,lVar2);
    (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  }
  (*(code *)PTR__objc_release_1021e1c70)(lVar2);
  return;
}

