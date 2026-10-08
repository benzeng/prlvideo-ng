
void FUN_10008ecf0(long param_1)

{
  undefined8 uVar1;
  undefined8 in_R9;
  
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_shortcutRecognizer_10226a1e0);
  QMetaObject::invokeMethod
            (uVar1,"onKeyboardInputSourceWillChange",0,0,0,in_R9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
             ,0,0);
  return;
}

