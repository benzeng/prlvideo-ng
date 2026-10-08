
QGraphicsDropShadowEffect * FUN_1007e6850(undefined8 param_1,undefined8 param_2,QObject *param_3)

{
  QGraphicsDropShadowEffect *this;
  QColor local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  
  this = operator_new(0x10);
  QGraphicsDropShadowEffect::QGraphicsDropShadowEffect(this,param_3);
  QGraphicsDropShadowEffect::offset();
  local_28 = 0;
  local_20 = param_2;
  QGraphicsDropShadowEffect::setOffset((QPointF *)this);
  local_28 = QGraphicsDropShadowEffect::offset();
  local_20 = 0x3ff0000000000000;
  QGraphicsDropShadowEffect::setOffset((QPointF *)this);
  QColor::QColor(local_38,2);
  QGraphicsDropShadowEffect::setColor((QColor *)this);
  QGraphicsDropShadowEffect::setBlurRadius(0.0);
  return this;
}

