
bool FUN_100d79b00(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSUserDefaults_10226a908,PTR_s_standardUserDefaults_102269ab0
                    );
  uVar1 = (*(code *)puVar2)(uVar1,PTR_s_persistentDomainForName__102269ab8,
                            *(undefined8 *)PTR__NSGlobalDomain_1021e10d8);
  uVar1 = (*(code *)puVar2)(uVar1,PTR_s_valueForKey__10226a518,&cf_com_apple_trackpad_forceClick);
  cVar3 = (*(code *)puVar2)(uVar1,PTR_s_boolValue_10226a600);
  return cVar3 != '\0';
}

