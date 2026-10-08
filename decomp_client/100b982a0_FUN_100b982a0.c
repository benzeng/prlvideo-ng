
int FUN_100b982a0(long param_1,void *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 0x1d8) = 1;
  if ((param_2 != (void *)0x0) && ((*(byte *)(param_1 + 0x18) & 0x10) != 0)) {
    iVar1 = _memcmp((void *)(param_1 + 0x170),&DAT_101da23d0,0x10);
    if ((iVar1 != 0) ||
       ((*(uint *)(param_1 + 0xcc) < 3 &&
        ((*(uint *)(param_1 + 0xcc) < 2 || (*(uint *)(param_1 + 200) < 7)))))) {
      if (0 < param_3) {
        param_3 = param_3 + 1;
        do {
          iVar1 = _memcmp((void *)(param_1 + 0x170),param_2,0x10);
          if (iVar1 == 0) goto LAB_100b9834f;
          param_2 = (void *)((long)param_2 + 0x10);
          param_3 = param_3 + -1;
        } while (1 < param_3);
      }
      FUN_100b9a390(param_1,1,8);
      return *(int *)(param_1 + 0x1d8);
    }
  }
LAB_100b9834f:
  uVar2 = _time((time_t *)0x0);
  iVar1 = _strcmp((char *)(param_1 + 0x100),"unlimited");
  if (iVar1 != 0) {
    if (*(ulong *)(param_1 + 0xf8) < uVar2) {
      if (uVar2 < (long)*(int *)(param_1 + 0x180) + *(ulong *)(param_1 + 0xf8)) {
        *(undefined4 *)(param_1 + 0x1d8) = 7;
        *(byte *)(param_1 + 0x1d6) = *(byte *)(param_1 + 0x1d6) | 0x10;
        iVar1 = 7;
      }
      else {
        *(undefined4 *)(param_1 + 0x1d8) = 2;
        *(undefined1 *)(param_1 + 0x1e8) = 0;
        iVar1 = 2;
      }
      goto LAB_100b98438;
    }
    if (uVar2 < *(ulong *)(param_1 + 0x120)) {
      *(undefined4 *)(param_1 + 0x1d8) = 1;
      *(byte *)(param_1 + 0x1d6) = *(byte *)(param_1 + 0x1d6) | 0x20;
      uVar3 = FUN_100ba1d10(10);
      ___snprintf_chk(param_1 + 0x1e8,0x7e,0,0xffffffffffffffff,"%s",uVar3);
      iVar1 = *(int *)(param_1 + 0x1d8);
      goto LAB_100b98438;
    }
  }
  *(undefined4 *)(param_1 + 0x1d8) = 5;
  iVar1 = 5;
LAB_100b98438:
  *(undefined **)(param_1 + 0x1e0) = (&PTR_s_UNKNOWN_1022cffa0)[iVar1];
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
  return iVar1;
}

