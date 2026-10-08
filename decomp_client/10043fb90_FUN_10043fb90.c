
void FUN_10043fb90(long param_1,int param_2)

{
  char *pcVar1;
  QVariant local_38;
  
  pcVar1 = *(char **)(*(long *)(param_1 + 0x60) + 0x38);
  QVariant::QVariant(&local_38,param_2);
  QObject::setProperty(pcVar1,(QVariant *)"RealValue");
  QVariant::~QVariant(&local_38);
  FUN_10043f910(param_1,param_1 + 0x70);
  FUN_10043e9e0(param_1,param_1 + 0x70);
  return;
}

