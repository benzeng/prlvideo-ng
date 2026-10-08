
void FUN_1007a67b0(float param_1,float param_2,QObject *param_3,QPropertyAnimation *param_4,
                  QByteArray *param_5,undefined8 param_6,char *param_7,char param_8)

{
  long lVar1;
  long lVar2;
  double dVar3;
  int iVar4;
  QVariant *this;
  float fVar5;
  QVariant local_90;
  QVariant local_80;
  QVariant local_70;
  QVariant local_60;
  QVariant local_50;
  QVariant local_40;
  
  if (*param_7 != param_8) {
    *param_7 = param_8;
    if (param_4 == (QPropertyAnimation *)0x0) {
      QObject::property((char *)&local_40);
      QVariant::~QVariant(&local_40);
      if ((local_40.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
        lVar1 = *(long *)param_5;
        lVar2 = *(long *)(lVar1 + 0x10);
        fVar5 = param_1;
        if (param_8 == '\0') {
          fVar5 = param_2;
        }
        QVariant::QVariant(&local_50,fVar5);
        QObject::setProperty((char *)param_3,(QVariant *)(lVar1 + lVar2));
        QVariant::~QVariant(&local_50);
      }
      param_4 = operator_new(0x10);
      QPropertyAnimation::QPropertyAnimation(param_4,param_3,param_5,(QObject *)0x0);
      QVariantAnimation::setDuration((int)param_4);
    }
    iVar4 = QAbstractAnimation::state();
    if (iVar4 == 2) {
      QVariantAnimation::currentValue();
      dVar3 = (double)QVariant::toReal((bool *)&local_60);
      QVariant::~QVariant(&local_60);
      QAbstractAnimation::stop();
      QVariant::QVariant(&local_70,(float)dVar3);
      QVariantAnimation::setStartValue((QVariant *)param_4);
      this = &local_70;
    }
    else {
      fVar5 = param_1;
      if (param_8 == '\0') {
        fVar5 = param_2;
      }
      QVariant::QVariant(&local_80,fVar5);
      QVariantAnimation::setStartValue((QVariant *)param_4);
      this = &local_80;
    }
    QVariant::~QVariant(this);
    if (param_8 == '\0') {
      param_2 = param_1;
    }
    QVariant::QVariant(&local_90,param_2);
    QVariantAnimation::setEndValue((QVariant *)param_4);
    QVariant::~QVariant(&local_90);
    QAbstractAnimation::start(param_4,0);
  }
  return;
}

