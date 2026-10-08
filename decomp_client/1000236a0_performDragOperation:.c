
/* Function Stack Size: 0x18 bytes */

char PDBarButtonItem::performDragOperation_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_filePathForInfo__1022696a8);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  cVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_performDropPath__1022696b0,uVar2);
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  return cVar1;
}

