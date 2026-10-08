
/* Function Stack Size: 0x10 bytes */

ID PDAccountTitleButton::nameButton(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_loadWeakRetained(param_1 + _nameButton);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

