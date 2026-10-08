
/* Function Stack Size: 0x18 bytes */

void PDBarButtonItem::setImage_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  lVar2 = _image;
  lVar1 = *(long *)(param_1 + _image);
  if (lVar1 != lVar3) {
    uVar4 = (*(code *)PTR__objc_retain_1021e1c78)(lVar3);
    *(undefined8 *)(param_1 + lVar2) = uVar4;
    (*(code *)PTR__objc_release_1021e1c70)(lVar1);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_button_1022695f0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar4,PTR_s_setImage__102268cd0,*(undefined8 *)(param_1 + lVar2));
    (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  }
  (*(code *)PTR__objc_release_1021e1c70)(lVar3);
  return;
}

