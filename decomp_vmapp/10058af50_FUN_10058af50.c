
long FUN_10058af50(long param_1,uint param_2,byte param_3,undefined8 param_4,undefined4 param_5,
                  undefined4 *param_6)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_2 == 0xffffffff) || (param_3 != 0)) {
    if (param_2 == 0xffffffff) {
      lVar2 = FUN_100684400(param_4,(uint)param_3 * 2 + 1,param_5,param_6,param_1);
      return lVar2;
    }
    uVar3 = (ulong)param_2;
    uVar1 = *(long *)(param_1 + 0x58) + uVar3;
    (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x40) + (uVar1 >> 9) * 8) +
                            (uVar1 & 0x1ff) * 8) + 0x28))();
    uVar1 = *(long *)(param_1 + 0x58) + uVar3;
    (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x40) + (uVar1 >> 9) * 8) +
                            (uVar1 & 0x1ff) * 8) + 0x20))();
    uVar1 = *(long *)(param_1 + 0x58) + uVar3;
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar1 >> 9) * 8) + (uVar1 & 0x1ff) * 8) =
         0;
    lVar2 = FUN_100684400(param_4,(uint)param_3 * 2 + 1,param_5,param_6,param_1);
    if (lVar2 == 0) {
      *(undefined1 *)(param_1 + 0x7c) = 0;
    }
    uVar3 = uVar3 + *(long *)(param_1 + 0x58);
    *(long *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar3 >> 9) * 8) + (uVar3 & 0x1ff) * 8) = lVar2
    ;
  }
  else {
    uVar1 = (ulong)param_2 + *(long *)(param_1 + 0x58);
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar1 >> 9) * 8) + (uVar1 & 0x1ff) * 8)
    ;
    *param_6 = 0;
  }
  return lVar2;
}

