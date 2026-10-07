
undefined8 FUN_100331950(long param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xf0000003;
  if ((param_3 == 8) && (uVar4 = 0, *(long *)(*(long *)(param_1 + 0x10) + 0x868) != 0)) {
    FUN_1002adb30();
    lVar1 = FUN_10032ebe0(*(undefined8 *)(param_1 + 0x38),*param_2);
    if ((lVar1 != 0) && ((*(ushort *)(lVar1 + 0xb0) & 8) != 0)) {
      lVar2 = *(long *)(lVar1 + 0x40);
      lVar3 = 0;
      if ((int)((ulong)(*(long *)(lVar1 + 0x48) - lVar2) >> 3) != 0) {
        do {
          FUN_1002b0210(*(undefined8 *)(param_1 + 0x10),
                        *(undefined4 *)(*(long *)(lVar2 + lVar3 * 8) + 0xc));
          lVar2 = *(long *)(lVar1 + 0x40);
          lVar3 = lVar3 + 1;
        } while ((uint)lVar3 < (uint)((ulong)(*(long *)(lVar1 + 0x48) - lVar2) >> 3));
      }
    }
    FUN_10032ec50(*(undefined8 *)(param_1 + 0x38),param_2);
  }
  return uVar4;
}

