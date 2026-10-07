
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10071b050(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  hostent *phVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar2;
  if (param_2 < 0x22) {
    puVar6 = (undefined *)0x0;
    FUN_10071e690(0xfffffff4,0);
    goto LAB_10071b1aa;
  }
  if ((*(char *)(param_1 + 1) == 0x30) && (*(char *)(param_1 + 2) == '0')) {
LAB_10071b16e:
    pcVar5 = PTR_s_ka_parallels_com_10116db28;
    uVar3 = FUN_100714a10();
  }
  else {
    puVar6 = &DAT_1011bdbe0;
    ___snprintf_chk(&DAT_1011bdbe0,0x50,0,0x50,"id-%c%c.kaid.swsoft.com",(int)*(char *)(param_1 + 1)
                    ,(int)*(char *)(param_1 + 2));
    if (param_3 == 0) goto LAB_10071b1aa;
    phVar4 = _gethostbyname(&DAT_1011bdbe0);
    puVar6 = PTR__h_errno_100ba2398;
    if (phVar4 == (hostent *)0x0) {
      iVar1 = *(int *)PTR__h_errno_100ba2398;
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          _usleep(700000);
          phVar4 = _gethostbyname(&DAT_1011bdbe0);
          if (phVar4 != (hostent *)0x0) goto LAB_10071b14e;
          iVar1 = *(int *)puVar6;
          if ((iVar1 != 1) && (iVar1 != 4)) {
            if (iVar1 == 2) {
              _usleep(700000);
              phVar4 = _gethostbyname(&DAT_1011bdbe0);
              if (phVar4 != (hostent *)0x0) goto LAB_10071b14e;
              iVar1 = *(int *)puVar6;
              if ((iVar1 == 1) || (iVar1 == 4)) goto LAB_10071b16e;
              if (iVar1 == 2) {
                _usleep(700000);
                puVar6 = &DAT_1011bdbe0;
                goto LAB_10071b1aa;
              }
            }
LAB_10071b1d8:
            local_48 = _DAT_1011bdc20;
            uStack_40 = uRam00000001011bdc28;
            local_58 = _DAT_1011bdc10;
            uStack_50 = uRam00000001011bdc18;
            local_68 = _DAT_1011bdc00;
            uStack_60 = uRam00000001011bdc08;
            local_78 = _DAT_1011bdbf0;
            uStack_70 = uRam00000001011bdbf8;
            local_88 = _DAT_1011bdbe0;
            uStack_84 = uRam00000001011bdbe4;
            uStack_80 = uRam00000001011bdbe8;
            uStack_7c = uRam00000001011bdbec;
            uVar3 = FUN_100714a10();
            pcVar5 = (char *)&local_88;
            goto LAB_10071b1a5;
          }
        }
        else if (iVar1 != 4) goto LAB_10071b1d8;
      }
      goto LAB_10071b16e;
    }
LAB_10071b14e:
    pcVar5 = phVar4->h_name;
    uVar3 = FUN_100714a10();
  }
LAB_10071b1a5:
  puVar6 = &DAT_1011bdbe0;
  ___snprintf_chk(&DAT_1011bdbe0,0x50,0,0x50,"%s:%d",pcVar5,uVar3);
LAB_10071b1aa:
  if (lVar2 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar6;
}

