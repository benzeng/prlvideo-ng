
ulong * FUN_100ac8550(uint *param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  puVar2 = (ulong *)0x0;
  puVar1 = (ulong *)QMapDataBase::createNode((int)param_2,0x28,(QMapNodeBase *)0x8,false);
  *(uint *)(puVar1 + 3) = param_1[6];
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 7);
  uVar3 = *puVar1 | 1;
  if ((*param_1 & 1) == 0) {
    uVar3 = *puVar1 & 0xfffffffffffffffe;
  }
  *puVar1 = uVar3;
  if (*(long *)(param_1 + 2) != 0) {
    puVar2 = (ulong *)FUN_100ac8550(*(long *)(param_1 + 2),param_2);
    *puVar2 = *puVar2 & 3 | (ulong)puVar1;
  }
  puVar1[1] = (ulong)puVar2;
  if (*(long *)(param_1 + 4) == 0) {
    puVar1[2] = 0;
  }
  else {
    puVar2 = (ulong *)FUN_100ac8550(*(long *)(param_1 + 4),param_2);
    puVar1[2] = (ulong)puVar2;
    *puVar2 = *puVar2 & 3 | (ulong)puVar1;
  }
  return puVar1;
}

