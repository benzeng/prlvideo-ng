
ulong FUN_10068a3d0(long *param_1,long *param_2,undefined4 param_3,undefined1 param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = 0x80021011;
  if (*(int *)(*param_2 + 4) != 0) {
    (**(code **)(*param_1 + 0x178))(param_1);
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x1a8))
              ((long)param_1 + *(long *)(*param_1 + -0x18),param_2,param_3,2);
    lVar1 = *(long *)(*param_1 + -0x18);
    uVar2 = FUN_100685960(lVar1 + 0x10 + (long)param_1,*(undefined4 *)(lVar1 + 0x18 + (long)param_1)
                          ,param_4,*(undefined8 *)(lVar1 + 0x40 + (long)param_1),
                          lVar1 + 8 + (long)param_1);
    uVar3 = (ulong)uVar2;
    if (-1 < (int)uVar2) {
      uVar3 = FUN_1006982b0(param_1,param_2,param_3,param_4);
      return uVar3;
    }
    FUN_1008e3970("","dimg",0,"Init: Can\'t open file 0x%x",uVar3);
    (**(code **)(*param_1 + 0xf0))(param_1);
  }
  return uVar3;
}

