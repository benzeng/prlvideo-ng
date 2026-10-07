
void FUN_10000dcc0(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  pid_t pVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  IVar4 = NSAutoreleasePool::alloc
                    ((ID)PTR__OBJC_CLASS___NSAutoreleasePool_100bedb20,PTR_s_alloc_100bed228);
  IVar4 = NSAutoreleasePool::init(IVar4,PTR_s_init_100bed248);
  *(ID *)(param_1 + 0x40) = IVar4;
  pcVar2 = DAT_1011ccf28;
  uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
  pVar3 = _getpid();
  lVar5 = (*pcVar2)(uVar6,pVar3);
  *(long *)(param_1 + 0x50) = lVar5;
  if ((lVar5 == 0) && (0 < DAT_1011b55f8)) {
    FUN_1008e3970("","vm",1,"Empty ASN was created");
  }
  _NSApplicationLoad();
  uVar6 = (*(code *)puVar1)(PTR_MacAppDelegate_100bedb28,PTR_s_new_100bed280);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  IVar4 = NSApplication::sharedApplication
                    ((ID)PTR__OBJC_CLASS___NSApplication_100bedb30,PTR_s_sharedApplication_100bed288
                    );
  NSApplication::setDelegate_(IVar4,PTR_s_setDelegate__100bed290,*(undefined8 *)(param_1 + 0x48));
  return;
}

