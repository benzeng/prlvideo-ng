
bool FUN_1004c4fa0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = PTR__objc_msgSend_100ba25e8;
  uVar1 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_100bedb20,PTR_s_alloc_100bed228);
  uVar1 = (*(code *)puVar4)(uVar1,PTR_s_init_100bed248);
  uVar2 = (*(code *)puVar4)(PTR__OBJC_CLASS___NSRunningApplication_100bedbf8,
                            PTR_s_runningApplicationsWithBundleIde_100bed840,
                            &cf_com_getdropbox_dropbox);
  iVar3 = (*(code *)puVar4)(uVar2,PTR_s_count_100bed950);
  (*(code *)puVar4)(uVar1,PTR_s_release_100bed2a0);
  return iVar3 != 0;
}

