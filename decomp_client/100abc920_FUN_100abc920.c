
void FUN_100abc920(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = operator_new(8);
  lVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR_DesktopNotificationObserver_10226aae8,PTR_s_new_102269070);
  *plVar1 = lVar2;
  *(undefined8 *)(lVar2 + DesktopNotificationObserver::m_cppClient) = param_2;
  (*(code *)PTR__objc_msgSend_1021e1c68)(lVar2,PTR_s_attach_10226a520);
  (*(code *)PTR__objc_msgSend_1021e1c68)(*plVar1,PTR_s_detectInterfaceTheme_10226a510);
  *param_1 = plVar1;
  return;
}

