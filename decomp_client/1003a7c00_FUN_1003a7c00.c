
void FUN_1003a7c00(long param_1)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  QVariant local_30;
  
  lVar2 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  if (lVar2 != 0) {
    pcVar3 = (char *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
    puVar1 = PTR_s_DynProp_CompactPerformed_102270dd0;
    QVariant::QVariant(&local_30,true);
    QObject::setProperty(pcVar3,(QVariant *)puVar1);
    QVariant::~QVariant(&local_30);
  }
  return;
}

