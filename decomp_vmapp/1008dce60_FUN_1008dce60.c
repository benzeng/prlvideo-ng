
undefined8 FUN_1008dce60(undefined8 *param_1,undefined8 param_2)

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
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar2 = FUN_100821ab0(*param_1);
  if (iVar2 == 0x16) {
    uVar8 = 0;
    if (param_1[1] != 0) {
      uVar8 = *(undefined8 *)(param_1[1] + 0x28);
    }
  }
  else {
    FUN_100887ce0(0x2e,0x85,0x6c,"cms_sd.c",0x47);
    uVar8 = 0;
  }
  iVar2 = FUN_100885600(uVar8);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      lVar5 = FUN_100885620(uVar8,iVar2);
      FUN_10088a650(local_a8);
      if (*(long *)(lVar5 + 0x40) == 0) {
        FUN_100887ce0(0x2e,0x96,0x85,"cms_sd.c",0x23c);
        bVar1 = false;
      }
      else {
        iVar3 = FUN_1008dafc0(local_a8,param_2,*(undefined8 *)(lVar5 + 0x10));
        bVar1 = false;
        if (iVar3 != 0) {
          iVar3 = FUN_1008db780(lVar5);
          if (iVar3 < 0) {
            uVar4 = FUN_100891d80(*(undefined8 *)(lVar5 + 0x40));
            lVar6 = FUN_10081ddd0(uVar4,"cms_sd.c",0x25a);
            if (lVar6 == 0) {
              FUN_100887ce0(0x2e,0x96,0x41,"cms_sd.c",0x25c);
              bVar1 = false;
            }
            else {
              iVar3 = FUN_100891930(local_a8,lVar6,&local_b0,*(undefined8 *)(lVar5 + 0x40));
              if (iVar3 != 0) {
                FUN_1008afdb0(*(undefined8 *)(lVar5 + 0x28),lVar6,local_b0);
                goto LAB_1008dd078;
              }
              FUN_100887ce0(0x2e,0x96,0x8b,"cms_sd.c",0x260);
              FUN_10081e1a0(lVar6);
            }
          }
          else {
            uVar7 = **(undefined8 **)(param_1[1] + 0x10);
            iVar3 = FUN_10088a9c0(local_a8,local_78,&local_ac);
            if ((((iVar3 != 0) &&
                 (iVar3 = FUN_1008db810(lVar5,0x33,4,local_78,local_ac), iVar3 != 0)) &&
                (iVar3 = FUN_1008db810(lVar5,0x32,6,uVar7,0xffffffff), 0 < iVar3)) &&
               (iVar3 = FUN_1008dc750(lVar5), iVar3 != 0)) {
LAB_1008dd078:
              bVar1 = true;
            }
          }
        }
        FUN_10088aa50(local_a8);
      }
      uVar7 = 0;
      if (!bVar1) goto LAB_1008dd12d;
      iVar2 = iVar2 + 1;
      iVar3 = FUN_100885600(uVar8);
    } while (iVar2 < iVar3);
  }
  *(undefined4 *)(*(long *)(param_1[1] + 0x10) + 0x10) = 0;
  uVar7 = 1;
LAB_1008dd12d:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

