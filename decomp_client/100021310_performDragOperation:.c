
/* Function Stack Size: 0x18 bytes */

char PDDragDropView::performDragOperation_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_superview_102268b88);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_performDragOperation__102269548,uVar3);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  (*(code *)puVar1)(uVar3);
  return cVar2;
}

