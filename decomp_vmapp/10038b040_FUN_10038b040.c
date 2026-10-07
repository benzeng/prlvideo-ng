
int FUN_10038b040(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)(DAT_1011c8478 + 0x24);
  if ((iVar1 == 2) || ((*(ushort *)(*param_2 + 0xb0) & 0x40) == 0)) {
    bVar2 = *(byte *)(*(long *)(param_3 + 8) + 0xac) & 0x10;
    if (*(int *)(param_2[1] + 0xc) == *(int *)(*(long *)(param_3 + 8) + 0xc)) {
      iVar1 = 4;
      if ((bVar2 != 0) &&
         ((((int)param_2[3] == *(int *)(param_3 + 0x18) &&
           (*(int *)((long)param_2 + 0x1c) == *(int *)(param_3 + 0x1c))) ||
          (iVar1 = 3, *(char *)(DAT_1011c8478 + 0x3f) == '\0')))) {
        return 5;
      }
    }
    else {
      iVar1 = (bVar2 >> 4) + 1;
    }
  }
  return iVar1;
}

