
void FUN_1005b0970(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  *(undefined4 *)(lVar4 + 0x38) = 0;
  uVar3 = 0;
  uVar5 = *(uint *)(param_1 + 8) & 0xfc;
  if (uVar5 != 0) {
    FUN_1008e3970("","vdisk",0,"Group[%u] reading failed, dio error = 0x%X, sys. error = 0x%X",
                  *(undefined4 *)(lVar1 + 0x38),uVar5,*(undefined4 *)(param_1 + 0x28));
    lVar4 = *(long *)(lVar1 + 0x20);
    *(undefined4 *)(lVar4 + 0x38) = 0x80021029;
    uVar3 = 0x80021029;
  }
  FUN_1005aca50(*puVar2,lVar1,lVar4 + 0x40,uVar3);
  FUN_10070aec0(param_1);
  return;
}

