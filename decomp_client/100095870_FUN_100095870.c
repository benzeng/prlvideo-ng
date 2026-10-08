
ulong * FUN_100095870(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  puVar5 = (ulong *)0x0;
  puVar4 = (ulong *)QMapDataBase::createNode((int)param_2,0x28,(QMapNodeBase *)0x8,false);
  uVar1 = param_1[7];
  uVar2 = param_1[8];
  uVar3 = param_1[9];
  *(uint *)(puVar4 + 3) = param_1[6];
  *(uint *)((long)puVar4 + 0x1c) = uVar1;
  *(uint *)(puVar4 + 4) = uVar2;
  *(uint *)((long)puVar4 + 0x24) = uVar3;
  uVar6 = *puVar4 | 1;
  if ((*param_1 & 1) == 0) {
    uVar6 = *puVar4 & 0xfffffffffffffffe;
  }
  *puVar4 = uVar6;
  if (*(long *)(param_1 + 2) != 0) {
    puVar5 = (ulong *)FUN_100095870(*(long *)(param_1 + 2),param_2);
    *puVar5 = *puVar5 & 3 | (ulong)puVar4;
  }
  puVar4[1] = (ulong)puVar5;
  if (*(long *)(param_1 + 4) == 0) {
    puVar4[2] = 0;
  }
  else {
    puVar5 = (ulong *)FUN_100095870(*(long *)(param_1 + 4),param_2);
    puVar4[2] = (ulong)puVar5;
    *puVar5 = *puVar5 & 3 | (ulong)puVar4;
  }
  return puVar4;
}

