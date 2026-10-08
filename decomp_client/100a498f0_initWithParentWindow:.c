
/* Function Stack Size: 0x18 bytes */

ID SSBaseDelegate::initWithParentWindow_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_20;
  
  local_20.super_class = (class_t *)PTR_SSBaseDelegate_10226ac20;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,PTR_s_init_102268ca8);
  if (IVar1 != 0) {
    *(ID *)(IVar1 + m_parentWnd) = param_3;
    *(undefined8 *)(IVar1 + m_screenshot) = 0;
  }
  return IVar1;
}

