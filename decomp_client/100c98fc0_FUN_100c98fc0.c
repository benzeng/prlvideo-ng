
undefined4 * FUN_100c98fc0(long param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  iVar3 = FUN_100c60800(uVar1);
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      puVar5 = (undefined4 *)FUN_100c60820(uVar1,iVar3);
      if (*(long *)(puVar5 + 2) == param_2) {
        return puVar5;
      }
      iVar3 = iVar3 + 1;
      iVar4 = FUN_100c60800(uVar1);
    } while (iVar3 < iVar4);
  }
  puVar5 = (undefined4 *)FUN_100bf3540(0x20,"x509_lu.c",0x45);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    *(long *)(puVar5 + 2) = param_2;
    *(undefined8 *)(puVar5 + 6) = 0;
    *(undefined8 *)(puVar5 + 4) = 0;
    if ((*(code **)(param_2 + 8) == (code *)0x0) ||
       (iVar3 = (**(code **)(param_2 + 8))(puVar5), iVar3 != 0)) {
      *(long *)(puVar5 + 6) = param_1;
      iVar3 = FUN_100c604e0(*(undefined8 *)(param_1 + 0x10),puVar5);
      if (iVar3 != 0) {
        return puVar5;
      }
      if ((*(long *)(puVar5 + 2) != 0) &&
         (pcVar2 = *(code **)(*(long *)(puVar5 + 2) + 0x10), pcVar2 != (code *)0x0)) {
        (*pcVar2)(puVar5);
      }
    }
    FUN_100bf3910(puVar5);
    return (undefined4 *)0x0;
  }
  return (undefined4 *)0x0;
}

