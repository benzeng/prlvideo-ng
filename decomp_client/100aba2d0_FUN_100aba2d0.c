
void FUN_100aba2d0(undefined8 *param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  pvVar2 = operator_new(1);
  *param_1 = pvVar2;
  cVar1 = _NSApplicationLoad();
  if (cVar1 == '\0') {
    pcVar3 = "NSApplicationLoad() failed";
    uVar4 = 0;
  }
  else {
    if (DAT_10230ffd0 < 2) {
      return;
    }
    pcVar3 = "NSApplicationLoad() succeeded";
    uVar4 = 2;
  }
  FUN_100df99c0("","ShellIntClient",uVar4,pcVar3);
  return;
}

