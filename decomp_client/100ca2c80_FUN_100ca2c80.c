
undefined8 FUN_100ca2c80(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_100c8b370(2);
  if ((lVar2 == 0) || (iVar1 = FUN_100c76820(lVar2,param_2), iVar1 == 0)) {
    FUN_100c62ee0(0x22,0x81,0x41,"v3_sxnet.c",0xfa);
    FUN_100c8b2f0(lVar2);
    uVar5 = 0;
  }
  else {
    iVar1 = FUN_100c60800(*(undefined8 *)(param_1 + 8));
    iVar4 = 0;
    uVar5 = 0;
    if (0 < iVar1) {
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)FUN_100c60820(*(undefined8 *)(param_1 + 8),iVar4);
        iVar1 = FUN_100c8b430(*puVar3,lVar2);
        if (iVar1 == 0) {
          uVar5 = puVar3[1];
          break;
        }
        iVar4 = iVar4 + 1;
        iVar1 = FUN_100c60800(*(undefined8 *)(param_1 + 8));
      } while (iVar4 < iVar1);
    }
    FUN_100c8b2f0(lVar2);
  }
  return uVar5;
}

