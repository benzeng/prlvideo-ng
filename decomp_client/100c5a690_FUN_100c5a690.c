
ulong FUN_100c5a690(long param_1,char *param_2)

{
  uint uVar1;
  size_t sVar2;
  int *piVar3;
  ulong uVar4;
  uint *puVar5;
  
  sVar2 = _strlen(param_2);
  piVar3 = ___error();
  *piVar3 = 0;
  uVar4 = _write(*(int *)(param_1 + 0x28),param_2,(long)(int)sVar2);
  FUN_100c58810(param_1,0xf);
  if (((int)uVar4 < 1) && ((int)uVar4 + 1U < 2)) {
    puVar5 = (uint *)___error();
    uVar1 = *puVar5;
    if ((int)uVar1 < 0x39) {
      if ((0x25 < uVar1) || ((0x3800000010U >> ((ulong)uVar1 & 0x3f) & 1) == 0)) goto LAB_100c5a71d;
    }
    else if ((uVar1 != 0x39) && (uVar1 != 100)) goto LAB_100c5a71d;
    FUN_100c58830(param_1,10);
  }
LAB_100c5a71d:
  return uVar4 & 0xffffffff;
}

