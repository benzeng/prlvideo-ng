
undefined4 FUN_10071b470(long param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined1 local_88 [80];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar2 = 0;
  ppuVar5 = (undefined **)0x0;
  if (param_3 != 5) {
    if (param_3 == 6) {
      ppuVar5 = &PTR_s_platform_10116db80;
    }
    else if ((param_3 == 3) && (param_4 == 0)) {
      ppuVar5 = &PTR_s_product_id_10116dcf0;
    }
    else if (*(int *)(param_1 + 4) == 1) {
      ppuVar5 = &PTR_s_NR_CPUS_10116df00;
    }
    else {
      ppuVar5 = &PTR_s_NR_CPUS_10116e090;
    }
  }
  pcVar4 = *ppuVar5;
  local_38 = lVar3;
  if (pcVar4 != (char *)0x0) {
    do {
      if ((*(uint *)((long)ppuVar5 + 0xc) & 1 << ((byte)param_3 & 0x1f)) != 0) {
        iVar1 = _strncmp(pcVar4,"ha_allowed",0xb);
        if (iVar1 != 0) {
          (*(code *)ppuVar5[4])(*(int *)(ppuVar5 + 1) + param_1,local_88,0x50);
          lVar3 = FUN_100722fa0(param_2 + 0x290,*ppuVar5,local_88);
          if (lVar3 == 0) {
            uVar2 = FUN_10071e690(0xfffffffe,0);
            lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
            goto LAB_10071b586;
          }
        }
      }
      pcVar4 = ppuVar5[5];
      ppuVar5 = ppuVar5 + 5;
    } while (pcVar4 != (char *)0x0);
    lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
    uVar2 = 0;
  }
LAB_10071b586:
  if (lVar3 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

