
undefined8 FUN_10051c450(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1002a6120(param_2,0,1);
  uVar3 = 0xf000001c;
  if (lVar2 != 0) {
    lVar1 = *param_3;
    uVar3 = 0xf0000009;
    if (*(int *)(lVar1 + 4) <= *(int *)(lVar2 + 8)) {
      uVar3 = 0;
      FUN_1002a5a50(lVar2,0,lVar1 + *(long *)(lVar1 + 0x10));
    }
  }
  return uVar3;
}

