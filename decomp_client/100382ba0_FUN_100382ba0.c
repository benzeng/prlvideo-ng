
QGraphicsDropShadowEffect * FUN_100382ba0(double param_1,QObject *param_2)

{
  QGraphicsDropShadowEffect *this;
  
  this = operator_new(0x10);
  QGraphicsDropShadowEffect::QGraphicsDropShadowEffect(this,param_2);
  QGraphicsDropShadowEffect::setColor((QColor *)this);
  QGraphicsDropShadowEffect::setOffset((QPointF *)this);
  QGraphicsDropShadowEffect::setBlurRadius(param_1);
  QGraphicsItem::setGraphicsEffect((QGraphicsEffect *)(param_2 + 0x10));
  return this;
}

