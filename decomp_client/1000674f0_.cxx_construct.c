
/* Function Stack Size: 0x10 bytes */

ID CAlertDelegate::_cxx_construct(ID param_1,SEL param_2)

{
  long lVar1;
  
  lVar1 = m_task;
  *(undefined8 *)(param_1 + 8 + m_task) = 0;
  *(undefined8 *)(param_1 + lVar1) = 0;
  return param_1;
}

