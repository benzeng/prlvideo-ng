
undefined1  [16] FUN_100df2680(void)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  uint local_48 [2];
  long local_40;
  undefined4 local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSProcessInfo_10226a8e0,PTR_s_class_102269100);
  cVar2 = _class_respondsToSelector(uVar3,PTR_s_operatingSystemVersion_102269800);
  if (cVar2 != '\0') {
    lVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSProcessInfo_10226a8e0,PTR_s_processInfo_1022697f8);
    if (lVar4 != 0) {
      lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (lVar4,PTR_s_methodSignatureForSelector__10226a680,
                         PTR_s_operatingSystemVersion_102269800);
      if (lVar5 != 0) {
        lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (PTR__OBJC_CLASS___NSInvocation_10226ab30,
                           PTR_s_invocationWithMethodSignature__10226a6e0,lVar5);
        puVar1 = PTR__objc_msgSend_1021e1c68;
        if (lVar5 != 0) {
          (*(code *)PTR__objc_msgSend_1021e1c68)(lVar5,PTR_s_setTarget__102268cd8,lVar4);
          (*(code *)puVar1)(lVar5,PTR_s_setSelector__10226a6e8,
                            PTR_s_operatingSystemVersion_102269800);
          (*(code *)puVar1)(lVar5,PTR_s_invoke_10226a6f0);
          uVar3 = (*(code *)puVar1)(lVar5,PTR_s_methodSignature_10226a688);
          lVar4 = (*(code *)puVar1)(uVar3,PTR_s_methodReturnLength_10226a690);
          if (lVar4 == 0x18) {
            (*(code *)PTR__objc_msgSend_1021e1c68)(lVar5,PTR_s_getReturnValue__10226a6f8,local_48);
            uVar6 = local_40 << 0x20 | (ulong)local_48[0];
            goto LAB_100df27e5;
          }
        }
      }
    }
  }
  local_24 = 0;
  _Gestalt(0x73797331,&local_24);
  local_28 = 0;
  _Gestalt(0x73797332,&local_28);
  local_2c = 0;
  _Gestalt(0x73797333,&local_2c);
  uVar6 = CONCAT44(local_28,local_24);
  local_38 = local_2c;
LAB_100df27e5:
  auVar7._8_4_ = local_38;
  auVar7._0_8_ = uVar6;
  auVar7._12_4_ = 0;
  return auVar7;
}

