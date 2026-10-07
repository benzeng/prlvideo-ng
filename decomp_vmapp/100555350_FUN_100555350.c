
undefined1 FUN_100555350(long param_1)

{
  undefined1 uVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
    FUN_1008e3970("","TransMem",0,"CSnapshotEngineBase::process_video() stopped");
  }
  else if (**(char **)(param_1 + 0x18) == '\0') {
    uVar1 = FUN_100555db0();
  }
  else {
    uVar1 = FUN_1005553b0();
  }
  return uVar1;
}

