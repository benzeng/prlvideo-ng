
bool FUN_100ab7080(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  
  puVar4 = PTR__objc_msgSend_1021e1c68;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSWorkspace_10226a8c8,PTR_s_sharedWorkspace_1022697b8);
  uVar2 = (*(code *)puVar4)(PTR__OBJC_CLASS___NSString_10226a7c8,
                            PTR_s_stringWithUTF8String__1022697c0,param_1);
  lVar3 = (*(code *)puVar4)(uVar1,PTR_s_iconForFile__10226a3a8,uVar2);
  if (lVar3 == 0) {
    bVar6 = false;
  }
  else {
    FUN_100d77820();
    uVar1 = (*(code *)puVar4)(PTR__OBJC_CLASS___NSWorkspace_10226a8c8,
                              PTR_s_sharedWorkspace_1022697b8);
    uVar2 = (*(code *)puVar4)(PTR__OBJC_CLASS___NSString_10226a7c8,
                              PTR_s_stringWithUTF8String__1022697c0,param_2);
    cVar5 = (*(code *)puVar4)(uVar1,PTR_s_setIcon_forFile_options__10226a3b0,lVar3,uVar2,0);
    bVar6 = cVar5 != '\0';
    FUN_100d77870();
  }
  return bVar6;
}

