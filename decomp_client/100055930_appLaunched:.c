
/* Function Stack Size: 0x18 bytes */

void ApplicationNotification::appLaunched_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_userInfo_1022699e0);
  lVar3 = (*(code *)puVar1)(uVar2,PTR_s_objectForKey__1022699d0,&cf_NSApplicationPath);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + m_appsNotify);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar3,PTR_s_UTF8String_1022699e8);
    FUN_1000559a0(uVar2,uVar4);
    return;
  }
  return;
}

