
ulong FUN_1008e1240(long param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 local_a08 [2512];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar8 = 0;
  local_38 = lVar1;
  if (param_1 != 0) {
    iVar2 = FUN_100885600(param_1);
    if (0 < iVar2) {
      do {
        puVar4 = (undefined8 *)FUN_100885620(param_1,uVar8);
        iVar2 = _strcmp((char *)*puVar4,param_2);
        if (iVar2 == 0) {
          uVar8 = puVar4[1];
          goto LAB_1008e1355;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar7;
        iVar2 = FUN_100885600(param_1);
      } while ((int)uVar7 < iVar2);
    }
    plVar5 = (long *)FUN_10081ddd0(0x10,"srp_vfy.c",0x132);
    if (plVar5 != (long *)0x0) {
      lVar6 = FUN_10087d050(param_2);
      *plVar5 = lVar6;
      if (lVar6 != 0) {
        uVar3 = FUN_1008e1d90(local_a08,param_2);
        lVar6 = FUN_10084bc20(local_a08,uVar3,0);
        plVar5[1] = lVar6;
        if (lVar6 == 0) {
          FUN_10081e1a0(*plVar5);
        }
        else {
          iVar2 = FUN_100884ec0(param_1,plVar5,0);
          if (0 < iVar2) {
            uVar8 = plVar5[1];
            goto LAB_1008e1355;
          }
          FUN_10081e1a0(*plVar5);
          FUN_10084b4b0(plVar5[1]);
        }
      }
      FUN_10081e1a0(plVar5);
    }
    uVar8 = 0;
  }
LAB_1008e1355:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

