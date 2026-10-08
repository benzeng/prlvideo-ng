
/* Function Stack Size: 0x18 bytes */

ID PDBarButtonItem::initWithVm_(ID param_1,SEL param_2,CVmWrap *param_3)

{
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = (class_t *)PTR_PDBarButtonItem_10226ab70;
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,PTR_s_init_102268ca8);
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(IVar1,PTR_s_setVm__102268e58,param_3);
    (*(code *)PTR__objc_msgSend_1021e1c68)(IVar1,PTR_s_setup_102269588);
  }
  return IVar1;
}

