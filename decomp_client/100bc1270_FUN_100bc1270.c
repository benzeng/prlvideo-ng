
void FUN_100bc1270(ulong param_1)

{
  int iVar1;
  int *piVar2;
  ulong local_30 [2];
  undefined2 local_1c;
  undefined2 local_1a;
  
  if (param_1 != 0) {
    local_1c = 2;
    local_1a = 0;
    local_30[0] = param_1 >> 0x20;
    local_30[1] = 1;
    iVar1 = _fcntl((int)param_1,8,local_30);
    if (iVar1 == -1) {
      do {
        piVar2 = ___error();
        if (*piVar2 != 4) {
          return;
        }
        piVar2 = ___error();
        *piVar2 = 0;
        iVar1 = _fcntl((int)param_1,8,local_30);
      } while (iVar1 == -1);
    }
  }
  return;
}

