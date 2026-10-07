
void FUN_100289610(long param_1,long param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  
  puVar1 = (undefined8 *)FUN_100289760(*(undefined1 *)(*(long *)(param_2 + 0x88) + 3));
  bVar2 = *(byte *)((long)puVar1 + 0x11);
  if ((code *)*puVar1 != (code *)0x0) {
    if (bVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100289653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(*(undefined8 *)(param_1 + 0x98),param_2);
      return;
    }
    bVar2 = 0;
  }
  _memcpy((void *)(param_2 + 8),*(void **)(param_2 + 0x88),(ulong)bVar2);
  bVar3 = 5;
  if (bVar2 != 0) {
    bVar3 = bVar2 >> 2;
  }
  *(byte *)(param_2 + 10) = bVar3;
  *(undefined2 *)(param_2 + 0x16) = 1;
  *(undefined4 *)(param_2 + 0x18) = 0;
  if (DAT_1011b55f8 < 2) {
    return;
  }
  FUN_1008e3970("","LocalDevices",2,"[hba] unhandled 0x%02X",
                *(undefined1 *)(*(long *)(param_2 + 0x88) + 3));
  return;
}

