
/* Function Stack Size: 0x10 bytes */

void LocationDelegate::dealloc(ID param_1,SEL param_2)

{
  long lVar1;
  objc_super local_28;
  
  lVar1 = m_manager;
  if (*(long *)(param_1 + m_manager) != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(*(long *)(param_1 + m_manager),PTR_s_release_1022699b8);
    *(undefined8 *)(param_1 + lVar1) = 0;
  }
  local_28.super_class = (class_t *)PTR_LocationDelegate_10226ac28;
  local_28.receiver = param_1;
  _objc_msgSendSuper2(&local_28,PTR_s_dealloc_102268c60);
  return;
}

