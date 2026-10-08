
void FUN_100142910(QPalette *param_1,undefined8 param_2)

{
  double dVar1;
  int iVar2;
  QHBoxLayout *this;
  QPalette *pQVar3;
  undefined8 uVar4;
  double *pdVar5;
  QBrush local_68 [8];
  QBrush local_60 [8];
  undefined1 local_58 [16];
  QPalette local_48 [16];
  QArrayData *local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  QWidget::QWidget((QWidget *)param_1,param_2,0);
  *(undefined ***)param_1 = &PTR_FUN_1021fbc68;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fbe18;
  this = operator_new(0x20);
  QHBoxLayout::QHBoxLayout(this,(QWidget *)param_1);
  *(QHBoxLayout **)(param_1 + 0x30) = this;
  *(undefined **)(param_1 + 0x38) = PTR_shared_null_1021e15d0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x44] = (QPalette)0x0;
  local_38 = (QArrayData *)QString::fromAscii_helper("CColorSelector",0xe);
  QObject::setObjectName((QString *)param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001429c4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001429c4:
  QWidget::setMinimumWidth((int)param_1);
  QBoxLayout::setSpacing((int)*(undefined8 *)(param_1 + 0x30));
  QLayout::setContentsMargins((int)*(undefined8 *)(param_1 + 0x30),0x14,7,5);
  FUN_100142c90(param_1,0);
  QBoxLayout::addSpacing((int)*(undefined8 *)(param_1 + 0x30));
  FUN_100142c90(param_1,0xfa645a);
  FUN_100142c90(param_1,0xf6aa44);
  FUN_100142c90(param_1,0xefdb47);
  FUN_100142c90(param_1,0xb4d747);
  FUN_100142c90(param_1,0x5aa3ff);
  FUN_100142c90(param_1,0xc08ed8);
  FUN_100142c90(param_1,0x808080);
  QBoxLayout::addStretch((int)*(undefined8 *)(param_1 + 0x30));
  pQVar3 = (QPalette *)QWidget::palette();
  QPalette::QPalette(local_48,pQVar3);
  _HIThemeBrushCreateCGColor(0x36,&local_30);
  QColor::invalidate();
  uVar4 = _CGColorGetColorSpace(local_30);
  iVar2 = _CGColorSpaceGetModel(uVar4);
  pdVar5 = (double *)_CGColorGetComponents(local_30);
  if (iVar2 == 0) {
    dVar1 = *pdVar5;
    QColor::setRgbF(dVar1,dVar1,dVar1,pdVar5[1]);
  }
  else if (iVar2 == 2) {
    QColor::setCmykF(*pdVar5,pdVar5[1],pdVar5[2],pdVar5[3],DAT_100e11050);
  }
  else if (iVar2 == 1) {
    QColor::setRgbF(*pdVar5,pdVar5[1],pdVar5[2],pdVar5[3]);
  }
  _CGColorRelease(local_30);
  QBrush::QBrush(local_60,local_58,1);
  QPalette::setBrush(local_48,0,10,local_60);
  QBrush::~QBrush(local_60);
  QBrush::QBrush(local_68,local_58,1);
  QPalette::setBrush(local_48,0,1,local_68);
  QBrush::~QBrush(local_68);
  QWidget::setPalette(param_1);
  QWidget::setAutoFillBackground(SUB81(param_1,0));
  QPalette::~QPalette(local_48);
  return;
}

