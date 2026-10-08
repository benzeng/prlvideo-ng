
void FUN_100079640(QObject *param_1,QObject *param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021ed910;
  *(QObject **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x20] = (QObject)0x0;
  param_1[0x21] = (QObject)0x0;
  *(undefined **)(param_1 + 0x28) = PTR_shared_null_1021e15d0;
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_1021e15e8;
  bVar1 = FUN_100075300();
  param_1[0x38] = (QObject)(bVar1 ^ 1);
  param_1[0x39] = (QObject)0x0;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (&cf_TlNQZXJzaXN0ZW50VUlNYW5hZ2Vy,PTR_s_base64Decode_102269eb0);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_UTF8String_1022699e8);
  uVar3 = _objc_getClass(uVar3);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (&cf_c2hhcmVkTWFuYWdlcg__,PTR_s_base64Decode_102269eb0);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_UTF8String_1022699e8);
  uVar4 = _sel_registerName(uVar4);
  cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_respondsToSelector__102269d98,uVar4);
  if (cVar2 != '\0') {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,uVar4);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  return;
}

