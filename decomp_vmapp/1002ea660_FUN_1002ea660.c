
undefined8 FUN_1002ea660(long param_1,undefined2 *param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 local_30;
  undefined1 local_2f;
  undefined2 local_2e;
  
  uVar1 = *(ushort *)((long)param_2 + 3);
  lVar2 = *(long *)(param_1 + 0x68 + (long)(int)((uVar1 & 0xfff) - 0x10) * 8);
  if (lVar2 == 0) {
    uVar4 = 0x12;
  }
  else {
    uVar4 = 0;
  }
  if (0 < DAT_1011c568c) {
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] CMD(%04x:%02x, handle:%04x) %s -> STS:%d",*param_2,
                  *(undefined1 *)(param_2 + 1),(uint)uVar1,*(undefined8 *)(param_3 + 0x10),uVar4);
  }
  local_2f = 1;
  local_2e = 0x411;
  local_30 = uVar4;
  FUN_1002eb5e0(param_1,0xf,&local_30,4,0,0);
  uVar3 = 0x20;
  if (lVar2 != 0) {
    *(ushort *)(param_1 + 0x17c) = uVar1;
    uVar3 = FUN_1002eb5e0(param_1,0x17,param_1 + 0x60,6,0,0);
  }
  return uVar3;
}

