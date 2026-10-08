
/* Function Stack Size: 0x10 bytes */

ID QNSViewReplacement::accessibilityAttributeNames(ID param_1,SEL param_2)

{
  undefined *self;
  ID IVar1;
  long lVar2;
  objc_super local_28;
  
  self = PTR__OBJC_CLASS___NSMutableArray_10226a840;
  local_28.super_class = (class_t *)PTR_QNSViewReplacement_10226abf0;
  local_28.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_28,PTR_s_accessibilityAttributeNames_102269ce0);
  IVar1 = _objc_msgSend((ID)self,PTR_s_arrayWithArray__102269ce8,IVar1);
  QWidget::find(param_1);
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220e4e0);
  if (lVar2 != 0) {
    _objc_msgSend(IVar1,PTR_s_addObject__1022692e8,&cf_AX_prl_pd_vmuuid);
  }
  return IVar1;
}

