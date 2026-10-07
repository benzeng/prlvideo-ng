
undefined8 FUN_10003dcd0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  lVar2 = FUN_1002a6120(param_2,0,0);
  lVar3 = FUN_1002a6120(param_2,1,0);
  uVar6 = (ulong)*(uint *)(lVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 8);
  uVar5 = 0xf0000009;
  if ((0x13 < uVar6) && (0x13 < uVar1)) {
    pvVar4 = _malloc(uVar6);
    FUN_1002a5990(lVar2,0,pvVar4,uVar6);
    FUN_10003dd90(param_1,pvVar4);
    if ((ulong)*(uint *)((long)pvVar4 + 0x10) + 0x14 <= (ulong)uVar1) {
      FUN_1002a5a50(lVar3,0,pvVar4);
      _free(pvVar4);
      uVar5 = 0;
    }
  }
  return uVar5;
}

