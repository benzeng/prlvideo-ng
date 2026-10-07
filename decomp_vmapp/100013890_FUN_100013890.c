
ulong * FUN_100013890(uint *param_1,undefined8 param_2)

{
  int *piVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar2 = (ulong *)QMapDataBase::createNode((int)param_2,0x28,(QMapNodeBase *)&DAT_00000008,false);
  piVar1 = *(int **)(param_1 + 6);
  puVar2[3] = (ulong)piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(uint *)(puVar2 + 4) = param_1[8];
  uVar4 = *puVar2 | 1;
  if ((*param_1 & 1) == 0) {
    uVar4 = *puVar2 & 0xfffffffffffffffe;
  }
  *puVar2 = uVar4;
  if (*(long *)(param_1 + 2) == 0) {
    puVar2[1] = 0;
  }
  else {
    puVar3 = (ulong *)FUN_100013890(*(long *)(param_1 + 2),param_2);
    puVar2[1] = (ulong)puVar3;
    *puVar3 = *puVar3 & 3 | (ulong)puVar2;
  }
  if (*(long *)(param_1 + 4) == 0) {
    puVar2[2] = 0;
  }
  else {
    puVar3 = (ulong *)FUN_100013890(*(long *)(param_1 + 4),param_2);
    puVar2[2] = (ulong)puVar3;
    *puVar3 = *puVar3 & 3 | (ulong)puVar2;
  }
  return puVar2;
}

