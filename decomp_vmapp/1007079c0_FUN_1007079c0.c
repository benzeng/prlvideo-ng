
undefined8 FUN_1007079c0(long *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x98))();
  if (cVar1 != '\0') {
    _flock((int)param_1[1],8);
    if ((int)param_1[1] != -1) {
      _close((int)param_1[1]);
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
    }
    if (*(int *)((long)param_1 + 0xc) != -1) {
      _close(*(int *)((long)param_1 + 0xc));
      *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
    }
    if ((int)param_1[2] != -1) {
      _close((int)param_1[2]);
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
    }
    uVar2 = FUN_100768f60();
    *(undefined4 *)((long)param_1 + 0x14) = uVar2;
  }
  return 1;
}

