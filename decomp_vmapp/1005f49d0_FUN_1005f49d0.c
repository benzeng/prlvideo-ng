
undefined8 FUN_1005f49d0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  uVar4 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    if (*(undefined8 **)(param_1 + 0x20) == (undefined8 *)0x0) {
      FUN_1007dade0(*puVar1);
      operator_delete(puVar1);
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      iVar3 = FUN_1007db010(**(undefined8 **)(param_1 + 0x20),*puVar1);
      if (iVar3 == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
      }
      else {
        uVar4 = 0x80000003;
        if (iVar3 != -0x16) {
          if (iVar3 == -0xc) {
            uVar4 = 0x80000002;
          }
          else {
            uVar4 = 0x80000001;
          }
        }
        FUN_1008e3970("","vdisk",0,"Error merging: %x, drop tracking and backup bitmaps",uVar4);
        puVar1 = *(undefined8 **)(param_1 + 0x18);
        if (puVar1 != (undefined8 *)0x0) {
          FUN_1007dade0(*puVar1);
          operator_delete(puVar1);
        }
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
    }
  }
  FUN_1005f4960(param_1);
  return uVar4;
}

