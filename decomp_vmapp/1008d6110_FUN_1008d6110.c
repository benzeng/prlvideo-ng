
undefined8 *
FUN_1008d6110(uint param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)FUN_1008d6780();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100887ce0(0x23,0x71,0x41,"p12_add.c",0x77);
  }
  else {
    uVar2 = FUN_100821870(0x97);
    *puVar1 = uVar2;
    uVar2 = FUN_100821930(param_1);
    lVar3 = FUN_100890b50(uVar2);
    lVar3 = FUN_1008d7890(~-(uint)(lVar3 == 0) | param_1,lVar3,param_2,param_3,param_4,param_5,
                          param_6,param_7);
    puVar1[1] = lVar3;
    if (lVar3 != 0) {
      return puVar1;
    }
    FUN_100887ce0(0x23,0x71,0x41,"p12_add.c",0x85);
    FUN_1008d67a0(puVar1);
  }
  return (undefined8 *)0x0;
}

