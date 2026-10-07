
undefined8 FUN_10037f100(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x100);
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar2 = *(int *)(lVar1 + 8) - 0x1f;
    uVar3 = 0;
    if (uVar2 < 10) {
      uVar3 = *(uint *)(&DAT_100b3e180 + (long)(int)uVar2 * 4);
    }
    uVar3 = uVar3 & *(uint *)(param_2 + 0x835c);
  }
  (*DAT_1011c6b18)(uVar3);
  return 0;
}

