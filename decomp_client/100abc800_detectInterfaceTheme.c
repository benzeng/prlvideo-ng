
/* Function Stack Size: 0x10 bytes */

void DesktopNotificationObserver::detectInterfaceTheme(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char cVar4;
  
  puVar3 = PTR__objc_msgSend_1021e1c68;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSUserDefaults_10226a908,PTR_s_standardUserDefaults_102269ab0
                    );
  uVar1 = (*(code *)puVar3)(uVar1,PTR_s_persistentDomainForName__102269ab8,
                            *(undefined8 *)PTR__NSGlobalDomain_1021e10d8);
  uVar2 = (*(code *)puVar3)(uVar1,PTR_s_valueForKey__10226a518,&cf_AppleInterfaceStyle);
  uVar1 = *(undefined8 *)(param_1 + m_cppClient);
  cVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(&cf_Dark,PTR_s_isEqualToString__102268f68,uVar2);
  FUN_100abd1c0(uVar1,cVar4 != '\0');
  return;
}

