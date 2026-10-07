
undefined8 FUN_1008ab530(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined4 *)FUN_10081ddd0(0x60,"bio_asn1.c",0x95);
  uVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    lVar2 = FUN_10081ddd0(0x14,"bio_asn1.c",0xa4);
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 == 0) {
      FUN_10081e1a0(puVar1);
    }
    else {
      puVar1[4] = 0x14;
      *(undefined8 *)(puVar1 + 7) = 0;
      *(undefined8 *)(puVar1 + 5) = 0;
      puVar1[9] = 4;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 0x14) = 0;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      *(undefined4 *)(param_1 + 0x18) = 1;
      *(undefined4 **)(param_1 + 0x30) = puVar1;
      *(undefined4 *)(param_1 + 0x20) = 0;
      uVar3 = 1;
    }
  }
  return uVar3;
}

