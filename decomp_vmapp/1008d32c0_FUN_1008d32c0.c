
long FUN_1008d32c0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_1008d2480();
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = FUN_1008d3360(lVar2,param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_100821ab0(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 0x17) {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    }
    else {
      if (iVar1 != 0x18) {
        FUN_100887ce0(0x21,0x66,0x71,"pk7_lib.c",0x1fb);
        goto LAB_1008d3348;
      }
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    }
    iVar1 = FUN_1008852e0(*puVar3,lVar2);
    if (iVar1 != 0) {
      return lVar2;
    }
  }
LAB_1008d3348:
  FUN_1008d24a0(lVar2);
  return 0;
}

