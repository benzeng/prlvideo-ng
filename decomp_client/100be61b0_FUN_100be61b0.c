
undefined8 FUN_100be61b0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(param_1 + 0x100);
  FUN_100be5a90(lVar1,*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x3a8));
  lVar2 = *(long *)(*(long *)(param_1 + 0x80) + 0x3a8);
  uVar3 = *(ulong *)(lVar2 + 0x18);
  uVar4 = *(ulong *)(lVar2 + 0x20);
  uVar5 = 5;
  if (((((uVar4 & 0x40) == 0 && (uVar3 & 0x60) == 0) && (uVar5 = 3, (uVar3 & 2) == 0)) &&
      (uVar5 = 4, (uVar3 & 4) == 0)) && (uVar5 = 2, (uVar4 & 2) == 0)) {
    if ((uVar4 & 1) == 0) {
      if ((uVar4 & 0x20) != 0) {
        return 0;
      }
      uVar5 = 6;
      if (((uVar4 & 0x100) == 0) && (uVar5 = 7, (uVar4 & 0x200) == 0)) {
        FUN_100c62ee0(0x14,0x13d,0x44,"ssl_lib.c",0x944);
        return 0;
      }
    }
    else {
      uVar5 = (ulong)(*(long *)(lVar1 + 0x60) == 0);
    }
  }
  return *(undefined8 *)(lVar1 + 0x60 + uVar5 * 0x18);
}

