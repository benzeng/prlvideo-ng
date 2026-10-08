
ulong * FUN_100cdec80(uint *param_1,undefined8 param_2)

{
  int *piVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar2 = (ulong *)QMapDataBase::createNode((int)param_2,0x28,(QMapNodeBase *)0x8,false);
  *(uint *)(puVar2 + 3) = param_1[6];
  piVar1 = *(int **)(param_1 + 8);
  puVar2[4] = (ulong)piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar4 = *puVar2 | 1;
  if ((*param_1 & 1) == 0) {
    uVar4 = *puVar2 & 0xfffffffffffffffe;
  }
  *puVar2 = uVar4;
  puVar3 = (ulong *)0x0;
  if (*(long *)(param_1 + 2) != 0) {
    puVar3 = (ulong *)FUN_100cdec80(*(long *)(param_1 + 2),param_2);
    *puVar3 = *puVar3 & 3 | (ulong)puVar2;
  }
  puVar2[1] = (ulong)puVar3;
  puVar3 = (ulong *)0x0;
  if (*(long *)(param_1 + 4) != 0) {
    puVar3 = (ulong *)FUN_100cdec80(*(long *)(param_1 + 4),param_2);
    *puVar3 = *puVar3 & 3 | (ulong)puVar2;
  }
  puVar2[2] = (ulong)puVar3;
  return puVar2;
}

