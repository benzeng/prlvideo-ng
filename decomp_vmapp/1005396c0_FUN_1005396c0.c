
char FUN_1005396c0(long param_1)

{
  char cVar1;
  undefined4 local_820 [514];
  
  ___bzero(local_820,0x808);
  local_820[0] = 0x105;
  cVar1 = FUN_100539490(*(undefined8 *)(param_1 + 0x38),local_820,5000);
  if (cVar1 == '\0') {
    FUN_1008e3970("","InvSharingHost",0,"syncCommand() failed");
  }
  return cVar1;
}

