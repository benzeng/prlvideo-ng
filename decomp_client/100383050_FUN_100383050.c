
void FUN_100383050(CGraphicsFrame *param_1)

{
  QEasingCurve *pQVar1;
  QVariant *pQVar2;
  QParallelAnimationGroup *this;
  QPropertyAnimation *pQVar3;
  QVariant local_88;
  QVariant local_78;
  QEasingCurve local_68 [8];
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  QEasingCurve local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  CGraphicsFrame::CGraphicsFrame(param_1,(QGraphicsItem *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f06e0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f0848;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_1021f0980;
  this = operator_new(0x10);
  QParallelAnimationGroup::QParallelAnimationGroup(this,(QObject *)param_1);
  *(QParallelAnimationGroup **)(param_1 + 0x60) = this;
  pQVar3 = operator_new(0x10);
  QByteArray::QByteArray((QByteArray *)&local_30,"opacity",-1);
  QPropertyAnimation::QPropertyAnimation
            (pQVar3,(QObject *)param_1,(QByteArray *)&local_30,*(QObject **)(param_1 + 0x60));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100383108;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100383108:
  QEasingCurve::QEasingCurve(local_38,0);
  QVariantAnimation::setEasingCurve((QEasingCurve *)pQVar3);
  QEasingCurve::~QEasingCurve(local_38);
  QVariantAnimation::setDuration((int)pQVar3);
  QVariant::QVariant(&local_48,DAT_100e11050);
  QVariantAnimation::setStartValue((QVariant *)pQVar3);
  QVariant::~QVariant(&local_48);
  QVariant::QVariant(&local_58,0.0);
  QVariantAnimation::setEndValue((QVariant *)pQVar3);
  QVariant::~QVariant(&local_58);
  QAnimationGroup::addAnimation(*(QAbstractAnimation **)(param_1 + 0x60));
  pQVar3 = operator_new(0x10);
  QByteArray::QByteArray((QByteArray *)&local_60,"opacity",-1);
  QPropertyAnimation::QPropertyAnimation
            (pQVar3,(QObject *)param_1,(QByteArray *)&local_60,(QObject *)param_1);
  *(QPropertyAnimation **)(param_1 + 0x68) = pQVar3;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003831f1;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1003831f1:
  pQVar1 = *(QEasingCurve **)(param_1 + 0x68);
  QEasingCurve::QEasingCurve(local_68,0);
  QVariantAnimation::setEasingCurve(pQVar1);
  QEasingCurve::~QEasingCurve(local_68);
  QVariantAnimation::setDuration((int)*(undefined8 *)(param_1 + 0x68));
  pQVar2 = *(QVariant **)(param_1 + 0x68);
  QVariant::QVariant(&local_78,0.0);
  QVariantAnimation::setStartValue(pQVar2);
  QVariant::~QVariant(&local_78);
  pQVar2 = *(QVariant **)(param_1 + 0x68);
  QVariant::QVariant(&local_88,DAT_100e11050);
  QVariantAnimation::setEndValue(pQVar2);
  QVariant::~QVariant(&local_88);
  return;
}

