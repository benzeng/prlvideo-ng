
undefined8 FUN_100ca2bc0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = 0;
  lVar2 = FUN_100c9f240(0);
  if (lVar2 == 0) {
    FUN_100c62ee0(0x22,0x80,0x83,"v3_sxnet.c",0xed);
    uVar4 = 0;
  }
  else {
    iVar1 = FUN_100c60800(*(undefined8 *)(param_1 + 8));
    uVar4 = 0;
    if (0 < iVar1) {
      uVar4 = 0;
      do {
        puVar3 = (undefined8 *)FUN_100c60820(*(undefined8 *)(param_1 + 8),iVar5);
        iVar1 = FUN_100c8b430(*puVar3,lVar2);
        if (iVar1 == 0) {
          uVar4 = puVar3[1];
          break;
        }
        iVar5 = iVar5 + 1;
        iVar1 = FUN_100c60800(*(undefined8 *)(param_1 + 8));
      } while (iVar5 < iVar1);
    }
    FUN_100c8b2f0(lVar2);
  }
  return uVar4;
}

