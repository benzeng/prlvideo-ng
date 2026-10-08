
void FUN_10078d8b0(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  QVariant local_40;
  undefined1 local_30 [8];
  long local_28;
  
  local_28 = *param_2;
  if (local_28 != 0) {
    _PrlHandle_AddRef();
  }
  cVar1 = SdkUtils::checkHandleType(&local_28,0x10000020);
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  if (cVar1 != '\0') {
    iVar2 = _PrlStat_GetUsageRamSize(*param_2,local_30);
    if (-1 < iVar2) {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x18);
      }
      QVariant::QVariant(&local_40,5,local_30,0);
      FUN_1007864e0(uVar3,&local_40);
      QVariant::~QVariant(&local_40);
    }
  }
  return;
}

