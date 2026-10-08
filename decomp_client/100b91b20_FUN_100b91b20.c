
void FUN_100b91b20(long param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x1d8) != 1) {
    lVar3 = FUN_100b98770(param_1 + 0x290,"product");
    if (lVar3 != 0) {
      pcVar1 = *(char **)(lVar3 + 0x18);
      iVar2 = _strcasecmp(pcVar1,PTR_s_Any_1022d0010);
      if (iVar2 != 0) {
        iVar2 = _strcasecmp(pcVar1,PTR_s_Virtuozzo_1022d0018);
        if (iVar2 != 0) {
          iVar2 = _strcasecmp(pcVar1,PTR_s_PS_1022d0038);
          if (iVar2 != 0) {
            iVar2 = _strcasecmp(pcVar1,PTR_s_PWE_1022d0048);
            if (iVar2 != 0) {
              iVar2 = _strcasecmp(pcVar1,PTR_s_PDE_1022d0050);
              if (iVar2 != 0) {
                iVar2 = _strcasecmp(pcVar1,PTR_s_PSBM_1022d0030);
                if (iVar2 != 0) {
                  iVar2 = _strcasecmp(pcVar1,PTR_s_PSBM_Mac_1022d0040);
                  if (iVar2 != 0) {
                    *(undefined4 *)(param_1 + 0x1d8) = 1;
                    *(undefined **)(param_1 + 0x1e0) = PTR_s_INVALID_1022cffa8;
                    _snprintf((char *)(param_1 + 0x1e8),0x7f,"Invalid product type");
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

