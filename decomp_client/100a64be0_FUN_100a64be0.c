
bool FUN_100a64be0(long param_1,long *param_2,ulong param_3)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 local_68 [68];
  undefined4 local_24;
  
  if (param_3 == 0) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      return *(int *)(*(long *)(param_1 + 0x20) + 0x58) == 4;
    }
    return false;
  }
  local_24 = (undefined4)param_3;
  FUN_100aafe50(local_68,param_1 + 0x18);
  cVar1 = FUN_100a64890(param_1,&local_24,4,0);
  if (cVar1 != '\0') {
    uVar2 = 0;
    if (*param_2 != 0) {
      uVar2 = *(undefined8 *)(*param_2 + 0x10);
    }
    cVar1 = FUN_100a64890(param_1,uVar2,param_3 & 0xffffffff,0);
    bVar3 = true;
    if (cVar1 != '\0') goto LAB_100a64c66;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
    _write(*(int *)(param_1 + 0x14),(void *)(param_1 + 0x10),1);
  }
  bVar3 = false;
LAB_100a64c66:
  FUN_100aafde0(local_68);
  return bVar3;
}

