
undefined8 FUN_1002a1480(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = CVmSoundDevice::getSoundOutputs();
  uVar2 = 0x80000106;
  if (lVar1 != 0) {
    lVar1 = CVmSoundDevice::getSoundOutputs();
    if (*(int *)(*(long *)(lVar1 + 0xa8) + 0xc) != *(int *)(*(long *)(lVar1 + 0xa8) + 8)) {
      lVar1 = CVmSoundDevice::getSoundOutputs();
      if (*(long *)(*(long *)(lVar1 + 0xa8) + 0x10 + (long)*(int *)(*(long *)(lVar1 + 0xa8) + 8) * 8
                   ) != 0) {
        lVar1 = CVmSoundDevice::getSoundInputs();
        if (lVar1 != 0) {
          lVar1 = CVmSoundDevice::getSoundInputs();
          if (*(int *)(*(long *)(lVar1 + 0xa8) + 0xc) != *(int *)(*(long *)(lVar1 + 0xa8) + 8)) {
            lVar1 = CVmSoundDevice::getSoundInputs();
            if (*(long *)(*(long *)(lVar1 + 0xa8) + 0x10 +
                         (long)*(int *)(*(long *)(lVar1 + 0xa8) + 8) * 8) != 0) {
              if (param_2 != (undefined8 *)0x0) {
                lVar1 = CVmSoundDevice::getSoundOutputs();
                *param_2 = *(undefined8 *)
                            (*(long *)(lVar1 + 0xa8) + 0x10 +
                            (long)*(int *)(*(long *)(lVar1 + 0xa8) + 8) * 8);
              }
              uVar2 = 0;
              if (param_3 != (undefined8 *)0x0) {
                lVar1 = CVmSoundDevice::getSoundInputs();
                *param_3 = *(undefined8 *)
                            (*(long *)(lVar1 + 0xa8) + 0x10 +
                            (long)*(int *)(*(long *)(lVar1 + 0xa8) + 8) * 8);
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

