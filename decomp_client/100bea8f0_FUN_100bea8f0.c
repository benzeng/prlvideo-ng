
void FUN_100bea8f0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_100bf2780(5,0x10,"ssl_ciph.c",0x1c8);
  if (DAT_102315fe8 == 0) {
    FUN_100bf2780(6,0x10,"ssl_ciph.c",0x1ca);
    FUN_100bf2780(9,0x10,"ssl_ciph.c",0x1cb);
    if (DAT_102315fe8 == 0) {
      FUN_100bf3a80(3);
      DAT_102315fe8 = FUN_100c5ff30(FUN_100becc40);
      if (DAT_102315fe8 != 0) {
        puVar1 = (undefined4 *)FUN_100bf3540(0x18,"ssl_ciph.c",0x1d4);
        if (puVar1 != (undefined4 *)0x0) {
          piVar2 = (int *)FUN_100cb4400();
          *(int **)(puVar1 + 4) = piVar2;
          if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
            *puVar1 = 1;
            *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(piVar2 + 2);
            FUN_100c604e0(DAT_102315fe8,puVar1);
          }
          else {
            FUN_100bf3910(puVar1);
          }
        }
        FUN_100c60880(DAT_102315fe8);
      }
      FUN_100bf3a80(2);
    }
    uVar4 = 10;
    uVar3 = 0x1e6;
  }
  else {
    uVar4 = 6;
    uVar3 = 0x1e8;
  }
  FUN_100bf2780(uVar4,0x10,"ssl_ciph.c",uVar3);
  return;
}

