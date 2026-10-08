
/* Function Stack Size: 0x10 bytes */

char QNSViewReplacement::accessibilityIsIgnored(ID param_1,SEL param_2)

{
  char cVar1;
  long lVar2;
  ID IVar3;
  objc_super local_20;
  
  QWidget::find(param_1);
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220e4e0);
  if (lVar2 == 0) {
    if (PTR_s_accessibilityIsIgnoredOriginal_102269cd0 == (undefined *)0x0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: couldn\'t get accessibilityIsIgnored to call");
      local_20.super_class = (class_t *)PTR_QNSViewReplacement_10226abf0;
      local_20.receiver = param_1;
      IVar3 = _objc_msgSendSuper2(&local_20,PTR_s_accessibilityIsIgnored_102269cd8);
      cVar1 = (char)IVar3;
    }
    else {
      IVar3 = _objc_msgSend(param_1,PTR_s_accessibilityIsIgnoredOriginal_102269cd0);
      cVar1 = (char)IVar3;
    }
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}

