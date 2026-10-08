
int FUN_100d42020(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_30 = 0;
  iVar2 = _PrlVmCfg_GetName(*param_1,0,&local_30);
  if ((iVar2 == -0x7ffffffa) || (iVar2 == 0)) {
    QByteArray::resize((int)param_2);
    uVar1 = *param_1;
    puVar4 = (uint *)*param_2;
    if ((1 < *puVar4) || (*(long *)(puVar4 + 4) != 0x18)) {
      QByteArray::reallocData(param_2,puVar4[1] + 1,puVar4[2] >> 0x1f);
      puVar4 = (uint *)*param_2;
    }
    iVar2 = _PrlVmCfg_GetName(uVar1,(long)puVar4 + *(long *)(puVar4 + 4),&local_30);
  }
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Error : Failed to get VM name, error 0x%X",iVar2);
  }
  else {
    local_2c = 0;
    iVar3 = _PrlVmCfg_GetHomePath(*param_1,0,&local_2c);
    if ((iVar3 == -0x7ffffffa) || (iVar3 == 0)) {
      QByteArray::resize((int)param_3);
      uVar1 = *param_1;
      puVar4 = (uint *)*param_3;
      if ((1 < *puVar4) || (*(long *)(puVar4 + 4) != 0x18)) {
        QByteArray::reallocData(param_3,puVar4[1] + 1,puVar4[2] >> 0x1f);
        puVar4 = (uint *)*param_3;
      }
      iVar3 = _PrlVmCfg_GetHomePath(uVar1,(long)puVar4 + *(long *)(puVar4 + 4),&local_2c);
    }
    iVar2 = 0;
    if (iVar3 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,"Error : Failed to get VM home path, error 0x%X",iVar3);
      iVar2 = iVar3;
    }
  }
  return iVar2;
}

