
undefined8 FUN_1008d29a0(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_100821870(param_2);
  switch(param_2) {
  case 0x15:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    lVar3 = FUN_1008afdf0(4);
    *(long *)(param_1 + 0x20) = lVar3;
    if (lVar3 != 0) {
      return 1;
    }
    break;
  case 0x16:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    puVar4 = (undefined8 *)FUN_1008d2280();
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      iVar1 = FUN_10089b2a0(*puVar4,1);
      if (iVar1 != 0) {
        return 1;
      }
      FUN_1008d22a0(*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    break;
  case 0x17:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    puVar4 = (undefined8 *)FUN_1008d2400();
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if ((puVar4 != (undefined8 *)0x0) && (iVar1 = FUN_10089b2a0(*puVar4,0), iVar1 != 0)) {
      uVar2 = FUN_100821870(0x15);
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x10);
LAB_1008d2b4e:
      *puVar4 = uVar2;
      return 1;
    }
    break;
  case 0x18:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    puVar4 = (undefined8 *)FUN_1008d2580();
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_10089b2a0(*puVar4,1);
      iVar1 = FUN_10089b2a0(**(undefined8 **)(param_1 + 0x20),1);
      if (iVar1 != 0) {
        uVar2 = FUN_100821870(0x15);
        puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x28);
        goto LAB_1008d2b4e;
      }
    }
    break;
  case 0x19:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    puVar4 = (undefined8 *)FUN_1008d2680();
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if ((puVar4 != (undefined8 *)0x0) && (iVar1 = FUN_10089b2a0(*puVar4,0), iVar1 != 0)) {
      return 1;
    }
    break;
  case 0x1a:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    puVar4 = (undefined8 *)FUN_1008d2600();
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if ((puVar4 != (undefined8 *)0x0) && (iVar1 = FUN_10089b2a0(*puVar4,0), iVar1 != 0)) {
      uVar2 = FUN_100821870(0x15);
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 8);
      goto LAB_1008d2b4e;
    }
    break;
  default:
    FUN_100887ce0(0x21,0x6e,0x70,"pk7_lib.c",0xde);
  }
  return 0;
}

