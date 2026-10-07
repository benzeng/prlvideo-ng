
void FUN_10053df50(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  undefined4 local_830;
  undefined4 local_82c;
  undefined4 local_828;
  
  lVar2 = *(long *)*param_1;
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  ___bzero(&local_830,0x808);
  local_830 = 0x103;
  local_828 = 1;
  local_82c = uVar1;
  cVar3 = FUN_100539490(*(undefined8 *)(lVar2 + 0x38),&local_830,5000);
  if ((cVar3 == '\0') && (0 < DAT_1011b55f8)) {
    FUN_1008e3970("","InvSharingHost",1,"syncCommand() failed");
  }
  if (cVar3 == '\0' && 0 < DAT_1011b55f8) {
    FUN_1008e3970("","InvSharingHost",1,"guestUnmount() failed, id = %u",
                  *(undefined4 *)(param_2 + 0x20));
  }
  return;
}

