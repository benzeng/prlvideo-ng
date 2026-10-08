
void FUN_10098e630(QObject *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_102236280;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSWorkspace_10226a8c8,PTR_s_sharedWorkspace_1022697b8);
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_notificationCenter_1022699f0);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar1,PTR_s_removeObserver__102268c30,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18)
            );
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSWorkspace_10226a8c8,PTR_s_sharedWorkspace_1022697b8);
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_notificationCenter_1022699f0);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar1,PTR_s_removeObserver__102268c30,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20)
            );
  QObject::~QObject(param_1);
  return;
}

