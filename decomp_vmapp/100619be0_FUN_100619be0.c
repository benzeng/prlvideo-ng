
undefined8 FUN_100619be0(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_48 [16];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar4 = 0x80000003;
  local_38 = lVar2;
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    FUN_1007d6cd0(local_48,param_1);
    uVar4 = 0x80042000;
    if ((int)DAT_1011cc9e8[2] < (int)DAT_1011cc9e8[3]) {
      lVar3 = 0;
      do {
        if (1 < *DAT_1011cc9e8) {
          FUN_10061a270(&DAT_1011cc9e8,DAT_1011cc9e8[1]);
        }
        iVar1 = FUN_1007ea6f0(local_48,*(undefined8 *)
                                        (DAT_1011cc9e8 + ((int)DAT_1011cc9e8[2] + lVar3) * 2 + 4));
        if (iVar1 == 0) {
          lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
          if (1 < *DAT_1011cc9e8) {
            FUN_10061a270(&DAT_1011cc9e8,DAT_1011cc9e8[1]);
          }
          uVar4 = (**(code **)(*(long *)(DAT_1011cc9e8 + ((int)DAT_1011cc9e8[2] + lVar3) * 2 + 4) +
                              0x18))();
          *param_2 = uVar4;
          uVar4 = 0;
          goto LAB_100619cd1;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < (long)(int)DAT_1011cc9e8[3] - (long)(int)DAT_1011cc9e8[2]);
      lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
  }
LAB_100619cd1:
  if (lVar2 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

