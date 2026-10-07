
undefined8 FUN_1008c7640(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = 0;
  lVar2 = FUN_1008c3cc0(0);
  if (lVar2 == 0) {
    FUN_100887ce0(0x22,0x80,0x83,"v3_sxnet.c",0xed);
    uVar4 = 0;
  }
  else {
    iVar1 = FUN_100885600(*(undefined8 *)(param_1 + 8));
    uVar4 = 0;
    if (0 < iVar1) {
      uVar4 = 0;
      do {
        puVar3 = (undefined8 *)FUN_100885620(*(undefined8 *)(param_1 + 8),iVar5);
        iVar1 = FUN_1008afeb0(*puVar3,lVar2);
        if (iVar1 == 0) {
          uVar4 = puVar3[1];
          break;
        }
        iVar5 = iVar5 + 1;
        iVar1 = FUN_100885600(*(undefined8 *)(param_1 + 8));
      } while (iVar5 < iVar1);
    }
    FUN_1008afd70(lVar2);
  }
  return uVar4;
}

