
undefined8 FUN_1002d90c0(undefined8 *param_1,long param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  uint local_2c;
  
  uVar3 = *(uint *)(param_2 + 0x43c);
  if ((uint)*(ushort *)((long)param_1 + 0xfd) < *(uint *)(param_2 + 0x43c)) {
    uVar3 = (uint)*(ushort *)((long)param_1 + 0xfd);
  }
  cVar1 = *(char *)((long)param_1 + 0xf7);
  local_2c = uVar3;
  if ((*(code **)(param_2 + 0x478) == FUN_1002d9220) && (cVar1 == -0x80)) {
    local_2c = 0x3ff;
    if (0x3ff < uVar3) {
      local_2c = uVar3;
    }
    cVar1 = -0x80;
  }
  uVar5 = 0;
  lVar4 = 0;
  if (param_3 != 0) {
    lVar4 = param_2;
  }
  iVar2 = FUN_1002d6d50(param_1[0x18],cVar1,*(undefined1 *)(param_1 + 0x1f),
                        *(undefined2 *)((long)param_1 + 0xf9),*(undefined2 *)((long)param_1 + 0xfb),
                        param_2 + 0x4d8,&local_2c,lVar4);
  if (((param_3 == 0) || (iVar2 != 0)) || (local_2c != 0xffffffff)) {
    *(int *)(param_2 + 0x46c) = iVar2;
    *(uint *)(param_2 + 0x454) = local_2c;
    (**(code **)(*(long *)*param_1 + 0x38))((long *)*param_1,param_2);
    uVar5 = 1;
  }
  return uVar5;
}

