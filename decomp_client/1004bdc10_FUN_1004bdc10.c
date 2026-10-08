
void FUN_1004bdc10(undefined8 *param_1)

{
  QFont *pQVar1;
  QObject *pQVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  QFont local_40 [16];
  QFont local_30 [16];
  
  FUN_10044e1e0();
  *param_1 = &PTR_FUN_102216cc0;
  param_1[2] = &PTR_FUN_102216ec8;
  pvVar5 = operator_new(0x80);
  param_1[7] = pvVar5;
  FUN_1004be2a0(pvVar5,param_1);
  pQVar1 = *(QFont **)(param_1[7] + 0x20);
  FontUtils::getSmallFont(SUB81(local_30,0));
  QWidget::setFont(pQVar1);
  QFont::~QFont(local_30);
  pQVar1 = *(QFont **)(param_1[7] + 0x38);
  FontUtils::getSmallFont(SUB81(local_40,0));
  QWidget::setFont(pQVar1);
  QFont::~QFont(local_40);
  pQVar2 = *(QObject **)(param_1[7] + 0x60);
  iVar3 = FUN_10044b4d0(param_1);
  iVar4 = FUN_10044e480(param_1);
  WidgetUtils::Adjuster::adjustWidgetText(pQVar2,iVar3,iVar4);
  return;
}

