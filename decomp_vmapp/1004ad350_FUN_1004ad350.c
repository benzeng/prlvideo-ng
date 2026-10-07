
void FUN_1004ad350(long param_1,char param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  long local_28;
  
  if (1 < DAT_1011b55f8) {
    pcVar4 = "UNAVAILABLE";
    if (param_2 != '\0') {
      pcVar4 = "AVAILABLE";
    }
    FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"SendCoherenceToolAvailabilityToClients %s",pcVar4);
  }
  local_28 = 0;
  if (param_2 == '\0') {
    uVar3 = 9;
    lVar2 = 0;
    uVar1 = 0;
  }
  else {
    lVar2 = param_1 + 0x140;
    uVar3 = 8;
    uVar1 = 0x10;
  }
  FUN_1004b43e0(&local_28,uVar3,lVar2,uVar1);
  if (local_28 != 0) {
    FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),param_3);
  }
  return;
}

