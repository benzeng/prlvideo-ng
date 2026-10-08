
void FUN_100142f10(long param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long local_10;
  
  local_10 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (*(int *)((long)puVar1 + 0x14) != 0) {
    puVar4 = puVar1;
    if (*(uint *)(puVar1 + 4) != 0) {
      for (puVar2 = *(undefined8 **)
                     (puVar1[1] +
                     ((ulong)*(uint *)((long)puVar1 + 0x24) % (ulong)*(uint *)(puVar1 + 4)) * 8);
          (puVar4 = puVar1, puVar2 != puVar1 &&
          ((*(uint *)(puVar2 + 1) != *(uint *)((long)puVar1 + 0x24) ||
           (puVar4 = puVar2, *(int *)((long)puVar2 + 0xc) != 0)))); puVar2 = (undefined8 *)*puVar2)
      {
      }
    }
    plVar3 = &local_10;
    if (puVar4 != puVar1) {
      plVar3 = puVar4 + 2;
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100142f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x68))(plVar3,param_2);
      return;
    }
  }
  return;
}

