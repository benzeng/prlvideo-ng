
/* Function Stack Size: 0x18 bytes */

ID QLResponder::initWithEventForwarder_(ID param_1,SEL param_2,IQLEventForwarder *param_3)

{
  ID IVar1;
  objc_super local_28;
  
  local_28.super_class = (class_t *)PTR_QLResponder_10226ac40;
  local_28.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_28,PTR_s_init_102268ca8);
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(IVar1,PTR_s_setFocusRect__10226a4a8);
    *(IQLEventForwarder **)(IVar1 + m_forwarder) = param_3;
  }
  return IVar1;
}

