
ulong * FUN_100023b80(uint *param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  puVar1 = (ulong *)FUN_100023a50(param_2,param_1 + 6,param_1 + 8,0,0);
  uVar3 = *puVar1 | 1;
  if ((*param_1 & 1) == 0) {
    uVar3 = *puVar1 & 0xfffffffffffffffe;
  }
  *puVar1 = uVar3;
  if (*(long *)(param_1 + 2) == 0) {
    puVar1[1] = 0;
  }
  else {
    puVar2 = (ulong *)FUN_100023b80(*(long *)(param_1 + 2),param_2);
    puVar1[1] = (ulong)puVar2;
    *puVar2 = *puVar2 & 3 | (ulong)puVar1;
  }
  if (*(long *)(param_1 + 4) == 0) {
    puVar1[2] = 0;
  }
  else {
    puVar2 = (ulong *)FUN_100023b80(*(long *)(param_1 + 4),param_2);
    puVar1[2] = (ulong)puVar2;
    *puVar2 = *puVar2 & 3 | (ulong)puVar1;
  }
  return puVar1;
}

