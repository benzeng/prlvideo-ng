
undefined8 FUN_100c7b960(undefined8 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long in_R8;
  undefined4 in_R9D;
  undefined8 uVar3;
  
  iVar1 = FUN_100c7aec0(*param_1);
  uVar3 = 0;
  if ((iVar1 != 0) && (uVar3 = 1, in_R8 != 0)) {
    puVar2 = (undefined4 *)param_1[1];
    if (*(long *)(puVar2 + 2) != 0) {
      FUN_100bf3910();
      puVar2 = (undefined4 *)param_1[1];
    }
    *(long *)(puVar2 + 2) = in_R8;
    *puVar2 = in_R9D;
    *(ulong *)(puVar2 + 4) = *(ulong *)(puVar2 + 4) & 0xfffffffffffffff0 | 8;
  }
  return uVar3;
}

