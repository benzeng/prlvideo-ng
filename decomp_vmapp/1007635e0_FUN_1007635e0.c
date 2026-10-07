
void FUN_1007635e0(long param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  ushort uVar6;
  undefined4 local_3c;
  sockaddr local_38;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_3c = 1;
  *(undefined4 *)(param_1 + 0x40) = param_2;
  local_28 = lVar1;
  iVar2 = _socket(2,1,0);
  *(int *)(param_1 + 0x3c) = iVar2;
  if (iVar2 < 0) {
    if (lVar1 == local_28) {
      FUN_1008e3970("","etrace",0,"Can\'t create socket");
      return;
    }
    goto LAB_100763735;
  }
  local_38.sa_data[6] = '\0';
  local_38.sa_data[7] = '\0';
  local_38.sa_data[8] = '\0';
  local_38.sa_data[9] = '\0';
  local_38.sa_data[10] = '\0';
  local_38.sa_data[0xb] = '\0';
  local_38.sa_data[0xc] = '\0';
  local_38.sa_data[0xd] = '\0';
  uVar6 = (ushort)param_2 << 8 | (ushort)param_2 >> 8;
  local_38.sa_data[0] = (char)uVar6;
  local_38.sa_data[1] = (char)(uVar6 >> 8);
  local_38.sa_len = '\0';
  local_38.sa_family = '\x02';
  local_38.sa_data[2] = '\0';
  local_38.sa_data[3] = '\0';
  local_38.sa_data[4] = '\0';
  local_38.sa_data[5] = '\0';
  _setsockopt(iVar2,0xffff,4,&local_3c,4);
  iVar2 = _bind(*(int *)(param_1 + 0x3c),&local_38,0x10);
  if (iVar2 < 0) {
    piVar3 = ___error();
    pcVar4 = _strerror(*piVar3);
    pcVar5 = "bind() failed: %s";
LAB_10076370f:
    FUN_1008e3970("","etrace",0,pcVar5,pcVar4);
    _close(*(int *)(param_1 + 0x3c));
  }
  else {
    iVar2 = _listen(*(int *)(param_1 + 0x3c),1);
    if (iVar2 < 0) {
      piVar3 = ___error();
      pcVar4 = _strerror(*piVar3);
      pcVar5 = "listen() failed: %s";
      goto LAB_10076370f;
    }
    QThread::start(param_1,7);
  }
  if (lVar1 == local_28) {
    return;
  }
LAB_100763735:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

