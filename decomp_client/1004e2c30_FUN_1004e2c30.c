
void FUN_1004e2c30(undefined8 *param_1)

{
  char *pcVar1;
  void *pvVar2;
  QFont local_38 [16];
  QVariant local_28;
  
  FUN_1004da2e0();
  *param_1 = &PTR_FUN_102219070;
  param_1[2] = &PTR_FUN_1022192c0;
  pvVar2 = operator_new(0x68);
  param_1[9] = pvVar2;
  FUN_1004e30b0(pvVar2,param_1);
  pcVar1 = *(char **)(param_1[9] + 0x50);
  FontUtils::getSmallFont(SUB81(local_38,0));
  QFont::operator_cast_to_QVariant((QFont *)&local_28);
  QObject::setProperty(pcVar1,(QVariant *)"font");
  QVariant::~QVariant(&local_28);
  QFont::~QFont(local_38);
  FUN_1004de5f0(param_1,*(undefined8 *)(param_1[9] + 0x28));
  return;
}

