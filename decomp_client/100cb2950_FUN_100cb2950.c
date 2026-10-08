
undefined8 *
FUN_100cb2950(uint param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)FUN_100cb2fc0();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100c62ee0(0x23,0x71,0x41,"p12_add.c",0x77);
  }
  else {
    uVar2 = FUN_100bf6fe0(0x97);
    *puVar1 = uVar2;
    uVar2 = FUN_100bf70a0(param_1);
    lVar3 = FUN_100c6bd50(uVar2);
    lVar3 = FUN_100cb40d0(~-(uint)(lVar3 == 0) | param_1,lVar3,param_2,param_3,param_4,param_5,
                          param_6,param_7);
    puVar1[1] = lVar3;
    if (lVar3 != 0) {
      return puVar1;
    }
    FUN_100c62ee0(0x23,0x71,0x41,"p12_add.c",0x85);
    FUN_100cb2fe0(puVar1);
  }
  return (undefined8 *)0x0;
}

