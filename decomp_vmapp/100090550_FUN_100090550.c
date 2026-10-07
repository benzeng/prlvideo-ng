
char FUN_100090550(long param_1)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  long *plVar4;
  
  if (*(int *)(*(undefined8 **)(param_1 + 0xa8) + 5) == 1) {
    pcVar2 = *(code **)(param_1 + 0x70);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)(param_1 + 0x78) + param_1) + -1);
    }
    (*pcVar2)();
  }
  else if (*(long *)(param_1 + 0x48) != 0) {
    if (3 < DAT_1011b55f8) {
      FUN_1008e3970("","vm",4,"%s state(%s): executing routine...",param_1 + 0x81,
                    **(undefined8 **)(param_1 + 0xa8));
    }
    pcVar2 = *(code **)(param_1 + 0x70);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)(param_1 + 0x78) + param_1) + -1);
    }
    cVar1 = (*pcVar2)();
    if (DAT_1011b55f8 < 4) {
      return cVar1;
    }
    pcVar3 = "postponed";
    if (cVar1 != '\0') {
      pcVar3 = "finished";
    }
    FUN_1008e3970("","vm",4,"%s state(%s): executing routine... %s",param_1 + 0x81,
                  **(undefined8 **)(param_1 + 0xa8),pcVar3);
    return cVar1;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    cVar1 = '\0';
  }
  else {
    pcVar2 = *(code **)(param_1 + 0x60);
    plVar4 = (long *)(*(long *)(param_1 + 0x68) + param_1);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = *(code **)(pcVar2 + *plVar4 + -1);
    }
    cVar1 = (*pcVar2)(plVar4,*(undefined4 *)(*(long *)(param_1 + 0x40) + 8));
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      cVar1 = '\x01';
    }
  }
  return cVar1;
}

