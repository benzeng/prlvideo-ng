
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007a5760(undefined8 param_1,QPen *param_2)

{
  QColor local_50 [16];
  QPen local_40 [8];
  ulong local_38;
  ulong uStack_30;
  
  QPainter::save();
  local_38 = 0xf00000020;
  uStack_30 = 0x69000000b1;
  QColor::QColor(local_50,3);
  QPen::QPen(local_40,local_50);
  QPen::setJoinStyle(local_40,0);
  QPainter::setPen(param_2);
  QPainter::drawRects((QRect *)param_2,(int)&local_38);
  local_38 = local_38 + _DAT_100e29e00 & _DAT_100e15020 | _DAT_100e29df0 + local_38 & _DAT_100e15000
  ;
  uStack_30 = uStack_30 + _UNK_100e29e08 & _UNK_100e15028 |
              _UNK_100e29df8 + uStack_30 & _UNK_100e15008;
  QPainter::drawRects((QRect *)param_2,(int)&local_38);
  local_38 = local_38 + _DAT_100e29e00 & _DAT_100e15020 | _DAT_100e29df0 + local_38 & _DAT_100e15000
  ;
  uStack_30 = uStack_30 + _UNK_100e29e08 & _UNK_100e15028 |
              _UNK_100e29df8 + uStack_30 & _UNK_100e15008;
  QPainter::drawRects((QRect *)param_2,(int)&local_38);
  local_38 = local_38 + _DAT_100e29e00 & _DAT_100e15020 | _DAT_100e29df0 + local_38 & _DAT_100e15000
  ;
  uStack_30 = uStack_30 + _UNK_100e29e08 & _UNK_100e15028 |
              _UNK_100e29df8 + uStack_30 & _UNK_100e15008;
  QPainter::drawRects((QRect *)param_2,(int)&local_38);
  local_38 = local_38 + _DAT_100e29e00 & _DAT_100e15020 | _DAT_100e29df0 + local_38 & _DAT_100e15000
  ;
  uStack_30 = uStack_30 + _UNK_100e29e08 & _UNK_100e15028 |
              _UNK_100e29df8 + uStack_30 & _UNK_100e15008;
  QPainter::restore();
  QPen::~QPen(local_40);
  return;
}

