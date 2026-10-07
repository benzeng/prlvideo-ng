
undefined * FUN_1008e3750(void)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  undefined1 local_30 [8];
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  if (*PTR_s__1011b55f0 == '\0') {
    uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                      (PTR__OBJC_CLASS___NSAutoreleasePool_100bedb20,PTR_s_alloc_100bed228);
    uVar3 = (*(code *)puVar1)(uVar3,PTR_s_init_100bed248);
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSFileManager_100bedc68,PTR_s_alloc_100bed228);
    uVar4 = (*(code *)puVar1)(uVar4,PTR_s_init_100bed248);
    uVar4 = (*(code *)puVar1)(uVar4,PTR_s_autorelease_100bed238);
    uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSString_100bedb00,PTR_s_alloc_100bed228);
    uVar5 = (*(code *)puVar1)(uVar5,PTR_s_initWithUTF8String__100bed730,
                              "4C6364ACXT.com.parallels.desktop.appstore");
    uVar5 = (*(code *)puVar1)(uVar5,PTR_s_autorelease_100bed238);
    lVar6 = (*(code *)puVar1)(uVar4,PTR_s_containerURLForSecurityApplicati_100bedae8,uVar5);
    if (lVar6 != 0) {
      uVar5 = (*(code *)puVar1)(lVar6,PTR_s_path_100bedaf0);
      uVar5 = (*(code *)puVar1)(uVar5,PTR_s_stringByAppendingPathComponent__100bedad8,
                                &cf_Library_Logs);
      cVar2 = (*(code *)puVar1)(uVar4,PTR_s_createDirectoryAtPath_withInterm_100bedae0,uVar5,1,0,
                                local_30);
      if (cVar2 != '\0') {
        pcVar7 = (char *)(*(code *)PTR__objc_msgSend_100ba25e8)(uVar5,PTR_s_UTF8String_100bed218);
        PTR_s__1011b55f0 = _strdup(pcVar7);
        LOCK();
        UNLOCK();
      }
    }
    (*(code *)PTR__objc_msgSend_100ba25e8)(uVar3,PTR_s_drain_100bed2a8);
  }
  return PTR_s__1011b55f0;
}

