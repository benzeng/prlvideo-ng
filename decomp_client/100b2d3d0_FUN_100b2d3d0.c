
ulong FUN_100b2d3d0(long *param_1,long *param_2,undefined4 param_3,undefined1 param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = 0x80021011;
  if (*(int *)(*param_2 + 4) != 0) {
    (**(code **)(*param_1 + 0x178))(param_1);
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x1a8))
              ((long)param_1 + *(long *)(*param_1 + -0x18),param_2,param_3,0x5b);
    lVar1 = *(long *)(*param_1 + -0x18);
    uVar2 = FUN_100b0dfd0(lVar1 + 0x10 + (long)param_1,*(undefined4 *)(lVar1 + 0x18 + (long)param_1)
                          ,param_4,*(undefined8 *)(lVar1 + 0x40 + (long)param_1),
                          lVar1 + 8 + (long)param_1);
    uVar3 = (ulong)uVar2;
    if (-1 < (int)uVar2) {
      ___bzero(param_1 + 0x301f,0x200);
      *(undefined4 *)(param_1 + 0x301f) = 0x564d444b;
      *(undefined4 *)((long)param_1 + 0x180fc) = 1;
      *(undefined4 *)(param_1 + 0x3020) = 3;
      *(undefined4 *)((long)param_1 + 0x18124) = 0x200;
      *(undefined1 *)((long)param_1 + 0x18141) = 10;
      *(undefined1 *)((long)param_1 + 0x18142) = 0x20;
      *(undefined1 *)((long)param_1 + 0x18143) = 0xd;
      *(undefined1 *)((long)param_1 + 0x18144) = 10;
      *(undefined2 *)((long)param_1 + 0x18145) = 0;
      uVar3 = FUN_100b20920(param_1,param_2,param_3,param_4);
      return uVar3;
    }
    FUN_100df99c0("","dimg",0,"Init: Can\'t open file 0x%x",uVar3);
  }
  return uVar3;
}

