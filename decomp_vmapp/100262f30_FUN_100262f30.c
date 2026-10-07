
void FUN_100262f30(long param_1,byte *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint local_84;
  termios local_80;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  iVar3 = _tcgetattr(*(int *)(param_1 + 0x118),&local_80);
  if (-1 < iVar3) {
    _cfmakeraw(&local_80);
    local_80.c_cflag = local_80.c_cflag | 0x8800;
    local_80.c_cc[0x10] = '\x01';
    local_80.c_cc[0x11] = '\0';
    bVar2 = *param_2;
    if ((bVar2 & 1) != 0) {
      _cfsetispeed(&local_80,(ulong)*(uint *)(&DAT_100b35f30 + (ulong)*(uint *)(param_2 + 4) * 4));
      _cfsetospeed(&local_80,(ulong)*(uint *)(&DAT_100b35f30 + (ulong)*(uint *)(param_2 + 4) * 4));
      _tcsetattr(*(int *)(param_1 + 0x118),0,&local_80);
      bVar2 = *param_2;
    }
    if ((bVar2 & 2) != 0) {
      uVar4 = local_80.c_cflag & 0xfffffffffffffcff;
      switch(param_2[8]) {
      case 5:
        break;
      case 6:
        uVar4 = uVar4 | 0x100;
        break;
      case 7:
        uVar4 = uVar4 | 0x200;
        break;
      case 8:
        uVar4 = local_80.c_cflag | 0x300;
      }
      uVar6 = uVar4 & 0xfffffffffffffbff;
      if (param_2[9] != 0) {
        uVar6 = uVar4 | 0x400;
      }
      local_80.c_cflag =
           (ulong)*(uint *)(&DAT_100b35f80 + (ulong)*(uint *)(param_2 + 0xc) * 4) |
           uVar6 & 0xffffffffffffefff;
      _tcsetattr(*(int *)(param_1 + 0x118),0,&local_80);
      if (*(int *)(param_2 + 0x10) == 0) {
        uVar4 = 0x2000747a;
      }
      else {
        uVar4 = 0x2000747b;
      }
      _ioctl(*(int *)(param_1 + 0x118),uVar4,0);
    }
    if (((*param_2 & 4) != 0) &&
       (iVar3 = _ioctl(*(int *)(param_1 + 0x118),0x4004746a,&local_84), -1 < iVar3)) {
      uVar5 = local_84 | 2;
      if ((param_2[0x14] & 1) == 0) {
        uVar5 = local_84 & 0xfffffffd;
      }
      local_84 = uVar5 | 4;
      if ((param_2[0x14] & 2) == 0) {
        local_84 = uVar5 & 0xfffffffb;
      }
      _ioctl(*(int *)(param_1 + 0x118),0x8004746d,&local_84);
    }
  }
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

