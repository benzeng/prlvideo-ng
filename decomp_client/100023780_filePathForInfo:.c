
/* Function Stack Size: 0x18 bytes */

ID PDBarButtonItem::filePathForInfo_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_draggingPasteboard_1022696c0);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar1,PTR_s_propertyListForType__1022696c8,
                     *(undefined8 *)PTR__NSFilenamesPboardType_1021e10c8);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)PTR__objc_release_1021e1c70)(uVar1);
  lVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_count_102268e68);
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_objectAtIndex__102269480,0);
    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  IVar4 = _objc_autoreleaseReturnValue(uVar1);
  return IVar4;
}

