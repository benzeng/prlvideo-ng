
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100284e10(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  ulong uStack_30;
  long local_28;
  
  lVar2 = DAT_1011c3ca0;
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = _DAT_100b36260;
  uStack_30 = _UNK_100b36268;
  local_48 = _DAT_100b36250;
  uStack_40 = _UNK_100b36258;
  local_58 = _DAT_100b36240;
  uStack_54 = _UNK_100b36244;
  uStack_50 = _UNK_100b36248;
  uStack_4c = _UNK_100b3624c;
  local_28 = lVar1;
  iVar3 = FUN_1000ed5c0(&local_58,0x10);
  bVar4 = true;
  if (iVar3 != 0) {
    iVar3 = FUN_1000ed5c0(&DAT_1011c3cb0,uStack_50);
    if (iVar3 != 0) {
      iVar3 = FUN_1000ed5c0(&local_48,0x10);
      if (iVar3 != 0) {
        iVar3 = FUN_1000ed5c0(lVar2,uStack_40 & 0xffffffff);
        if (iVar3 != 0) {
          iVar3 = FUN_1000ed5c0(&local_38,0x10);
          if (iVar3 != 0) {
            iVar3 = FUN_1000ed5c0(lVar2 + 0x1020,uStack_30 & 0xffffffff);
            bVar4 = iVar3 == 0;
          }
        }
      }
    }
  }
  if (lVar1 == local_28) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

