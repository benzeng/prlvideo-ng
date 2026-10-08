
/* Function Stack Size: 0x18 bytes */

void PDLFeedbackButtonDelegate::rateInAppStore_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSWorkspace_10226a8c8,PTR_s_sharedWorkspace_1022697b8);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSURL_10226a8d0;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithUTF8String__1022697c0,
                     PTR_s_https___itunes_apple_com_us_app__102275058);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar1,PTR_s_URLWithString__1022697c8,uVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_openURL__1022697d0,uVar4);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  return;
}

