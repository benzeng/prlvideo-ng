
void FUN_1007c7d30(long param_1,int param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    if ((**(uint **)(param_4 + 8) & 0xfffffff7) != 0x30000001) {
      return;
    }
    if (*(int *)(param_1 + 0x28) == 1) {
      FUN_1007c7250(param_1,2);
    }
    if (*(int *)(param_1 + 0x2c) != 1) {
      return;
    }
    FUN_1007c74b0(param_1,2);
    return;
  case 1:
    lVar2 = **(long **)(param_4 + 8);
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    FUN_1007c6d90(param_1);
    break;
  case 2:
    lVar2 = **(long **)(param_4 + 8);
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    FUN_1007c7250(param_1,0);
    break;
  case 3:
    lVar2 = **(long **)(param_4 + 8);
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    if (((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) &&
       (*(long *)(param_1 + 0x48) != 0)) {
      iVar1 = FUN_10032c830();
      if (iVar1 == 0) {
        FUN_1007c74b0(param_1,0);
      }
      else if (iVar1 == 2) {
        FUN_1007c74b0(param_1,2);
      }
      else if (iVar1 == 1) {
        FUN_1007c74b0(param_1,1);
      }
    }
    break;
  case 4:
    lVar2 = **(long **)(param_4 + 8);
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    FUN_1007c74b0(param_1,0);
    break;
  default:
    goto switchD_1007c7d5b_default;
  }
  if (lVar2 != 0) {
    _PrlHandle_Free(lVar2);
    return;
  }
switchD_1007c7d5b_default:
  return;
}

