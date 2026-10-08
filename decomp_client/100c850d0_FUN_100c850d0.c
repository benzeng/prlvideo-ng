
undefined8 FUN_100c850d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_100bf3540(0xd0,"ameth_lib.c",0x11d);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  ___bzero(puVar2,0xd0);
  *puVar2 = param_2;
  *(undefined8 *)(puVar2 + 2) = 3;
  *(undefined8 *)(puVar2 + 0x32) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(undefined8 *)(puVar2 + 0x2e) = 0;
  *(undefined8 *)(puVar2 + 0x2c) = 0;
  *(undefined8 *)(puVar2 + 0x2a) = 0;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  ___bzero(puVar2 + 4,0x88);
  puVar2[1] = param_1;
  if (((DAT_1023183b8 != 0) || (DAT_1023183b8 = FUN_100c5ff30(FUN_100c850c0), DAT_1023183b8 != 0))
     && (iVar1 = FUN_100c604e0(DAT_1023183b8,puVar2), iVar1 != 0)) {
    FUN_100c60880(DAT_1023183b8);
    return 1;
  }
  if ((*(byte *)(puVar2 + 2) & 2) != 0) {
    if (*(long *)(puVar2 + 4) != 0) {
      FUN_100bf3910();
    }
    if (*(long *)(puVar2 + 6) != 0) {
      FUN_100bf3910();
    }
    FUN_100bf3910(puVar2);
  }
  return 0;
}

