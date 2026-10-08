
/* Function Stack Size: 0x18 bytes */

ID PreviewItem::initWithFilePath_(ID param_1,SEL param_2,const_char__ param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  objc_super local_38;
  
  local_38.super_class = (class_t *)PTR_PreviewItem_10226ac38;
  local_38.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_38,PTR_s_init_102268ca8);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (IVar2 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSURL_10226a8d0,PTR_s_alloc_102268b58);
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSString_10226a7c8,
                              PTR_s_stringWithUTF8String__1022697c0,param_3);
    uVar3 = (*(code *)puVar1)(uVar3,PTR_s_initFileURLWithPath__10226a4a0,uVar4);
    *(undefined8 *)(IVar2 + m_URL) = uVar3;
  }
  return IVar2;
}

