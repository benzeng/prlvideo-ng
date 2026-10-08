
undefined * FUN_100df97a0(void)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  undefined1 local_30 [8];
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (*PTR_s__10230ffc8 == '\0') {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
    uVar3 = (*(code *)puVar1)(uVar3,PTR_s_init_102268ca8);
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSFileManager_10226aa58,PTR_s_alloc_102268b58);
    uVar4 = (*(code *)puVar1)(uVar4,PTR_s_init_102268ca8);
    uVar4 = (*(code *)puVar1)(uVar4,PTR_s_autorelease_102269a10);
    uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_alloc_102268b58);
    uVar5 = (*(code *)puVar1)(uVar5,PTR_s_initWithUTF8String__10226a790,
                              "4C6364ACXT.com.parallels.desktop.appstore");
    uVar5 = (*(code *)puVar1)(uVar5,PTR_s_autorelease_102269a10);
    lVar6 = (*(code *)puVar1)(uVar4,PTR_s_containerURLForSecurityApplicati_10226a798,uVar5);
    if (lVar6 != 0) {
      uVar5 = (*(code *)puVar1)(lVar6,PTR_s_path_102269938);
      uVar5 = (*(code *)puVar1)(uVar5,PTR_s_stringByAppendingPathComponent__10226a780,
                                &cf_Library_Logs);
      cVar2 = (*(code *)puVar1)(uVar4,PTR_s_createDirectoryAtPath_withInterm_10226a788,uVar5,1,0,
                                local_30);
      if (cVar2 != '\0') {
        pcVar7 = (char *)(*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_UTF8String_1022699e8);
        PTR_s__10230ffc8 = _strdup(pcVar7);
        LOCK();
        UNLOCK();
      }
    }
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_drain_10226a5d8);
  }
  return PTR_s__10230ffc8;
}

