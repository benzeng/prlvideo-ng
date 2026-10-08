
/* Function Stack Size: 0x18 bytes */

ID OpenPanel::initWithFilterUrl_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  objc_super local_28;
  
  local_28.super_class = (class_t *)PTR_OpenPanel_10226ac48;
  local_28.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_28,PTR_s_init_102268ca8);
  IVar2 = 0;
  if (IVar1 != 0) {
    *(ID *)(IVar1 + m_url) = param_3;
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_retain_102269a88);
    IVar2 = IVar1;
  }
  return IVar2;
}

