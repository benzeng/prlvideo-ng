
void FUN_1002ec470(int param_1,long *param_2,int param_3)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 local_978 [2368];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (0 < DAT_1011c568c) {
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] PAIRING(msg:%d  ctx:%p  param:%d)",param_1,param_2,
                  param_3);
  }
  lVar1 = *param_2;
  if (param_1 == 5) {
    if (param_3 == 0) {
      uVar2 = 0;
      lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    else {
      uVar2 = 0x18;
      lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (*(short *)(lVar1 + 0x17c) == 0) {
        uVar2 = 9;
      }
    }
    if (lVar3 == local_38) {
      FUN_1002ec640(lVar1,param_2 + 2,*(undefined2 *)((long)param_2 + 0x16),uVar2);
      return;
    }
  }
  else if (param_1 == 3) {
    lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (0 < DAT_1011c568c) {
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] PAIRING CONFIRM - TRUE");
    }
    if (lVar3 == local_38) {
      FUN_100252d00(lVar1 + 0x40,1);
      return;
    }
  }
  else {
    if (param_1 == 2) {
      if (0 < DAT_1011c568c) {
        FUN_1002da020(local_978,0x940,lVar1 + 0x168,*(undefined4 *)(lVar1 + 0x178));
        FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] PAIRING PIN:%s",local_978);
      }
      FUN_100252c60(lVar1 + 0x40,lVar1 + 0x168,*(undefined4 *)(lVar1 + 0x178));
    }
    if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

