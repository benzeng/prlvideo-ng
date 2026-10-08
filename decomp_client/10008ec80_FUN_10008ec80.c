
void FUN_10008ec80(long param_1)

{
  QObject *pQVar1;
  
  pQVar1 = (QObject *)
           (*(code *)PTR__objc_msgSend_1021e1c68)
                     (*(undefined8 *)(param_1 + 0x20),PTR_s_shortcutRecognizer_10226a1e0);
  QTimer::singleShot(0x1e,pQVar1,"1onKeyboardInputSourceDidChange()");
  return;
}

