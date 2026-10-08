
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100ab7900(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (DAT_102313ad8 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_102313ad8);
    if (iVar1 != 0) {
      puVar2 = operator_new(8);
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR__OBJC_CLASS___NSImage_10226a7c0,PTR_s_alloc_102268b58);
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR__OBJC_CLASS___NSBundle_10226a988,PTR_s_mainBundle_102269b28);
      uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithUTF8String__1022697c0,
                         "SharedAppIconMask");
      uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (uVar4,PTR_s_pathForResource_ofType__10226a3d0,uVar5,&cf_icns);
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (uVar3,PTR_s_initWithContentsOfFile__10226a3d8,uVar4);
      *puVar2 = uVar3;
      _DAT_102313ad0 = puVar2;
      ___cxa_atexit(FUN_100ab75f0,&DAT_102313ad0,0x100000000);
      ___cxa_guard_release(&DAT_102313ad8);
    }
  }
  return &DAT_102313ad0;
}

