
undefined8 FUN_100b47ae0(char *param_1,ushort param_2,ushort param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  bVar3 = false;
  iVar1 = _socket(2,2,0);
  if (-1 < iVar1) {
    uStack_40 = 0;
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = '\0';
    local_58[0xf] = '\0';
    local_48 = 0x200;
    _strncpy(local_58,param_1,0x10);
    iVar2 = _ioctl(iVar1,0xc0206911,local_58);
    if (iVar2 < 0) {
      _close(iVar1);
      bVar3 = false;
    }
    else {
      local_48 = CONCAT62(local_48._2_6_,~param_3 & (param_2 | (ushort)local_48));
      iVar2 = _ioctl(iVar1,0x80206910,local_58);
      _close(iVar1);
      bVar3 = -1 < iVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_1021e1840 >> 8),bVar3);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

