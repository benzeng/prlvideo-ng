
undefined8 FUN_100cadf20(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_100bf6fe0(param_2);
  switch(param_2) {
  case 0x15:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    lVar3 = FUN_100c8b370(4);
    *(long *)(param_1 + 0x20) = lVar3;
    if (lVar3 != 0) {
      return 1;
    }
    break;
  case 0x16:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    puVar4 = (undefined8 *)FUN_100cad800();
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      iVar1 = FUN_100c76820(*puVar4,1);
      if (iVar1 != 0) {
        return 1;
      }
      FUN_100cad820(*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    break;
  case 0x17:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    puVar4 = (undefined8 *)FUN_100cad980();
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if ((puVar4 != (undefined8 *)0x0) && (iVar1 = FUN_100c76820(*puVar4,0), iVar1 != 0)) {
      uVar2 = FUN_100bf6fe0(0x15);
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x10);
LAB_100cae0ce:
      *puVar4 = uVar2;
      return 1;
    }
    break;
  case 0x18:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    puVar4 = (undefined8 *)FUN_100cadb00();
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_100c76820(*puVar4,1);
      iVar1 = FUN_100c76820(**(undefined8 **)(param_1 + 0x20),1);
      if (iVar1 != 0) {
        uVar2 = FUN_100bf6fe0(0x15);
        puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x28);
        goto LAB_100cae0ce;
      }
    }
    break;
  case 0x19:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    puVar4 = (undefined8 *)FUN_100cadc00();
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if ((puVar4 != (undefined8 *)0x0) && (iVar1 = FUN_100c76820(*puVar4,0), iVar1 != 0)) {
      return 1;
    }
    break;
  case 0x1a:
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    puVar4 = (undefined8 *)FUN_100cadb80();
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    if ((puVar4 != (undefined8 *)0x0) && (iVar1 = FUN_100c76820(*puVar4,0), iVar1 != 0)) {
      uVar2 = FUN_100bf6fe0(0x15);
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 8);
      goto LAB_100cae0ce;
    }
    break;
  default:
    FUN_100c62ee0(0x21,0x6e,0x70,"pk7_lib.c",0xde);
  }
  return 0;
}

