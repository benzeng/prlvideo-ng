
undefined8 FUN_100720690(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _strcasecmp(param_2,PTR_s_Any_10116e640);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = _strcasecmp(param_2,PTR_s_Virtuozzo_10116e648);
    iVar2 = 1;
    if (iVar1 != 0) {
      iVar1 = _strcasecmp(param_2,PTR_s_VMware_10116e650);
      iVar2 = 2;
      if (iVar1 != 0) {
        iVar1 = _strcasecmp(param_2,PTR_s_XEN_10116e658);
        iVar2 = 3;
        if (iVar1 != 0) {
          iVar1 = _strcasecmp(param_2,PTR_s_PSBM_10116e660);
          iVar2 = 4;
          if (iVar1 != 0) {
            iVar1 = _strcasecmp(param_2,PTR_s_PS_10116e668);
            iVar2 = 5;
            if (iVar1 != 0) {
              iVar1 = _strcasecmp(param_2,PTR_s_PSBM_Mac_10116e670);
              iVar2 = 6;
              if (iVar1 != 0) {
                iVar1 = _strcasecmp(param_2,PTR_s_PWE_10116e678);
                iVar2 = 7;
                if (iVar1 != 0) {
                  iVar1 = _strcasecmp(param_2,PTR_s_PDE_10116e680);
                  iVar2 = 8;
                  if (iVar1 != 0) {
                    iVar2 = _strcasecmp(param_2,PTR_s_PCSS_10116e688);
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

