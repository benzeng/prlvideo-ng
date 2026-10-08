
/* Function Stack Size: 0x10 bytes */

void OpenPanel::dealoc(ID param_1,SEL param_2)

{
  objc_super local_20;
  
  (*(code *)PTR__objc_msgSend_1021e1c68)(*(undefined8 *)(param_1 + m_url),PTR_s_release_1022699b8);
  local_20.super_class = (class_t *)PTR_OpenPanel_10226ac48;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_dealloc_102268c60);
  return;
}

