
void FUN_100384cb0(long *param_1,long param_2,char param_3)

{
  long lVar1;
  QVariant *pQVar2;
  double dVar3;
  QVariant local_e8;
  undefined8 local_d8;
  double local_d0;
  QVariant local_c8;
  double local_b8;
  double local_a8;
  undefined1 local_98 [16];
  double local_88;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar1 = param_1[0xb];
  if ((lVar1 != param_2) || (param_3 != '\0')) {
    param_1[0xb] = param_2;
    if (param_2 != 0) {
      QObject::blockSignals(SUB81(param_1[0xe],0));
      QAbstractAnimation::stop();
      QObject::blockSignals(SUB81(param_1[0xe],0));
      QGraphicsItem::sceneBoundingRect();
      dVar3 = local_58 * DAT_100e110f0 + local_68;
      dStack_70 = local_50 + dStack_60;
      local_78 = dVar3;
      (**(code **)(*param_1 + 0x88))(local_98,param_1);
      dVar3 = dVar3 - local_88 * DAT_100e110f0;
      local_78 = dVar3;
      if ((lVar1 == 0) || (param_3 == '\x01')) {
        QGraphicsItem::setPos((QPointF *)(param_1 + 2));
      }
      else {
        lVar1 = param_1[0xc];
        if (*(int *)(lVar1 + 0x38) == 3) {
          QGraphicsItem::sceneBoundingRect();
          dVar3 = DAT_100e110f0;
          *(double *)(lVar1 + 0x40) = local_a8 * DAT_100e110f0 + local_b8;
          lVar1 = param_1[0xc];
          dVar3 = dVar3 * local_58 + local_68;
          *(double *)(lVar1 + 0x48) = dVar3;
          if (*(int *)(lVar1 + 0x38) != 0) {
            *(undefined4 *)(lVar1 + 0x38) = 0;
            QObject::blockSignals(SUB81(*(undefined8 *)(lVar1 + 0x30),0));
            QAbstractAnimation::stop();
            QObject::blockSignals(SUB81(*(undefined8 *)(lVar1 + 0x30),0));
            local_38 = 0;
            uStack_30 = 0;
            local_48 = 0;
            uStack_40 = 0;
            QGraphicsItem::update((QRectF *)(lVar1 + 0x10));
          }
        }
        pQVar2 = (QVariant *)param_1[0xe];
        local_d8 = QGraphicsItem::pos();
        local_d0 = dVar3;
        QVariant::QVariant(&local_c8,(QPointF *)&local_d8);
        QVariantAnimation::setStartValue(pQVar2);
        QVariant::~QVariant(&local_c8);
        pQVar2 = (QVariant *)param_1[0xe];
        QVariant::QVariant(&local_e8,(QPointF *)&local_78);
        QVariantAnimation::setEndValue(pQVar2);
        QVariant::~QVariant(&local_e8);
        QAbstractAnimation::start(param_1[0xe],0);
      }
    }
    QGraphicsItem::setVisible((bool)((char)param_1 + '\x10'));
  }
  return;
}

