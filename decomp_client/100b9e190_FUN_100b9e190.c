
undefined4 FUN_100b9e190(char *param_1,time_t *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  size_t sVar5;
  void *pvVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined1 local_f8 [32];
  time_t local_d8 [2];
  time_t local_c8 [2];
  time_t local_b8 [10];
  tm local_68;
  
  uVar3 = 0xfffffffd;
  if ((param_1 != (char *)0x0) && (param_2 != (time_t *)0x0)) {
    sVar4 = _strlen(param_1);
    puVar1 = PTR_DAT_1022cfce0;
    sVar5 = _strlen(PTR_DAT_1022cfce0);
    sVar5 = sVar4 + 2 + sVar5;
    pvVar6 = _malloc(sVar5);
    uVar3 = 0xfffffffe;
    if (pvVar6 != (void *)0x0) {
      uVar3 = 0;
      ___snprintf_chk(pvVar6,sVar5,0,0xffffffffffffffff,PTR_s__s__s_1022cfce8,puVar1,param_1);
      iVar2 = _stat_INODE64(pvVar6,local_f8);
      if (iVar2 == 0) {
        *param_2 = local_c8[0];
        _localtime_r(local_c8,&local_68);
        ___snprintf_chk(param_2 + 1,0x20,0,0xffffffffffffffff,"%02d/%02d/%04d %02d:%02d:%02d",
                        local_68.tm_mon + 1,local_68.tm_mday,local_68.tm_year + 0x76c,
                        local_68.tm_hour,local_68.tm_min,local_68.tm_sec);
        param_2[10] = local_b8[0];
        _localtime_r(local_b8,&local_68);
        ___snprintf_chk(param_2 + 0xb,0x20,0,0xffffffffffffffff,"%02d/%02d/%04d %02d:%02d:%02d",
                        local_68.tm_mon + 1,local_68.tm_mday,local_68.tm_year + 0x76c,
                        local_68.tm_hour,local_68.tm_min,local_68.tm_sec);
        param_2[5] = local_d8[0];
        _localtime_r(local_d8,&local_68);
        ___snprintf_chk(param_2 + 6,0x20,0,0xffffffffffffffff,"%02d/%02d/%04d %02d:%02d:%02d",
                        local_68.tm_mon + 1,local_68.tm_mday,local_68.tm_year + 0x76c,
                        local_68.tm_hour,local_68.tm_min,local_68.tm_sec);
      }
      else {
        piVar7 = ___error();
        if (*piVar7 == 2) {
          uVar8 = 0xfffffff9;
        }
        else {
          uVar8 = 0xfffffffc;
        }
        uVar3 = FUN_100b9d470(uVar8,0);
      }
      _free(pvVar6);
    }
  }
  return uVar3;
}

