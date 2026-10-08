
byte FUN_10072c4d0(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = *param_2;
  local_38 = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  bVar2 = FUN_10072c6f0(&local_38,PTR__PrlPluginInfo_GetVendor_1021e1220,
                        *(long *)(param_1 + 0x10) + 0x10);
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  lVar1 = *param_2;
  local_40 = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  bVar3 = FUN_10072c6f0(&local_40,PTR__PrlPluginInfo_GetCopyright_1021e1200,
                        *(long *)(param_1 + 0x10) + 0x18);
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  lVar1 = *param_2;
  local_48 = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  bVar4 = FUN_10072c6f0(&local_48,PTR__PrlPluginInfo_GetShortDescription_1021e1218,
                        *(long *)(param_1 + 0x10) + 0x20);
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  lVar1 = *param_2;
  local_50 = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  bVar5 = FUN_10072c6f0(&local_50,PTR__PrlPluginInfo_GetLongDescription_1021e1210,
                        *(long *)(param_1 + 0x10) + 0x28);
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  lVar1 = *param_2;
  local_58 = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  bVar6 = FUN_10072c6f0(&local_58,PTR__PrlPluginInfo_GetVersion_1021e1228,
                        *(long *)(param_1 + 0x10) + 8);
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  lVar1 = *param_2;
  local_60 = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  bVar7 = FUN_10072c6f0(&local_60,PTR__PrlPluginInfo_GetId_1021e1208,*(undefined8 *)(param_1 + 0x10)
                       );
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  return bVar2 & bVar3 & bVar4 & bVar5 & bVar6 & bVar7;
}

