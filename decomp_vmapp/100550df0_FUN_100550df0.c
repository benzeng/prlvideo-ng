
char FUN_100550df0(long param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = '\0';
  FUN_1008e3970("","TransMem",0,"CGuestMemorySnapshot::close() started");
  if (*(long *)(param_1 + 0x40) != 0) {
    cVar1 = FUN_100555200(param_1 + 0x30);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  pcVar2 = "failed";
  if (cVar1 != '\0') {
    pcVar2 = "done";
  }
  FUN_1008e3970("","TransMem",0,"CGuestMemorySnapshot::close() %s",pcVar2);
  return cVar1;
}

