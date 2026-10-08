
undefined8 FUN_100cb24d0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined4 *)FUN_100c8b280();
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = FUN_100c80850(param_2,puVar2 + 2,&DAT_102251590);
    *puVar2 = uVar1;
    uVar3 = FUN_100cb10f0(param_1,0xa7,0x10,puVar2);
    return uVar3;
  }
  FUN_100c62ee0(0x21,0x76,0x41,"pk7_attr.c",0x4b);
  return 0;
}

