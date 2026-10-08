
void FUN_100066970(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = MacUtils::replaceClassMethod
                    ("NSHelpManager","setContextHelpModeActive:","CMacCocoaApplicationDelegate",
                     "setContextHelpModeActive:","Original");
  if (cVar1 == '\0') {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: failed to perform setContextHelpModeActive: replacement");
  }
  WindowDelegateCustomizer::replaceOriginalMethods();
  FUN_10006bae0();
  QCoreApplication::setAttribute(3,1);
  QNetworkProxyFactory::setUseSystemConfiguration(true);
  FUN_100078040();
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSProcessInfo_10226a8e0,PTR_s_processInfo_1022697f8);
  uVar2 = (*(code *)UNRECOVERED_JUMPTABLE)
                    (uVar2,PTR_s_beginActivityWithOptions_reason__102269bb8,0xff00efffff,
                     &cf_Coherence);
                    /* WARNING: Could not recover jumptable at 0x000100066a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(uVar2,PTR_s_retain_102269a88);
  return;
}

