
void FUN_10061d310(QString *param_1)

{
  QArrayData *pQVar1;
  int iVar2;
  
  CProgressIndicator::setType(param_1,0);
  iVar2 = (int)param_1;
  CProgressIndicator::setIndicatorSize(iVar2);
  CProgressIndicator::setTimeInterval(iVar2);
  CProgressIndicator::setAnimationCentered(SUB81(param_1,0));
  pQVar1 = (QArrayData *)QString::fromAscii_helper("",0);
  CProgressIndicator::setText(param_1);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10061d398;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10061d398:
  QWidget::setFixedWidth(iVar2);
  CProgressIndicator::hide();
  return;
}

