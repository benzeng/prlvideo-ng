
undefined4 * FUN_100c98d50(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)FUN_100bf3540(0x90,"x509_lu.c",0xba);
  puVar5 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = FUN_100c5ff30(FUN_100c98e50);
    *(undefined8 *)(puVar2 + 2) = uVar3;
    *puVar2 = 1;
    uVar3 = FUN_100c60010();
    *(undefined8 *)(puVar2 + 4) = uVar3;
    *(undefined8 *)(puVar2 + 10) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    lVar4 = FUN_100c9c450();
    *(long *)(puVar2 + 6) = lVar4;
    puVar5 = (undefined4 *)0x0;
    if (lVar4 != 0) {
      *(undefined8 *)(puVar2 + 0x1c) = 0;
      *(undefined8 *)(puVar2 + 0x1a) = 0;
      *(undefined8 *)(puVar2 + 0x18) = 0;
      *(undefined8 *)(puVar2 + 0x16) = 0;
      *(undefined8 *)(puVar2 + 0x14) = 0;
      *(undefined8 *)(puVar2 + 0x12) = 0;
      *(undefined8 *)(puVar2 + 0x10) = 0;
      *(undefined8 *)(puVar2 + 0xe) = 0;
      *(undefined8 *)(puVar2 + 0xc) = 0;
      iVar1 = FUN_100bf50a0(4,puVar2,puVar2 + 0x1e);
      if (iVar1 == 0) {
        FUN_100c5ffd0(*(undefined8 *)(puVar2 + 2));
        FUN_100bf3910(puVar2);
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar2[0x22] = 1;
        puVar5 = puVar2;
      }
    }
  }
  return puVar5;
}

