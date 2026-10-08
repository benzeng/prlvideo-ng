
/* Function Stack Size: 0x10 bytes */

void PDBarButtonItem::dealloc(ID param_1,SEL param_2)

{
  objc_super local_28;
  
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_reset_102269590);
  local_28.super_class = (class_t *)PTR_PDBarButtonItem_10226ab70;
  local_28.receiver = param_1;
  _objc_msgSendSuper2(&local_28,PTR_s_dealloc_102268c60);
  return;
}

