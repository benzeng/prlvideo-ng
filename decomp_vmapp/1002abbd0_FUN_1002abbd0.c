
void FUN_1002abbd0(long param_1,uint param_2,undefined4 param_3,byte param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x910) + 0x18) = param_3;
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 0x910) + 0x2c + (ulong)(param_2 - 1) * 0x414) = param_3;
  }
  lVar4 = (ulong)param_2 * 0x8f0;
  *(undefined4 *)(param_1 + 0x930 + lVar4) = param_3;
  iVar1 = *(int *)(param_1 + 0x9d4 + lVar4);
  if ((*(int *)(param_1 + 0x9d0 + lVar4) != iVar1 ^ param_4) == 1) {
    *(undefined4 *)(param_1 + 0x1214 + lVar4) = *(undefined4 *)(param_1 + 0x1210 + lVar4);
  }
  if (param_4 == 0) {
    *(int *)(param_1 + 0x9d0 + lVar4) = iVar1;
    if (*(int *)(param_1 + 0x950 + lVar4) != 0) {
      *(undefined4 *)(param_1 + 0x950 + lVar4) = 0;
    }
    if (*(int *)(param_1 + 0x954 + lVar4) != 0) {
      *(undefined4 *)(param_1 + 0x954 + lVar4) = 0;
    }
    if (*(uint *)(param_1 + 0x958 + lVar4) < 0x3fff) {
      *(undefined4 *)(param_1 + 0x958 + lVar4) = 0x3fff;
    }
    if (*(uint *)(param_1 + 0x95c + lVar4) < 0x3fff) {
      *(undefined4 *)(param_1 + 0x95c + lVar4) = 0x3fff;
    }
  }
  else if (*(char *)(param_1 + 0x871) != '\0') {
    uVar2 = FUN_1007d8850();
    uVar3 = *(int *)(param_1 + 0x1210 + lVar4) + 1;
    *(uint *)(param_1 + 0x1210 + lVar4) = uVar3;
    *(undefined4 *)(param_1 + lVar4 + 0xe10 + (ulong)(uVar3 & 0xff) * 4) = uVar2;
  }
  FUN_100434030(*(undefined8 *)(*(long *)(param_1 + 8) + 0xf0),param_2,param_3);
  return;
}

