
bool FUN_100284ef0(void)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_50 [4];
  uint local_4c;
  undefined4 local_48;
  undefined1 local_3c [4];
  undefined *local_38;
  long local_30;
  long local_28;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = &DAT_1011c3cb0;
  local_30 = DAT_1011c3ca0;
  local_28 = DAT_1011c3ca0 + 0x1020;
  local_18 = lVar1;
  iVar2 = FUN_1000ec3b0(local_50,0x10,local_3c,0);
  if (((((iVar2 == 0) || (3 < (ulong)local_4c)) ||
       (iVar2 = FUN_1000ec3b0((&local_38)[local_4c],local_48,local_3c,0), iVar2 == 0)) ||
      ((iVar2 = FUN_1000ec3b0(local_50,0x10,local_3c,0), iVar2 == 0 || (3 < (ulong)local_4c)))) ||
     ((iVar2 = FUN_1000ec3b0((&local_38)[local_4c],local_48,local_3c,0), iVar2 == 0 ||
      ((iVar2 = FUN_1000ec3b0(local_50,0x10,local_3c,0), iVar2 == 0 || (3 < (ulong)local_4c)))))) {
    if (lVar1 != local_18) {
LAB_100284fed:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    bVar3 = true;
  }
  else {
    iVar2 = FUN_1000ec3b0((&local_38)[local_4c],local_48,local_3c,0);
    bVar3 = iVar2 == 0;
    if (lVar1 != local_18) goto LAB_100284fed;
  }
  return bVar3;
}

