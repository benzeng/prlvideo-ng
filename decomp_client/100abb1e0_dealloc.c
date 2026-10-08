
/* Function Stack Size: 0x10 bytes */

void QLResponder::dealloc(ID param_1,SEL param_2)

{
  objc_super local_20;
  
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setItemArray__10226a4b0,0);
  local_20.super_class = (class_t *)PTR_QLResponder_10226ac40;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_dealloc_102268c60);
  return;
}

