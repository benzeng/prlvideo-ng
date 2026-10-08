
undefined4 * FUN_100c98b70(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)FUN_100bf3540(0x20,"x509_lu.c",0x45);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(long *)(puVar2 + 2) = param_1;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    puVar3 = puVar2;
    if (*(code **)(param_1 + 8) != (code *)0x0) {
      iVar1 = (**(code **)(param_1 + 8))(puVar2);
      if (iVar1 == 0) {
        FUN_100bf3910(puVar2);
        puVar3 = (undefined4 *)0x0;
      }
    }
  }
  return puVar3;
}

