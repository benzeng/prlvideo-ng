
/* Function Stack Size: 0x28 bytes */

ID SSBaseDelegate::sharingService_transitionImageForShareItem_contentRect_
             (ID param_1,SEL param_2,ID param_3,ID param_4,CGRect *param_5)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  
  lVar2 = m_screenshot;
  puVar1 = PTR__objc_msgSend_1021e1c68;
  IVar3 = 0;
  if (*(long *)(param_1 + m_screenshot) != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(*(long *)(param_1 + m_screenshot),PTR_s_retain_102269a88)
    ;
    (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar2),PTR_s_autorelease_102269a10);
    IVar3 = *(ID *)(param_1 + m_screenshot);
  }
  return IVar3;
}

