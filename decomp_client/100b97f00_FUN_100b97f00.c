
undefined8 FUN_100b97f00(long *param_1,char *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  size_t sVar7;
  long *plVar8;
  undefined8 uVar9;
  
  pvVar3 = _malloc((long)(param_3 + 1));
  if (pvVar3 != (void *)0x0) {
    pcVar4 = _malloc((long)(param_3 + 1));
    if (pcVar4 != (char *)0x0) {
      _strncpy(pcVar4,param_2,(long)param_3);
      pcVar4[param_3] = '\0';
      pcVar5 = _strstr(pcVar4,"Start of license");
      if (((pcVar5 != (char *)0x0) && (pcVar5 = _strchr(pcVar5,10), pcVar5 != (char *)0x0)) &&
         (pcVar6 = _strstr(pcVar5,"End of license"), pcVar6 != (char *)0x0)) {
        *pcVar6 = '\0';
        sVar7 = _strlen(pcVar5 + 1);
        iVar1 = FUN_100ba6900(pcVar5 + 1,sVar7 & 0xffffffff,pvVar3);
        iVar2 = FUN_100ba6010(pvVar3,iVar1);
        if (-1 < iVar2) {
          iVar1 = FUN_100ba27f0(param_1,(long)pvVar3 + 0x101,iVar1 + -0x101,&PTR_s_OWNER_1022cfd00,0
                                ,param_4);
          _free(pvVar3);
          _free(pcVar4);
          plVar8 = param_1;
          if (-1 < iVar1) {
            do {
              plVar8 = (long *)*plVar8;
              if (plVar8 == param_1) {
                return 0;
              }
              iVar1 = FUN_100b98140(plVar8);
            } while (iVar1 == 0);
            plVar8 = (long *)*param_1;
            while (plVar8 != param_1) {
              plVar8 = (long *)*plVar8;
              FUN_100ba1ea0();
            }
            param_1[1] = (long)param_1;
            *param_1 = (long)param_1;
            uVar9 = 0xfffffff4;
            goto LAB_100b98092;
          }
          plVar8 = (long *)*param_1;
          while (plVar8 != param_1) {
            plVar8 = (long *)*plVar8;
            FUN_100ba1ea0();
          }
          param_1[1] = (long)param_1;
          *param_1 = (long)param_1;
          if (iVar1 != -4) {
            uVar9 = 0xfffffff4;
            goto LAB_100b98092;
          }
          goto LAB_100b9808d;
        }
      }
      _free(pvVar3);
      _free(pcVar4);
      uVar9 = 0xfffffff4;
      goto LAB_100b98092;
    }
    _free(pvVar3);
  }
LAB_100b9808d:
  uVar9 = 0xfffffffe;
LAB_100b98092:
  uVar9 = FUN_100b9d470(uVar9,0);
  return uVar9;
}

