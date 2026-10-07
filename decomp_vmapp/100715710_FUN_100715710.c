
undefined8 * FUN_100715710(void)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  
  puVar2 = _malloc(0x78);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xe] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    iVar1 = FUN_100714a30();
    if (iVar1 - 4U < 3) {
      pcVar3 = "pvcps1";
    }
    else if (iVar1 - 7U < 2) {
      pcVar3 = "pdv1";
    }
    else if (iVar1 == 9) {
      pcVar3 = "pcss1";
    }
    else {
      pcVar3 = "vz2";
    }
    puVar2[1] = pcVar3;
    *puVar2 = 0xffffffffffffffff;
  }
  return puVar2;
}

