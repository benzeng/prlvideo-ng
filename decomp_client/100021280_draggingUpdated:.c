
/* Function Stack Size: 0x18 bytes */

unsigned_long_long PDDragDropView::draggingUpdated_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  unsigned_long_long uVar4;
  
  uVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_superview_102268b88);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_draggingUpdated__102269540,uVar2);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  (*(code *)puVar1)(uVar2);
  return uVar4;
}

