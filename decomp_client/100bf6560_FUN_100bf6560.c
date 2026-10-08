
int FUN_100bf6560(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if (DAT_1023160c8 == 0) {
    FUN_100bf3a80(3);
    DAT_1023160c8 = FUN_100c60010();
    FUN_100bf3a80(2);
    if (DAT_1023160c8 == 0) {
      return 0;
    }
  }
  iVar2 = DAT_1023054b0;
  DAT_1023054b0 = DAT_1023054b0 + 1;
  iVar3 = FUN_100c60800();
  puVar1 = PTR__strcmp_1021e1ca0;
  if (iVar3 < DAT_1023054b0) {
    do {
      FUN_100bf3a80(3);
      puVar4 = (undefined8 *)FUN_100bf3540(0x18,"o_names.c",0x57);
      FUN_100bf3a80(2);
      if (puVar4 == (undefined8 *)0x0) {
        FUN_100c62ee0(8,0x6a,0x41,"o_names.c",0x5a);
        return 0;
      }
      *puVar4 = FUN_100c60ae0;
      puVar4[1] = puVar1;
      puVar4[2] = 0;
      FUN_100bf3a80(3);
      FUN_100c604e0(DAT_1023160c8,puVar4);
      FUN_100bf3a80(2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_1023054b0);
  }
  plVar5 = (long *)FUN_100c60820(DAT_1023160c8,iVar2);
  if (param_1 != 0) {
    *plVar5 = param_1;
  }
  if (param_2 != 0) {
    plVar5[1] = param_2;
  }
  if (param_3 != 0) {
    plVar5[2] = param_3;
  }
  return iVar2;
}

