
void FUN_10043aea0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  uint local_1c;
  
  local_1c = *(uint *)(param_2 + 0x10);
  puVar1 = (undefined8 *)*param_1;
  if (*(uint *)(puVar1 + 4) != 0) {
    uVar4 = *(uint *)((long)puVar1 + 0x24) ^ local_1c;
    for (puVar2 = *(undefined8 **)(puVar1[1] + ((ulong)uVar4 % (ulong)*(uint *)(puVar1 + 4)) * 8);
        puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      if ((*(uint *)(puVar2 + 1) == uVar4) && (local_1c == *(uint *)((long)puVar2 + 0xc))) {
        if (puVar2 != puVar1) {
          return;
        }
        break;
      }
    }
  }
  plVar3 = (long *)FUN_10043b4f0(param_1,&local_1c);
  *plVar3 = param_2;
  return;
}

