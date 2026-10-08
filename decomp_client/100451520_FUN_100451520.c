
void FUN_100451520(long param_1,int param_2)

{
  char *pcVar1;
  QVariant local_28;
  
  pcVar1 = *(char **)(*(long *)(param_1 + 0x38) + 0x30);
  QVariant::QVariant(&local_28,param_2);
  QObject::setProperty(pcVar1,(QVariant *)"selectedItem");
  QVariant::~QVariant(&local_28);
  return;
}

