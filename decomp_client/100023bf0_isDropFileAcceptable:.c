
/* Function Stack Size: 0x18 bytes */

char PDBarButtonItem::isDropFileAcceptable_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  lVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_dropType_1022696d8);
  if (lVar3 == 1) {
    cVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_isFloppyImage__1022696e0,uVar2);
  }
  else if (lVar3 == 2) {
    cVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_isCDImage__1022696e8,uVar2);
  }
  else if (lVar3 == 3) {
    cVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_isFolder__1022696f0,uVar2);
  }
  else {
    cVar1 = '\0';
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  return cVar1;
}

