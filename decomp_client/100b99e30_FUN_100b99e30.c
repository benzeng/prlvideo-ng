
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100b99e30(long param_1,int param_2,int param_3)

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
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar2;
  if (param_2 < 0x22) {
    puVar6 = (undefined *)0x0;
    FUN_100b9d470(0xfffffff4,0);
    goto LAB_100b99f8a;
  }
  if ((*(char *)(param_1 + 1) == 0x30) && (*(char *)(param_1 + 2) == '0')) {
LAB_100b99f4e:
    pcVar5 = PTR_s_ka_parallels_com_1022cf4f8;
    uVar3 = FUN_100b937f0();
  }
  else {
    puVar6 = &DAT_102314370;
    ___snprintf_chk(&DAT_102314370,0x50,0,0x50,"id-%c%c.kaid.swsoft.com",(int)*(char *)(param_1 + 1)
                    ,(int)*(char *)(param_1 + 2));
    if (param_3 == 0) goto LAB_100b99f8a;
    phVar4 = _gethostbyname(&DAT_102314370);
    puVar6 = PTR__h_errno_1021e18c0;
    if (phVar4 == (hostent *)0x0) {
      iVar1 = *(int *)PTR__h_errno_1021e18c0;
      if (iVar1 != 1) {
        if (iVar1 == 2) {
          _usleep(700000);
          phVar4 = _gethostbyname(&DAT_102314370);
          if (phVar4 != (hostent *)0x0) goto LAB_100b99f2e;
          iVar1 = *(int *)puVar6;
          if ((iVar1 != 1) && (iVar1 != 4)) {
            if (iVar1 == 2) {
              _usleep(700000);
              phVar4 = _gethostbyname(&DAT_102314370);
              if (phVar4 != (hostent *)0x0) goto LAB_100b99f2e;
              iVar1 = *(int *)puVar6;
              if ((iVar1 == 1) || (iVar1 == 4)) goto LAB_100b99f4e;
              if (iVar1 == 2) {
                _usleep(700000);
                puVar6 = &DAT_102314370;
                goto LAB_100b99f8a;
              }
            }
LAB_100b99fb8:
            local_48 = _DAT_1023143b0;
            uStack_40 = uRam00000001023143b8;
            local_58 = _DAT_1023143a0;
            uStack_50 = uRam00000001023143a8;
            local_68 = _DAT_102314390;
            uStack_60 = uRam0000000102314398;
            local_78 = _DAT_102314380;
            uStack_70 = uRam0000000102314388;
            local_88 = _DAT_102314370;
            uStack_84 = uRam0000000102314374;
            uStack_80 = uRam0000000102314378;
            uStack_7c = uRam000000010231437c;
            uVar3 = FUN_100b937f0();
            pcVar5 = (char *)&local_88;
            goto LAB_100b99f85;
          }
        }
        else if (iVar1 != 4) goto LAB_100b99fb8;
      }
      goto LAB_100b99f4e;
    }
LAB_100b99f2e:
    pcVar5 = phVar4->h_name;
    uVar3 = FUN_100b937f0();
  }
LAB_100b99f85:
  puVar6 = &DAT_102314370;
  ___snprintf_chk(&DAT_102314370,0x50,0,0x50,"%s:%d",pcVar5,uVar3);
LAB_100b99f8a:
  if (lVar2 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar6;
}

