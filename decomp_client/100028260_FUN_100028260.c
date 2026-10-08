
void FUN_100028260(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeButton_102269718);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar2 = CTitleBarControllerQt::nativeTitleBarController();
    lVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
    (*(code *)PTR__objc_release_1021e1c70)(lVar3);
    if (lVar3 != 0) {
      uVar2 = CTitleBarControllerQt::nativeTitleBarController();
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (uVar2,PTR_s_removeAdditionalView__102268ed8,*(undefined8 *)(param_1 + 0x28));
      puVar1 = PTR__objc_release_1021e1c70;
      (*(code *)PTR__objc_release_1021e1c70)(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      (*(code *)puVar1)(uVar2);
      return;
    }
  }
  return;
}

