
/* Function Stack Size: 0x18 bytes */

ID CMacDragSource::initWithManager_(ID param_1,SEL param_2,CDragDropGUI_Mac *param_3)

{
  ID IVar1;
  objc_super local_20;
  
  local_20.super_class = (class_t *)PTR_CMacDragSource_10226abb8;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,PTR_s_init_102268ca8);
  if (IVar1 != 0) {
    *(CDragDropGUI_Mac **)(IVar1 + m_manager) = param_3;
  }
  return IVar1;
}

