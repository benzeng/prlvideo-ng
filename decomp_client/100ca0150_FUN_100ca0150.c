
undefined8 FUN_100ca0150(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_100c93210();
  uVar2 = FUN_100c9e4f0(uVar1,0x55,0,0);
  uVar3 = FUN_100c9ff20(*(undefined8 *)(*param_1 + 0x20),uVar2);
  FUN_100c60790(uVar2,FUN_100ca0960);
  FUN_100c60790(uVar1,FUN_100c86400);
  return uVar3;
}

