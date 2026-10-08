
int FUN_100b714c0(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_f0 [4];
  int local_ec;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  *(undefined4 *)(param_1 + 0x128) = 0;
  FUN_100b9d6c0();
  iVar1 = FUN_100b92430(param_2,local_60);
  if (iVar1 == 0) {
    FUN_100df99c0("","License",0,"Activation failed - invalid activation code (%s).",param_2);
    iVar1 = -0xd;
    goto LAB_100b71636;
  }
  local_b8 = param_1;
  FUN_100b94d10(local_f0,0,0,FUN_100b73130);
  if (param_3 == 0) {
LAB_100b7154d:
    if (param_4 == 0) {
      iVar1 = FUN_100b95d00(param_2,local_f0,param_5);
    }
    else {
      iVar1 = FUN_100b95ce0();
    }
    if (iVar1 == 0) {
      do {
        if (local_ec == 6) break;
        if (*(int *)(param_1 + 0x128) != 0) goto LAB_100b71607;
        iVar1 = FUN_100b95e60(local_f0);
        _usleep(50000);
      } while (iVar1 == 0);
      if (*(int *)(param_1 + 0x128) == 0) {
        if (local_ec == 6) {
          if (2 < DAT_10230ffd0) {
            FUN_100df99c0("","License",3," * Loading license");
          }
          iVar1 = FUN_100b732f0(param_1,param_2,local_c8,local_c0,local_88);
          if ((iVar1 == 0) && (2 < DAT_10230ffd0)) {
            FUN_100df99c0("","License",3,"Activation completed successfully");
          }
        }
        else {
          iVar1 = FUN_100b73760();
        }
      }
      else {
LAB_100b71607:
        FUN_100df99c0("","License",0,"Activation operation cancelled.");
        iVar1 = -0x11;
      }
    }
    else {
      uVar2 = FUN_100b9d570();
      FUN_100df99c0("","License",0,"Activation failed - %s",uVar2);
    }
  }
  else {
    iVar1 = FUN_100b73220();
    if (iVar1 == 0) goto LAB_100b7154d;
  }
  FUN_100b94ef0(local_f0);
LAB_100b71636:
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

