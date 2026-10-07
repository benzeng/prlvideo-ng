
void FUN_100815180(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_10081d010(5,0x10,"ssl_ciph.c",0x1c8);
  if (DAT_1011c05f8 == 0) {
    FUN_10081d010(6,0x10,"ssl_ciph.c",0x1ca);
    FUN_10081d010(9,0x10,"ssl_ciph.c",0x1cb);
    if (DAT_1011c05f8 == 0) {
      FUN_10081e310(3);
      DAT_1011c05f8 = FUN_100884d30(FUN_1008174d0);
      if (DAT_1011c05f8 != 0) {
        puVar1 = (undefined4 *)FUN_10081ddd0(0x18,"ssl_ciph.c",0x1d4);
        if (puVar1 != (undefined4 *)0x0) {
          piVar2 = (int *)FUN_1008d7bc0();
          *(int **)(puVar1 + 4) = piVar2;
          if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
            *puVar1 = 1;
            *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(piVar2 + 2);
            FUN_1008852e0(DAT_1011c05f8,puVar1);
          }
          else {
            FUN_10081e1a0(puVar1);
          }
        }
        FUN_100885680(DAT_1011c05f8);
      }
      FUN_10081e310(2);
    }
    uVar4 = 10;
    uVar3 = 0x1e6;
  }
  else {
    uVar4 = 6;
    uVar3 = 0x1e8;
  }
  FUN_10081d010(uVar4,0x10,"ssl_ciph.c",uVar3);
  return;
}

