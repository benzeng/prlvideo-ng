
undefined8 FUN_1008a9b50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_10081ddd0(0xd0,"ameth_lib.c",0x11d);
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
  if (((DAT_1011c2978 != 0) || (DAT_1011c2978 = FUN_100884d30(FUN_1008a9b40), DAT_1011c2978 != 0))
     && (iVar1 = FUN_1008852e0(DAT_1011c2978,puVar2), iVar1 != 0)) {
    FUN_100885680(DAT_1011c2978);
    return 1;
  }
  if ((*(byte *)(puVar2 + 2) & 2) != 0) {
    if (*(long *)(puVar2 + 4) != 0) {
      FUN_10081e1a0();
    }
    if (*(long *)(puVar2 + 6) != 0) {
      FUN_10081e1a0();
    }
    FUN_10081e1a0(puVar2);
  }
  return 0;
}

