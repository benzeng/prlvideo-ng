
/* Function Stack Size: 0x18 bytes */

ID QNSViewReplacement::accessibilityAttributeValue_(ID param_1,SEL param_2,ID param_3)

{
  undefined *self;
  ID IVar1;
  long lVar2;
  objc_super local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  IVar1 = _objc_msgSend(param_3,PTR_s_isEqualToString__102268f68,&cf_AX_prl_pd_vmuuid);
  if ((char)IVar1 != '\0') {
    QWidget::find(param_1);
    lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220e4e0);
    self = PTR__OBJC_CLASS___NSString_10226a7c8;
    if (lVar2 != 0) {
      FUN_100378250(&local_28,lVar2);
      IVar1 = _objc_msgSend((ID)self,PTR_s_stringWithQString__102268d00,&local_28);
      if (*(int *)local_28 == -1) {
        return IVar1;
      }
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return IVar1;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_28,2,8);
      return IVar1;
    }
  }
  if (PTR_s_accessibilityAttributeValueOrigi_102269cf0 == (undefined *)0x0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: couldn\'t get accessibilityAttributeValue: to call");
    local_38.super_class = (class_t *)PTR_QNSViewReplacement_10226abf0;
    local_38.receiver = param_1;
    IVar1 = _objc_msgSendSuper2(&local_38,PTR_s_accessibilityAttributeValue__102269cf8,param_3);
    return IVar1;
  }
  IVar1 = _objc_msgSend(param_1,PTR_s_accessibilityAttributeValueOrigi_102269cf0,param_3);
  return IVar1;
}

