
undefined8 FUN_100c01f40(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)FUN_100bf3540(0x140,"hm_pmeth.c",0x4e);
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    *(undefined4 *)((long)puVar4 + 0xc) = 4;
    puVar1 = puVar4 + 4;
    FUN_100c01970(puVar1);
    *(undefined8 **)(param_1 + 0x28) = puVar4;
    *(undefined4 *)(param_1 + 0x48) = 0;
    puVar2 = *(undefined8 **)(param_2 + 0x28);
    *puVar4 = *puVar2;
    FUN_100c01970(puVar1);
    iVar3 = FUN_100c01a80(puVar1,puVar2 + 4);
    if (iVar3 != 0) {
      if ((puVar2[2] != 0) &&
         (iVar3 = FUN_100c76bc0(puVar4 + 1,puVar2[2],*(undefined4 *)(puVar2 + 1)), iVar3 == 0)) {
        return 0;
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}

