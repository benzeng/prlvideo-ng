
undefined1 FUN_10005ec90(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  CAutoreleasePool local_40 [8];
  undefined8 local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  CAutoreleasePool::CAutoreleasePool(local_40);
  if (param_2 == 1) {
    uVar4 = 0;
  }
  else if (param_2 == 2) {
    uVar2 = FUN_100060bb0();
    uVar2 = FUN_1000609c0(uVar2);
    FUN_1006f9060(uVar2);
    uVar4 = 0;
  }
  else {
    lVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSPasteboard_10226a928,PTR_s_generalPasteboard_102269af0);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_1021e1c68)(lVar3,PTR_s_clearContents_102269af8);
      local_38 = (*(code *)PTR__objc_msgSend_1021e1c68)
                           (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                            param_1 + 0x10);
      uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR__OBJC_CLASS___NSArray_10226a818,PTR_s_arrayWithObjects_count__102268f00
                         ,&local_38,1);
      uVar4 = 1;
      (*(code *)PTR__objc_msgSend_1021e1c68)(lVar3,PTR_s_writeObjects__102269b00,uVar2);
    }
  }
  CAutoreleasePool::~CAutoreleasePool(local_40);
  if (lVar1 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

