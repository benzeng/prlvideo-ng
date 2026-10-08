
void FUN_100027ef0(QObject *param_1,undefined8 param_2,QObject *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_102224740;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR_PDAccountTitleButton_10226a8c0,PTR_s_alloc_102268b58);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_initWithController__102269770,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  (*(code *)PTR__objc_release_1021e1c70)(uVar1);
  FUN_100027fb0(param_1);
  return;
}

