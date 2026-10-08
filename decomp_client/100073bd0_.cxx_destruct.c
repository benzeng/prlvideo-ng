
/* Function Stack Size: 0x10 bytes */

void MacPromoWindow::_cxx_destruct(ID param_1,SEL param_2)

{
  int *piVar1;
  void *pvVar2;
  long lVar3;
  QArrayData *pQVar4;
  
  lVar3 = m_closeHandler;
  ::QVariant::~QVariant((QVariant *)(m_closeHandler + 0x20 + param_1));
  piVar1 = *(int **)(param_1 + lVar3);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (pvVar2 = *(void **)(param_1 + lVar3), pvVar2 != (void *)0x0)) {
      operator_delete(pvVar2);
    }
  }
  lVar3 = m_promoId;
  pQVar4 = *(QArrayData **)(param_1 + m_promoId);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) {
        return;
      }
      pQVar4 = *(QArrayData **)(param_1 + lVar3);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
  return;
}

