
int FUN_10038bb60(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = *(int *)(DAT_1011c8478 + 0x24);
  lVar1 = *param_2;
  if ((iVar2 == 2) || ((*(ushort *)(lVar1 + 0xb0) & 0x40) == 0)) {
    bVar3 = *(byte *)(param_3[1] + 0xac) & 0x10;
    if (*(int *)(param_2[1] + 0xc) == *(int *)(param_3[1] + 0xc)) {
      iVar2 = 4;
      if ((bVar3 != 0) &&
         (((((int)param_2[3] == (int)param_3[3] &&
            (*(int *)((long)param_2 + 0x1c) == *(int *)((long)param_3 + 0x1c))) ||
           (*(char *)(DAT_1011c8478 + 0x3f) == '\0')) ||
          ((iVar2 = 3, *(int *)(lVar1 + 0x24) == 5 && (*(char *)(DAT_1011c8478 + 0x7d) != '\0'))))))
      {
        return 5;
      }
    }
    else {
      iVar2 = 1;
      if ((((bVar3 != 0) &&
           ((*(int *)(lVar1 + 0x24) != 5 ||
            ((iVar2 = 2, *(char *)(DAT_1011c8478 + 0x7d) == '\0' &&
             (iVar2 = 3, *(int *)(*param_3 + 0x24) != 5)))))) &&
          (iVar2 = 3, *(uint *)(lVar1 + 0x20) < 2)) && (iVar2 = 3, *(uint *)(*param_3 + 0x20) < 2))
      {
        iVar2 = 2;
      }
    }
  }
  return iVar2;
}

