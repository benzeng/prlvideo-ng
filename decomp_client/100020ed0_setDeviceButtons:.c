
/* Function Stack Size: 0x18 bytes */

void PDDeviceBarViewContaner::setDeviceButtons_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _deviceButtons;
  uVar3 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_1021e1c70)(uVar1);
  return;
}

