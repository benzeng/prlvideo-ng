
undefined8 FUN_100b9f470(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _strcasecmp(param_2,PTR_s_Any_1022d0010);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = _strcasecmp(param_2,PTR_s_Virtuozzo_1022d0018);
    iVar2 = 1;
    if (iVar1 != 0) {
      iVar1 = _strcasecmp(param_2,PTR_s_VMware_1022d0020);
      iVar2 = 2;
      if (iVar1 != 0) {
        iVar1 = _strcasecmp(param_2,PTR_s_XEN_1022d0028);
        iVar2 = 3;
        if (iVar1 != 0) {
          iVar1 = _strcasecmp(param_2,PTR_s_PSBM_1022d0030);
          iVar2 = 4;
          if (iVar1 != 0) {
            iVar1 = _strcasecmp(param_2,PTR_s_PS_1022d0038);
            iVar2 = 5;
            if (iVar1 != 0) {
              iVar1 = _strcasecmp(param_2,PTR_s_PSBM_Mac_1022d0040);
              iVar2 = 6;
              if (iVar1 != 0) {
                iVar1 = _strcasecmp(param_2,PTR_s_PWE_1022d0048);
                iVar2 = 7;
                if (iVar1 != 0) {
                  iVar1 = _strcasecmp(param_2,PTR_s_PDE_1022d0050);
                  iVar2 = 8;
                  if (iVar1 != 0) {
                    iVar2 = _strcasecmp(param_2,PTR_s_PCSS_1022d0058);
                    iVar2 = (uint)(iVar2 == 0) * 8 + 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *param_1 = iVar2;
  return 0;
}

