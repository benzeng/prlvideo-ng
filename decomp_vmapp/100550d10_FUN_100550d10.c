
undefined1 FUN_100550d10(long param_1)

{
  char cVar1;
  char *pcVar2;
  
  FUN_1008e3970("","TransMem",0,"CGuestMemorySnapshot::uncompress() started");
  if (*(long **)(param_1 + 0x40) == (long *)0x0) {
    pcVar2 = "uncompress() snapshot not valid";
  }
  else {
    cVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
    if (cVar1 == '\0') {
      pcVar2 = "uncompress() process_video failed";
    }
    else {
      cVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x38))();
      if (cVar1 != '\0') {
        FUN_1008e3970("","TransMem",0,"CGuestMemorySnapshot::uncompress() done");
        return 1;
      }
      pcVar2 = "uncompress() process_main failed";
    }
  }
  FUN_1008e3970("","TransMem",0,pcVar2);
  FUN_1008e3970("","TransMem",0,"CGuestMemorySnapshot::uncompress() failed");
  return 0;
}

