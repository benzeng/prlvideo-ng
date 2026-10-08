
undefined8 FUN_1009d9750(int *param_1,ulong param_2,uint param_3,char param_4)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  ulong in_RAX;
  ssize_t sVar4;
  uint uVar5;
  ulong local_38;
  
  if (param_3 != 0) {
    uVar5 = 0;
    local_38 = in_RAX;
    do {
      lVar1 = *(long *)(param_1 + 2);
      if (lVar1 == 0) {
        sVar4 = _pread(*param_1,&local_38,8,param_2);
        if (sVar4 != 8) {
          return 0;
        }
      }
      else {
        if ((long)param_2 < 0) {
          return 0;
        }
        uVar2 = *(ulong *)(param_1 + 4);
        if (uVar2 < param_2 + 8) {
          if (uVar2 < param_2 || uVar2 - param_2 == 0) {
            return 0;
          }
          _memcpy(&local_38,(void *)(lVar1 + param_2),uVar2 - param_2);
          return 0;
        }
        local_38 = *(ulong *)(lVar1 + param_2);
      }
      if (param_4 != '\0') {
        FUN_1009d8ce0(&local_38);
      }
      if ((*(code **)(param_1 + 6) != (code *)0x0) &&
         (cVar3 = (**(code **)(param_1 + 6))
                            (param_1,&local_38,param_2,param_4,*(undefined8 *)(param_1 + 8)),
         cVar3 == '\0')) {
        return 1;
      }
      param_2 = param_2 + (local_38 >> 0x20);
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_3);
  }
  return 1;
}

