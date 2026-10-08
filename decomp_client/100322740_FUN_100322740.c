
ulong * FUN_100322740(uint *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = (ulong *)0x0;
  puVar2 = (ulong *)QMapDataBase::createNode((int)param_2,0x40,(QMapNodeBase *)0x8,false);
  *(uint *)(puVar2 + 3) = param_1[6];
  *(uint *)((long)puVar2 + 0x3c) = param_1[0xf];
  *(undefined8 *)((long)puVar2 + 0x34) = *(undefined8 *)(param_1 + 0xd);
  *(undefined8 *)((long)puVar2 + 0x2c) = *(undefined8 *)(param_1 + 0xb);
  uVar1 = *(undefined8 *)(param_1 + 7);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 9);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar1;
  uVar4 = *puVar2 | 1;
  if ((*param_1 & 1) == 0) {
    uVar4 = *puVar2 & 0xfffffffffffffffe;
  }
  *puVar2 = uVar4;
  if (*(long *)(param_1 + 2) != 0) {
    puVar3 = (ulong *)FUN_100322740(*(long *)(param_1 + 2),param_2);
    *puVar3 = *puVar3 & 3 | (ulong)puVar2;
  }
  puVar2[1] = (ulong)puVar3;
  if (*(long *)(param_1 + 4) == 0) {
    puVar2[2] = 0;
  }
  else {
    puVar3 = (ulong *)FUN_100322740(*(long *)(param_1 + 4),param_2);
    puVar2[2] = (ulong)puVar3;
    *puVar3 = *puVar3 & 3 | (ulong)puVar2;
  }
  return puVar2;
}

