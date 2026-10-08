
void FUN_1000668b0(void)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  CAutoreleasePool *this;
  
  cVar2 = FUN_100debda0();
  if (cVar2 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"Failed to resolve some OS X symbols");
  }
  cVar2 = MacUtils::isWindowServerAlive();
  if (cVar2 != '\0') {
    MacUtils::initializeCIFilters();
    puVar1 = PTR__objc_msgSend_1021e1c68;
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR_CMacCocoaApplication_10226a9a8,PTR_s_sharedApplication_102269bb0);
    uVar4 = (*(code *)puVar1)(PTR_CMacCocoaApplicationDelegate_10226a9b0,PTR_s_alloc_102268b58);
    uVar4 = (*(code *)puVar1)(uVar4,PTR_s_init_102268ca8);
    (*(code *)puVar1)(uVar3,PTR_s_setDelegate__102268f50,uVar4);
    this = operator_new(8);
    CAutoreleasePool::CAutoreleasePool(this);
    DAT_102310868 = this;
  }
  return;
}

