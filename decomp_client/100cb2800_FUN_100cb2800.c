
undefined8 *
FUN_100cb2800(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)FUN_100cb2f40();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100c62ee0(0x23,0x75,0x41,"p12_add.c",0x48);
  }
  else {
    uVar2 = FUN_100bf6fe0(param_3);
    *puVar1 = uVar2;
    lVar3 = FUN_100c8c6c0(param_1,param_2,puVar1 + 1);
    if (lVar3 == 0) {
      uVar2 = 0x4d;
    }
    else {
      puVar4 = (undefined8 *)FUN_100cb2fc0();
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = puVar1;
        uVar2 = FUN_100bf6fe0(param_4);
        *puVar4 = uVar2;
        return puVar4;
      }
      uVar2 = 0x51;
    }
    FUN_100c62ee0(0x23,0x75,0x41,"p12_add.c",uVar2);
    FUN_100cb2f60(puVar1);
  }
  return (undefined8 *)0x0;
}

