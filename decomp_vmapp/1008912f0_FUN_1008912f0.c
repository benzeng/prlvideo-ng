
uint FUN_1008912f0(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_50 = 0;
  local_38 = lVar4;
  uVar6 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_1008944d0(param_1);
    if (0x10 < uVar1) {
      FUN_10081d560("e_rc2.c",0xb3,"l <= sizeof(iv)");
    }
    uVar2 = FUN_1008b0cc0(param_2,&local_50,local_48,uVar1);
    uVar6 = 0xffffffff;
    if (uVar2 == uVar1) {
      uVar5 = 0x80;
      if ((int)local_50 != 0x3a) {
        if ((int)local_50 == 0xa0) {
          uVar5 = 0x28;
        }
        else {
          if ((int)local_50 != 0x78) {
            FUN_100887ce0(6,0x6d,0x6c,"e_rc2.c",0xa4);
            lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
            goto LAB_100891438;
          }
          uVar5 = 0x40;
        }
      }
      lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (0 < (int)uVar1) {
        iVar3 = FUN_10088af10(param_1,0,0,0,local_48,0xffffffff);
        uVar6 = 0xffffffff;
        if (iVar3 == 0) goto LAB_100891438;
      }
      FUN_10088b3a0(param_1,3,uVar5,0);
      FUN_10088bd00(param_1,uVar5 >> 3);
      uVar6 = uVar1;
    }
    else {
      lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
  }
LAB_100891438:
  if (lVar4 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

