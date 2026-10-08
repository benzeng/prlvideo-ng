
long FUN_1000b6b00(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_100370280();
  lVar2 = FUN_1003704b0(uVar1,param_1 + 0x20,DAT_100e152b8);
  lVar3 = lVar2;
  if ((lVar2 != 0) && (lVar3 = 0, (*(byte *)(*(long *)(lVar2 + 0x28) + 9) & 0x80) != 0)) {
    lVar3 = lVar2;
  }
  return lVar3;
}

