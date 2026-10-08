
/* Function Stack Size: 0x10 bytes */

void MacPromoWindow::dealloc(ID param_1,SEL param_2)

{
  objc_super local_20;
  
  FUN_100a1c840(m_closeHandler + param_1,0);
  local_20.super_class = (class_t *)PTR_MacPromoWindow_10226ac00;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_dealloc_102268c60);
  return;
}

