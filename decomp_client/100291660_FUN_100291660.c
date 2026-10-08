
undefined8 FUN_100291660(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_30 [32];
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    FUN_100d969d0(local_30);
    FUN_100d96fc0(local_30);
    cVar1 = FUN_100d95f40(local_30);
    FUN_100d96c00(local_30);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  cVar1 = FUN_1001c1e50(0,0);
  uVar2 = 0x80000005;
  if (cVar1 != '\0') {
    uVar2 = 0;
  }
  return uVar2;
}

