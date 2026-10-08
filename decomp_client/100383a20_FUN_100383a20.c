
void FUN_100383a20(long param_1,QColor *param_2,QColor *param_3)

{
  QPen *pQVar1;
  QPen local_38 [8];
  QPen local_30 [8];
  
  pQVar1 = *(QPen **)(param_1 + 0x40);
  QPen::QPen(local_30,param_2);
  CGraphicsTextLabel::setPen(pQVar1);
  QPen::~QPen(local_30);
  pQVar1 = *(QPen **)(param_1 + 0x48);
  QPen::QPen(local_38,param_3);
  CGraphicsTextLabel::setPen(pQVar1);
  QPen::~QPen(local_38);
  return;
}

