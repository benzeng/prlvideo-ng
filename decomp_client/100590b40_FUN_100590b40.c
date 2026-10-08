
void FUN_100590b40(long param_1)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  
  lVar1 = param_1 + 0x18;
  cVar2 = FUN_1005a5f40(lVar1);
  if (cVar2 != '\0') {
    CAuthorizationLock::setLockState
              (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x58),0);
  }
  bVar3 = FUN_1005a5f40(lVar1);
  FUN_1005a5f70(lVar1,bVar3 ^ 1);
  return;
}

