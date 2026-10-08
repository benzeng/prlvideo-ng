
/* Function Stack Size: 0x10 bytes */

CGSize __thiscall
PDDeviceStatusView::intrinsicContentSize(PDDeviceStatusView *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  double in_XMM1_Qa;
  CGSize CVar3;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(this,PTR_s_image_102269560);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  CVar3.field0_0x0 = (double)(*(code *)puVar1)(uVar2,PTR_s_size_102268ef8);
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  CVar3.field1_0x8 = in_XMM1_Qa;
  return CVar3;
}

