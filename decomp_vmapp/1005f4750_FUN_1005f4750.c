
void FUN_1005f4750(long param_1,ulong param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    iVar2 = FUN_1007db880(*puVar1,(int)((param_2 - 1) + ((ulong)param_3 + 0x1ff >> 9) >>
                                       (*(byte *)(puVar1 + 1) & 0x3f)) + 1,
                          param_2 >> (*(byte *)(puVar1 + 1) & 0x3f) & 0xffffffff);
    if (iVar2 != 0) {
      uVar3 = 0x80000003;
      if (iVar2 != -0x16) {
        if (iVar2 == -0xc) {
          uVar3 = 0x80000002;
        }
        else {
          uVar3 = 0x80000001;
        }
      }
      FUN_1008e3970("","vdisk",0,"Error write to tracking bitmap: %x - drop traking",uVar3);
      puVar1 = *(undefined8 **)(param_1 + 0x18);
      if (puVar1 != (undefined8 *)0x0) {
        FUN_1007dade0(*puVar1);
        operator_delete(puVar1);
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  return;
}

