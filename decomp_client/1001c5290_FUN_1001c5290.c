
void FUN_1001c5290(int param_1)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  
  uVar1 = DAT_102310908;
  if (param_1 == 1) {
    cVar2 = FUN_1001c5c80();
  }
  else {
    if (param_1 != 2) {
      return;
    }
    cVar2 = FUN_1001c5c70();
    if (cVar2 == '\0') {
      return;
    }
    cVar3 = FUN_1001c4dd0(uVar1);
    cVar2 = FUN_1001c5c80();
    if (cVar3 != '\0') {
      if (cVar2 != '\0') {
        return;
      }
      FUN_1001c6010(1);
      return;
    }
  }
  if (cVar2 == '\0') {
    return;
  }
  FUN_1001c6400();
  return;
}

