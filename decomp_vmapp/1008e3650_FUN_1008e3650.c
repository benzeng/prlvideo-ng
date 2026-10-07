
undefined * FUN_1008e3650(void)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  char *pcVar5;
  undefined1 local_28 [8];
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  if (*PTR_s__1011b55e8 == '\0') {
    IVar2 = NSAutoreleasePool::alloc
                      ((ID)PTR__OBJC_CLASS___NSAutoreleasePool_100bedb20,PTR_s_alloc_100bed228);
    IVar2 = NSAutoreleasePool::init(IVar2,PTR_s_init_100bed248);
    uVar3 = _NSSearchPathForDirectoriesInDomains(5,1,1);
    uVar3 = (*(code *)puVar1)(uVar3,PTR_s_objectAtIndex__100bedad0,0);
    uVar3 = (*(code *)puVar1)(uVar3,PTR_s_stringByAppendingPathComponent__100bedad8,&cf_Logs);
    IVar4 = NSFileManager::alloc
                      ((ID)PTR__OBJC_CLASS___NSFileManager_100bedc68,PTR_s_alloc_100bed228);
    IVar4 = NSFileManager::init(IVar4,PTR_s_init_100bed248);
    IVar4 = NSFileManager::autorelease(IVar4,PTR_s_autorelease_100bed238);
    IVar4 = NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                      (IVar4,PTR_s_createDirectoryAtPath_withInterm_100bedae0,uVar3,1,0,local_28);
    if ((char)IVar4 != '\0') {
      pcVar5 = (char *)(*(code *)PTR__objc_msgSend_100ba25e8)(uVar3,PTR_s_UTF8String_100bed218);
      PTR_s__1011b55e8 = _strdup(pcVar5);
      LOCK();
      UNLOCK();
    }
    NSAutoreleasePool::drain(IVar2,PTR_s_drain_100bed2a8);
  }
  return PTR_s__1011b55e8;
}

