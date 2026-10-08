
void FUN_10022c9a0(long param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(param_1 + 100);
  lVar3 = (long)iVar2;
  puVar1 = *(uint **)(param_1 + 0x28);
  if (1 < *puVar1) {
    FUN_10022d1b0(param_1 + 0x28,puVar1[1]);
    puVar1 = *(uint **)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 100);
  }
  FUN_100813350(param_1,param_2,*(undefined8 *)(puVar1 + ((int)puVar1[2] + lVar3) * 2 + 4),iVar2 + 1
                ,*(undefined4 *)(param_1 + 0x60));
  return;
}

