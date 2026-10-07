
void FUN_100538370(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 local_820 [514];
  
  LOCK();
  piVar1 = (int *)(*(long *)(param_1 + 0x40) + 0x20);
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 0) {
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","InvSharingHost",2,"stopping: inversed sharing is not running");
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = 1;
    ___bzero(local_820,0x808);
    local_820[0] = 0x105;
    cVar3 = FUN_100539490(*(undefined8 *)(param_1 + 0x38),local_820,5000);
    if (cVar3 == '\0') {
      FUN_1008e3970("","InvSharingHost",0,"syncCommand() failed");
    }
    FUN_1005353d0(*(undefined8 *)(param_1 + 0x38));
    FUN_100040d30(*(undefined8 *)(param_1 + 0x30));
    FUN_1005355f0(*(long *)(param_1 + 0x40) + 0x30,0);
    *(undefined1 *)(param_1 + 0x48) = 0;
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","InvSharingHost",2,"inversed sharing has been stopped");
    }
  }
  return;
}

