
/* Function Stack Size: 0x20 bytes */

ID OpenPanel::showModalWithPrompt_andInfo_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ID IVar7;
  
  QCoreApplication::processEvents(0);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSTextField_10226a850,PTR_s_alloc_102268b58);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_initWithFrame__102268f78);
  (*(code *)puVar1)(uVar4,PTR_s_setStringValue__102269098,param_4);
  (*(code *)puVar1)(uVar4,PTR_s_setBezeled__1022690e0,0);
  (*(code *)puVar1)(uVar4,PTR_s_setDrawsBackground__1022690d8,0);
  (*(code *)puVar1)(uVar4,PTR_s_setEditable__1022690d0,0);
  (*(code *)puVar1)(uVar4,PTR_s_setSelectable__1022690c8,0);
  (*(code *)puVar1)(uVar4,PTR_s_setAlignment__1022690b8,2);
  (*(code *)puVar1)(uVar4,PTR_s_setAutoresizingMask__1022693b8,2);
  (*(code *)puVar1)(uVar4,PTR_s_sizeToFit_102269090);
  uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSOpenPanel_10226ab18,PTR_s_openPanel_10226a630);
  (*(code *)puVar1)(uVar5,PTR_s_setCanChooseDirectories__10226a638,1);
  (*(code *)puVar1)(uVar5,PTR_s_setCanChooseFiles__10226a640,0);
  (*(code *)puVar1)(uVar5,PTR_s_setAllowsMultipleSelection__10226a648,0);
  (*(code *)puVar1)(uVar5,PTR_s_setDirectoryURL__10226a650,*(undefined8 *)(param_1 + m_url));
  (*(code *)puVar1)(uVar5,PTR_s_setPrompt__10226a658,param_3);
  (*(code *)puVar1)(uVar5,PTR_s_setAccessoryView__10226a660,uVar4);
  (*(code *)puVar1)(uVar5,PTR_s_setDelegate__102268f50,param_1);
  cVar3 = (*(code *)puVar1)(uVar5,PTR_s_respondsToSelector__102269d98,
                            PTR_s_setAccessoryViewDisclosed__10226a668);
  puVar2 = PTR_s_setAccessoryViewDisclosed__10226a668;
  if (cVar3 != '\0') {
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithBool__102269a20,1
                             );
    (*(code *)puVar1)(uVar5,PTR_s_performSelector_withObject__102269e68,puVar2,uVar4);
  }
  lVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_runModal_10226a670);
  IVar7 = 0;
  if (lVar6 == 1) {
    uVar4 = (*(code *)puVar1)(uVar5,PTR_s_URLs_10226a678);
    uVar4 = (*(code *)puVar1)(uVar4,PTR_s_objectAtIndex__102269480,0);
    uVar4 = (*(code *)puVar1)(uVar4,PTR_s_copy_102269220);
    IVar7 = (*(code *)puVar1)(uVar4,PTR_s_autorelease_102269a10);
  }
  return IVar7;
}

