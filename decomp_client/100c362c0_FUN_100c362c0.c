
void FUN_100c362c0(long *param_1)

{
  undefined8 *puVar1;
  long *ptr;
  undefined8 *puVar2;
  code *pcVar3;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  pcVar3 = *(code **)(*param_1 + 0x18);
  if ((pcVar3 != (code *)0x0) || (pcVar3 = *(code **)(*param_1 + 0x10), pcVar3 != (code *)0x0)) {
    (*pcVar3)(param_1);
  }
  puVar2 = (undefined8 *)param_1[0xc];
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    (*(code *)puVar2[4])(puVar2[1]);
    FUN_100bf3910(puVar2);
    puVar2 = puVar1;
  }
  param_1[0xc] = 0;
  ptr = (long *)param_1[1];
  if (ptr != (long *)0x0) {
    pcVar3 = *(code **)(*ptr + 0x58);
    if ((pcVar3 != (code *)0x0) || (pcVar3 = *(code **)(*ptr + 0x50), pcVar3 != (code *)0x0)) {
      (*pcVar3)(ptr);
    }
    _OPENSSL_cleanse(ptr,0x58);
    FUN_100bf3910(ptr);
  }
  FUN_100c26640(param_1 + 2);
  FUN_100c26640(param_1 + 5);
  if ((void *)param_1[10] != (void *)0x0) {
    _OPENSSL_cleanse((void *)param_1[10],param_1[0xb]);
    FUN_100bf3910(param_1[10]);
  }
  _OPENSSL_cleanse(param_1,0xe8);
  FUN_100bf3910(param_1);
  return;
}

