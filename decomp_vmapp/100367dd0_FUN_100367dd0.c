
undefined8 FUN_100367dd0(long param_1,int param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 == 4) {
    lVar2 = (*DAT_1011c64a0)(0x8893,35000);
    uVar1 = *(uint *)(param_1 + 0x218);
    uVar3 = 0;
    if ((ulong)uVar1 != 0) {
      uVar3 = 0;
      do {
        if (*(uint *)(param_1 + 0x214) <= *(uint *)(lVar2 + (param_3 & 0xffffffff) + uVar3 * 4))
        goto LAB_100367e2f;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
      uVar3 = (ulong)uVar1;
    }
LAB_100367e2f:
    *(int *)(param_1 + 0x218) = (int)uVar3;
    (*DAT_1011c6ed0)(0x8893);
    uVar4 = 0x1405;
  }
  else if (param_2 == 2) {
    uVar4 = 0x1403;
    if (*(uint *)(param_1 + 0x214) < 0xffff) {
      lVar2 = (*DAT_1011c64a0)(0x8893,35000);
      uVar1 = *(uint *)(param_1 + 0x218);
      uVar3 = 0;
      if ((ulong)uVar1 != 0) {
        uVar3 = 0;
        do {
          if (*(ushort *)(param_1 + 0x214) <=
              *(ushort *)(lVar2 + (param_3 & 0xffffffff) + uVar3 * 2)) goto LAB_100367eb2;
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
        uVar3 = (ulong)uVar1;
      }
LAB_100367eb2:
      *(int *)(param_1 + 0x218) = (int)uVar3;
      (*DAT_1011c6ed0)(0x8893);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x218) = 0;
    uVar4 = 0;
  }
  return uVar4;
}

