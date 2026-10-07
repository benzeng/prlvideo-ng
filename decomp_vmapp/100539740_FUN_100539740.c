
char FUN_100539740(long param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  undefined4 local_830;
  undefined4 local_82c;
  uint local_828;
  
  ___bzero(&local_830,0x808);
  local_830 = 0x103;
  local_828 = param_3 & 0xff;
  local_82c = param_2;
  cVar1 = FUN_100539490(*(undefined8 *)(param_1 + 0x38),&local_830,5000);
  if ((cVar1 == '\0') && (0 < DAT_1011b55f8)) {
    FUN_1008e3970("","InvSharingHost",1,"syncCommand() failed");
  }
  return cVar1;
}

