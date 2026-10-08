
undefined8 FUN_100d79a50(int *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSEvent_10226a8b0,PTR_s_eventWithCGEvent__10226a5f0,param_2);
  iVar3 = (*(code *)puVar1)(uVar4,PTR_s_stage_10226a5f8);
  if (iVar3 != *param_1) {
    *param_1 = iVar3;
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    else if ((iVar3 == 2) && ((char)param_1[1] == '\0')) {
      uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSUserDefaults_10226a908,
                                PTR_s_standardUserDefaults_102269ab0);
      uVar4 = (*(code *)puVar1)(uVar4,PTR_s_persistentDomainForName__102269ab8,
                                *(undefined8 *)PTR__NSGlobalDomain_1021e10d8);
      uVar4 = (*(code *)puVar1)(uVar4,PTR_s_valueForKey__10226a518,&cf_com_apple_trackpad_forceClick
                               );
      cVar2 = (*(code *)puVar1)(uVar4,PTR_s_boolValue_10226a600);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1 + 1) = 1;
        return 1;
      }
    }
  }
  return 0;
}

