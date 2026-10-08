
bool FUN_100d700c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  long local_38;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,param_1
                    );
  uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSAppleScript_10226ab00,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_initWithSource__10226a598,uVar2);
  local_38 = 0;
  (*(code *)puVar1)(uVar3,PTR_s_executeAndReturnError__10226a5a0,&local_38);
  bVar4 = local_38 == 0;
  if (!bVar4) {
    uVar2 = (*(code *)puVar1)(uVar2,PTR_s_UTF8String_1022699e8);
    FUN_100df99c0("","prl_apple_script_helper",0,"Error in script:\n%s",uVar2);
    uVar2 = (*(code *)puVar1)(local_38,PTR_s_description_10226a700);
    uVar2 = (*(code *)puVar1)(uVar2,PTR_s_UTF8String_1022699e8);
    FUN_100df99c0("","prl_apple_script_helper",0,"%s",uVar2);
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_release_1022699b8);
  return bVar4;
}

