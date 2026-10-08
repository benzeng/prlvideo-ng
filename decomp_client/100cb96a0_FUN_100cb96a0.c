
undefined8 FUN_100cb96a0(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [48];
  undefined1 local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  iVar2 = FUN_100bf7220(*param_1);
  if (iVar2 == 0x16) {
    uVar8 = 0;
    if (param_1[1] != 0) {
      uVar8 = *(undefined8 *)(param_1[1] + 0x28);
    }
  }
  else {
    FUN_100c62ee0(0x2e,0x85,0x6c,"cms_sd.c",0x47);
    uVar8 = 0;
  }
  iVar2 = FUN_100c60800(uVar8);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      lVar5 = FUN_100c60820(uVar8,iVar2);
      FUN_100c65850(local_a8);
      if (*(long *)(lVar5 + 0x40) == 0) {
        FUN_100c62ee0(0x2e,0x96,0x85,"cms_sd.c",0x23c);
        bVar1 = false;
      }
      else {
        iVar3 = FUN_100cb7800(local_a8,param_2,*(undefined8 *)(lVar5 + 0x10));
        bVar1 = false;
        if (iVar3 != 0) {
          iVar3 = FUN_100cb7fc0(lVar5);
          if (iVar3 < 0) {
            uVar4 = FUN_100c6d160(*(undefined8 *)(lVar5 + 0x40));
            lVar6 = FUN_100bf3540(uVar4,"cms_sd.c",0x25a);
            if (lVar6 == 0) {
              FUN_100c62ee0(0x2e,0x96,0x41,"cms_sd.c",0x25c);
              bVar1 = false;
            }
            else {
              iVar3 = FUN_100c6cd10(local_a8,lVar6,&local_b0,*(undefined8 *)(lVar5 + 0x40));
              if (iVar3 != 0) {
                FUN_100c8b330(*(undefined8 *)(lVar5 + 0x28),lVar6,local_b0);
                goto LAB_100cb98b8;
              }
              FUN_100c62ee0(0x2e,0x96,0x8b,"cms_sd.c",0x260);
              FUN_100bf3910(lVar6);
            }
          }
          else {
            uVar7 = **(undefined8 **)(param_1[1] + 0x10);
            iVar3 = FUN_100c65bc0(local_a8,local_78,&local_ac);
            if ((((iVar3 != 0) &&
                 (iVar3 = FUN_100cb8050(lVar5,0x33,4,local_78,local_ac), iVar3 != 0)) &&
                (iVar3 = FUN_100cb8050(lVar5,0x32,6,uVar7,0xffffffff), 0 < iVar3)) &&
               (iVar3 = FUN_100cb8f90(lVar5), iVar3 != 0)) {
LAB_100cb98b8:
              bVar1 = true;
            }
          }
        }
        FUN_100c65c50(local_a8);
      }
      uVar7 = 0;
      if (!bVar1) goto LAB_100cb996d;
      iVar2 = iVar2 + 1;
      iVar3 = FUN_100c60800(uVar8);
    } while (iVar2 < iVar3);
  }
  *(undefined4 *)(*(long *)(param_1[1] + 0x10) + 0x10) = 0;
  uVar7 = 1;
LAB_100cb996d:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

