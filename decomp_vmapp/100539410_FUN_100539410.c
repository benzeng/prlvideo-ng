
char FUN_100539410(long param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_828;
  undefined4 local_824;
  
  ___bzero(&local_828,0x808);
  local_828 = 0x104;
  local_824 = param_2;
  cVar1 = FUN_100539490(*(undefined8 *)(param_1 + 0x38),&local_828,5000);
  if (cVar1 == '\0') {
    FUN_1008e3970("","InvSharingHost",0,"syncCommand() failed");
  }
  return cVar1;
}

