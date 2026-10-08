
bool FUN_100caea70(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_100bf7220(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x17) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  else {
    if (iVar1 != 0x18) {
      FUN_100c62ee0(0x21,0x66,0x71,"pk7_lib.c",0x1fb);
      return false;
    }
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  }
  iVar1 = FUN_100c604e0(*puVar2,param_2);
  return iVar1 != 0;
}

