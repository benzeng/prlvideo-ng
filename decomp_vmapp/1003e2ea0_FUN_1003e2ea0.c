
int FUN_1003e2ea0(long *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  
  lVar1 = param_1[0xb];
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar5 = *(uint *)(param_1 + 0x19), uVar5 == 0xffffffff)) {
    uVar5 = (uint)CONCAT11((char)*(undefined2 *)(lVar1 + 8),
                           (char)((ushort)*(undefined2 *)(lVar1 + 8) >> 8));
  }
  if ((((*(byte *)(lVar1 + 1) & 0xf) != 0) || (*(char *)(lVar1 + 7) != '\0')) &&
     (iVar2 = (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]), iVar2 != 0)) {
    return iVar2;
  }
  uVar5 = uVar5 & 0xffff;
  if (uVar5 < 0x16) {
    local_48 = 0;
    uStack_40 = 0;
    local_34 = 0;
    local_38 = 0;
    puVar4 = &local_48;
  }
  else {
    puVar4 = (undefined8 *)param_1[9];
    ___bzero(puVar4,(ulong)uVar5);
  }
  *(uint *)((long)puVar4 + 4) = *(uint *)((long)puVar4 + 4) & 0xf0f0f0f0 | 0x10201;
  *(undefined4 *)(puVar4 + 1) = 0;
  uVar3 = (int)param_1[0x13] + 0x96;
  *(uint *)((long)puVar4 + 0xc) = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8;
  *(undefined2 *)puVar4 = 0x1800;
  if (puVar4 != (undefined8 *)param_1[9]) {
    _memcpy((undefined8 *)param_1[9],puVar4,(ulong)uVar5);
  }
  return 0;
}

