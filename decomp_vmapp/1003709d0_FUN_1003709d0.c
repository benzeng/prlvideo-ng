
int FUN_1003709d0(undefined8 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined1 local_a8 [8];
  long local_a0;
  long local_90;
  undefined1 local_80 [8];
  long local_78;
  long local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar4 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar2 = (*DAT_1011c5ae8)();
    if (iVar2 != 0) {
      (*DAT_1011c56c8)(iVar2,param_2);
      (*DAT_1011c56c8)(iVar2,param_3);
      FUN_10038e870(local_80,local_48,0x10);
      FUN_10036bf10(local_80,param_4,param_5);
      if (local_78 == 0) {
        local_78 = local_68;
      }
      (*DAT_1011c56f8)(iVar2,0,local_78);
      if ((0x13f < *(uint *)(DAT_1011c8478 + 4)) && (param_6 != 0)) {
        iVar4 = 0;
        do {
          if ((param_6 & 1) != 0) {
            FUN_10038e870(local_a8,local_58,0x10);
            FUN_10038e8e0(local_a8,"ps_out%u",iVar4);
            lVar3 = local_a0;
            if (local_a0 == 0) {
              lVar3 = local_90;
            }
            (*DAT_1011c74c0)(iVar2,iVar4,lVar3);
            FUN_10038e8c0(local_a8);
            iVar4 = iVar4 + 1;
          }
          param_6 = param_6 >> 1;
        } while (param_6 != 0);
      }
      cVar1 = FUN_10036d740(iVar2);
      (*DAT_1011c5bb8)(iVar2,param_2);
      (*DAT_1011c5bb8)(iVar2,param_3);
      if (cVar1 == '\0') {
        (*DAT_1011c5b40)(iVar2);
        iVar2 = 0;
      }
      FUN_10038e8c0(local_80);
      iVar4 = iVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

