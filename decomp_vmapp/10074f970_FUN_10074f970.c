
void FUN_10074f970(int param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_1008e3970("","Compression",0,"signalWrap::signalHandler(): signal %d(%x,%p) from %d!",param_1,
                *(undefined4 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18),
                *(undefined4 *)(param_2 + 0xc));
  puVar2 = (undefined8 *)(*(code *)PTR___tlv_bootstrap_1011b61b8)();
  piVar1 = (int *)*puVar2;
  if ((*(int *)(param_2 + 0xc) == 0) && (piVar1 != (int *)0x0)) {
    if (*(char *)((long)piVar1 + 0x2b1) != '\0') {
                    /* WARNING: Subroutine does not return */
      _siglongjmp(piVar1,param_1);
    }
  }
  else if (piVar1 == (int *)0x0) {
    _kill(0,6);
    return;
  }
  FUN_10074fa30();
  return;
}

