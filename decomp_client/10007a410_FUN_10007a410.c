
void FUN_10007a410(QObject *param_1,QEvent *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  
  if ((((param_2 != (QEvent *)0x0) && (*(short *)(param_3 + 0x10) == 0x11)) &&
      ((*(byte *)(*(long *)(param_2 + 8) + 0x20) & 1) != 0)) &&
     ((*(byte *)(*(long *)(param_2 + 0x28) + 0xc) & 1) != 0)) {
    cVar3 = FUN_100074bb0(param_2);
    FUN_100075470(param_2,cVar3);
    if ((param_1[0x20] == (QObject)0x0) || (cVar3 != '\x01')) {
      if (param_1[0x39] == (QObject)0x0) {
        param_1[0x39] = (QObject)0x1;
        puVar2 = PTR__objc_msgSend_1021e1c68;
        lVar1 = *(long *)(param_1 + 0x10);
        uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (&cf_aGFzUGVyc2lzdGVudFN0YXRlVG9SZXN0b3Jl,PTR_s_base64Decode_102269eb0);
        uVar5 = (*(code *)puVar2)(uVar5,PTR_s_UTF8String_1022699e8);
        uVar5 = _sel_registerName(uVar5);
        cVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (*(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x18),
                           PTR_s_respondsToSelector__102269d98,uVar5);
        if (cVar3 == '\0') {
          cVar3 = '\0';
        }
        else {
          cVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (*(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x18),uVar5);
        }
        cVar4 = MacUtils::isFrontProcess();
        pcVar6 = "no resume data";
        if (cVar3 != '\0') {
          pcVar6 = "has resume data";
        }
        pcVar7 = "not front process";
        if (cVar4 != '\0') {
          pcVar7 = "front process";
        }
        FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"Normal ordering and drawing: %s, %s",pcVar6
                      ,pcVar7);
        if ((cVar4 == '\0') && (cVar3 == '\x01')) {
          MacUtils::bringProcessToFront();
        }
        puVar2 = PTR__objc_msgSend_1021e1c68;
        uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (&cf_cmVzdW1lTm9ybWFsV2luZG93T3JkZXJpbmdBbmREcmF3aW5n,
                           PTR_s_base64Decode_102269eb0);
        uVar5 = (*(code *)puVar2)(uVar5,PTR_s_UTF8String_1022699e8);
        uVar5 = _sel_registerName(uVar5);
        cVar3 = (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x18),
                                  PTR_s_respondsToSelector__102269d98,uVar5);
        if (cVar3 != '\0') {
          (*(code *)PTR__objc_msgSend_1021e1c68)(*(undefined8 *)(param_1 + 0x18),uVar5);
        }
      }
    }
    else {
      FUN_100078240(param_1,param_2);
    }
  }
  QObject::eventFilter(param_1,param_2);
  return;
}

