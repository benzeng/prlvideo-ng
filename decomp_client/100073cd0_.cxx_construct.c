
/* Function Stack Size: 0x10 bytes */

ID MacPromoWindow::_cxx_construct(ID param_1,SEL param_2)

{
  long lVar1;
  
  *(undefined **)(param_1 + m_promoId) = PTR_shared_null_1021e1288;
  lVar1 = m_closeHandler;
  *(undefined4 *)(param_1 + 0x18 + m_closeHandler) = 0;
  *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
  *(undefined8 *)(param_1 + 8 + lVar1) = 0;
  *(undefined8 *)(param_1 + lVar1) = 0;
  *(undefined4 *)(param_1 + 0x28 + lVar1) = 0x80000000;
  *(undefined8 *)(param_1 + 0x20 + lVar1) = 0;
  *(undefined1 *)(param_1 + 0x30 + lVar1) = 1;
  return param_1;
}

