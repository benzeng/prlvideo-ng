
/* Function Stack Size: 0x18 bytes */

ID ApplicationNotification::initWithObj_(ID param_1,SEL param_2,CAppsNotification *param_3)

{
  ID IVar1;
  objc_super local_20;
  
  local_20.super_class = (class_t *)PTR_ApplicationNotification_10226abc8;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,PTR_s_init_102268ca8);
  if (IVar1 != 0) {
    *(CAppsNotification **)(IVar1 + m_appsNotify) = param_3;
  }
  return IVar1;
}

