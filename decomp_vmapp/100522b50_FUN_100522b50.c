
byte FUN_100522b50(long *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  if ((int)param_1[2] != (int)param_2[2]) {
    return 0;
  }
  bVar1 = 0x60;
  if (*param_1 != *param_2) {
    FUN_1007eb990(&local_28);
    if (*param_1 != local_28) {
      FUN_1007eb990(&local_30);
      bVar1 = 0x40;
      if (*param_2 != local_30) goto LAB_100522baa;
    }
    bVar1 = 0x50;
  }
LAB_100522baa:
  if (*(int *)((long)param_1 + 0x14) == *(int *)((long)param_2 + 0x14)) {
    bVar1 = bVar1 | 8;
  }
  if (param_1[1] == param_2[1]) {
    bVar1 = bVar1 | 4;
  }
  else {
    FUN_1007eb930(&local_38);
    if ((param_1[1] == local_38) || (FUN_1007eb930(&local_40), param_2[1] == local_40)) {
      bVar1 = bVar1 | 2;
    }
  }
  if ((char)param_2[3] == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = (int)param_2[2] != *(int *)((long)param_2 + 0x14);
  }
  return (char)param_1[3] != '\0' ^ bVar2 ^ 1U | bVar1;
}

