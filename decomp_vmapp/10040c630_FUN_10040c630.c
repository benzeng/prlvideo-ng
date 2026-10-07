
undefined8 FUN_10040c630(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","PrlAudioCore",2,"Trying to attach a stream, in running state.");
    }
    FUN_10040c4b0(param_1);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    _AudioUnitUninitialize();
    _AudioComponentInstanceDispose(*(undefined8 *)(param_1 + 0x30));
    if (*(long **)(param_1 + 0x60) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x48))();
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
  }
  uVar1 = FUN_100409dc0();
  FUN_10040b960(uVar1,*(undefined1 *)(param_1 + 0x44),1);
  *(undefined8 *)(param_1 + 0x30) = 0;
  return 1;
}

