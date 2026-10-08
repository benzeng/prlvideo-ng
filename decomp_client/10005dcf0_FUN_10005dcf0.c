
void FUN_10005dcf0(QObject *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined **)param_1 = &DAT_1021ed4f0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR_SpeechRecognizerDelegate_10226a980,PTR_s_alloc_102268b58);
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_init_102268ca8);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}

