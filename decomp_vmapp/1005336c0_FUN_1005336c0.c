
undefined1 FUN_1005336c0(long *param_1,string *param_2)

{
  long lVar1;
  short sVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 local_111;
  ushort local_110 [9];
  uint local_fe;
  uint local_f6;
  uint local_e6;
  undefined2 local_ce;
  byte local_bb;
  long local_a4;
  undefined1 local_78 [80];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  std::string::operator=((string *)(param_1 + 4),param_2);
  *(undefined4 *)(param_1 + 7) = 0;
  if (((byte)*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(string **)(param_2 + 0x10);
  }
  iVar3 = _FSPathMakeRef(param_2,local_78,&local_111);
  uVar4 = 0;
  if ((iVar3 == 0) &&
     (sVar2 = _FSGetCatalogInfo(local_78,0x4d62,local_110,0,0,0), uVar4 = 0, sVar2 == 0)) {
    if ((local_bb & 0x40) != 0) {
      *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 2;
    }
    if ((local_110[0] & 1) != 0) {
      *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 1;
    }
    if ((local_110[0] & 0x10) != 0) {
      *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 0x10;
      local_a4 = 0;
    }
    param_1[8] = local_a4;
    *(undefined2 *)(param_1 + 3) = 1;
    *(undefined2 *)((long)param_1 + 0x1a) = local_ce;
    *param_1 = (ulong)local_fe * 10000000 + 0x153b281e0fb4000;
    param_1[1] = (ulong)local_e6 * 10000000 + 0x153b281e0fb4000;
    param_1[2] = (ulong)local_f6 * 10000000 + 0x153b281e0fb4000;
    uVar4 = 1;
  }
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

