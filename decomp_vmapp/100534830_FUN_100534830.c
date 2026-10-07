
undefined8 FUN_100534830(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  
  uVar2 = 0xf0000003;
  if (7 < *(ushort *)(param_2 + 0x14)) {
    lVar3 = FUN_1002a6010(param_2);
    uVar1 = *(undefined4 *)(lVar3 + 4);
    puVar4 = (undefined4 *)FUN_1002a6010(param_2);
    FUN_10053f0a0(*(long *)(param_1 + 0x40) + 0x30,uVar1);
    *puVar4 = 0;
    uVar2 = 0;
  }
  return uVar2;
}

