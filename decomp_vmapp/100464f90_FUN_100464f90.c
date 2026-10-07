
undefined1 FUN_100464f90(long param_1,float *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long local_38;
  long lStack_30;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar4 = 0;
  }
  else {
    local_38 = 0;
    lStack_30 = 0;
    lVar2 = _IOPSCopyPowerSourcesInfo();
    lVar3 = 0;
    local_38 = lVar2;
    if (lVar2 != 0) {
      lVar3 = _IOPSCopyPowerSourcesList(lVar2);
      lStack_30 = lVar3;
    }
    cVar1 = FUN_1004643e0(&local_38,*(undefined8 *)(param_1 + 0x18),param_2);
    if (cVar1 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
      if (1 < DAT_1011b55f8) {
        uVar4 = 1;
        FUN_1008e3970(SUB84((double)*param_2,0),"","BattWatcher",2,"Charge ratio (PS): %f");
      }
    }
    if (lVar3 != 0) {
      _CFRelease(lVar3);
    }
    if (lVar2 != 0) {
      _CFRelease(lVar2);
    }
  }
  return uVar4;
}

