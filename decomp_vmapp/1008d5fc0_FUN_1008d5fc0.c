
undefined8 *
FUN_1008d5fc0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)FUN_1008d6700();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100887ce0(0x23,0x75,0x41,"p12_add.c",0x48);
  }
  else {
    uVar2 = FUN_100821870(param_3);
    *puVar1 = uVar2;
    lVar3 = FUN_1008b1140(param_1,param_2,puVar1 + 1);
    if (lVar3 == 0) {
      uVar2 = 0x4d;
    }
    else {
      puVar4 = (undefined8 *)FUN_1008d6780();
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = puVar1;
        uVar2 = FUN_100821870(param_4);
        *puVar4 = uVar2;
        return puVar4;
      }
      uVar2 = 0x51;
    }
    FUN_100887ce0(0x23,0x75,0x41,"p12_add.c",uVar2);
    FUN_1008d6720(puVar1);
  }
  return (undefined8 *)0x0;
}

