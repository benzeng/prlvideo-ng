
ulong FUN_10087f350(long param_1,void *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  uint *puVar4;
  
  piVar2 = ___error();
  *piVar2 = 0;
  uVar3 = _write(*(int *)(param_1 + 0x28),param_2,(long)param_3);
  FUN_10087d610(param_1,0xf);
  if (((int)uVar3 < 1) && ((int)uVar3 + 1U < 2)) {
    puVar4 = (uint *)___error();
    uVar1 = *puVar4;
    if ((int)uVar1 < 0x39) {
      if ((0x25 < uVar1) || ((0x3800000010U >> ((ulong)uVar1 & 0x3f) & 1) == 0)) goto LAB_10087f3d4;
    }
    else if ((uVar1 != 0x39) && (uVar1 != 100)) goto LAB_10087f3d4;
    FUN_10087d630(param_1,10);
  }
LAB_10087f3d4:
  return uVar3 & 0xffffffff;
}

