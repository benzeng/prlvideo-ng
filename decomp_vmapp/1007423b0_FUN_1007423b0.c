
ulong FUN_1007423b0(ulong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  ulong local_40 [2];
  undefined2 local_2c;
  undefined2 local_2a;
  
  if (param_1 == 0) {
    uVar3 = FUN_10071e690(0xfffffffd,0);
    return uVar3;
  }
  local_2c = 3;
  local_2a = 0;
  local_40[0] = param_1 >> 0x20;
  local_40[1] = 1;
  uVar6 = param_2 == 0 | 8;
  uVar5 = 0;
  iVar1 = _fcntl((int)param_1,uVar6,local_40);
  if (iVar1 == -1) {
    do {
      piVar2 = ___error();
      iVar1 = *piVar2;
      piVar2 = ___error();
      if (iVar1 != 4) {
        pcVar4 = _strerror(*piVar2);
        uVar5 = FUN_10071e690(0xfffffff7,"can\'t lock object, %s",pcVar4);
        break;
      }
      *piVar2 = 0;
      uVar5 = 0;
      iVar1 = _fcntl((int)param_1,uVar6,local_40);
    } while (iVar1 == -1);
  }
  return (ulong)uVar5;
}

