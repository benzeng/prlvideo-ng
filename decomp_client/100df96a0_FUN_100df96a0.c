
undefined * FUN_100df96a0(void)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  char *pcVar5;
  undefined1 local_28 [8];
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (*PTR_s__10230ffc0 == '\0') {
    IVar2 = NSAutoreleasePool::alloc
                      ((ID)PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
    IVar2 = NSAutoreleasePool::init(IVar2,PTR_s_init_102268ca8);
    uVar3 = _NSSearchPathForDirectoriesInDomains(5,1,1);
    uVar3 = (*(code *)puVar1)(uVar3,PTR_s_objectAtIndex__102269480,0);
    uVar3 = (*(code *)puVar1)(uVar3,PTR_s_stringByAppendingPathComponent__10226a780,&cf_Logs);
    IVar4 = NSFileManager::alloc
                      ((ID)PTR__OBJC_CLASS___NSFileManager_10226aa58,PTR_s_alloc_102268b58);
    IVar4 = NSFileManager::init(IVar4,PTR_s_init_102268ca8);
    IVar4 = NSFileManager::autorelease(IVar4,PTR_s_autorelease_102269a10);
    IVar4 = NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                      (IVar4,PTR_s_createDirectoryAtPath_withInterm_10226a788,uVar3,1,0,local_28);
    if ((char)IVar4 != '\0') {
      pcVar5 = (char *)(*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_UTF8String_1022699e8);
      PTR_s__10230ffc0 = _strdup(pcVar5);
      LOCK();
      UNLOCK();
    }
    NSAutoreleasePool::drain(IVar2,PTR_s_drain_10226a5d8);
  }
  return PTR_s__10230ffc0;
}

