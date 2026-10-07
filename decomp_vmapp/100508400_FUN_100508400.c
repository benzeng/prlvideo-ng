
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100508400(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (DAT_1011bc298 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1011bc298);
    if (iVar1 != 0) {
      puVar2 = operator_new(8);
      uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                        (PTR__OBJC_CLASS___NSImage_100bedb10,PTR_s_alloc_100bed228);
      uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)
                        (PTR__OBJC_CLASS___NSBundle_100bedc00,PTR_s_mainBundle_100bed860);
      uVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)
                        (PTR__OBJC_CLASS___NSString_100bedb00,PTR_s_stringWithUTF8String__100bed208,
                         "SharedAppIconMask");
      uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)
                        (uVar4,PTR_s_pathForResource_ofType__100bed868,uVar5,&cf_icns);
      uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                        (uVar3,PTR_s_initWithContentsOfFile__100bed870,uVar4);
      *puVar2 = uVar3;
      _DAT_1011bc290 = puVar2;
      ___cxa_atexit(FUN_1005080f0,&DAT_1011bc290,0x100000000);
      ___cxa_guard_release(&DAT_1011bc298);
    }
  }
  return &DAT_1011bc290;
}

