
undefined8 FUN_100890280(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x78);
  uVar3 = 0;
  if ((((*(long *)(lVar1 + 0x1e8) != 0) && (*(long *)(lVar1 + 0x1f0) != 0)) && (param_2 != 0)) &&
     ((uVar3 = 0, param_3 != 0 && (0xf < param_4)))) {
    if (*(code **)(lVar1 + 0x208) == (code *)0x0) {
      iVar2 = FUN_1008465b0(lVar1 + 0x1e8,param_1 + 0x28,param_3,param_2,param_4,
                            *(undefined4 *)(param_1 + 0x10));
      if (iVar2 != 0) {
        return 0;
      }
    }
    else {
      (**(code **)(lVar1 + 0x208))
                (param_3,param_2,param_4,*(long *)(lVar1 + 0x1e8),*(long *)(lVar1 + 0x1f0),
                 param_1 + 0x28);
    }
    uVar3 = 1;
  }
  return uVar3;
}

