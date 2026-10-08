
void FUN_100daaa90(long param_1,char *param_2)

{
  size_t sVar1;
  char *pcVar2;
  
  sVar1 = _strlen(param_2);
  if ((sVar1 < 0x65) || ((*(byte *)(param_1 + 0x1c) & 1) == 0)) {
    ___strlcpy_chk(param_1 + 0xbd,param_2,100,0xffffffffffffffff);
    if (*(void **)(param_1 + 0x228) != (void *)0x0) {
      _free(*(void **)(param_1 + 0x228));
    }
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  else {
    pcVar2 = _strdup(param_2);
    *(char **)(param_1 + 0x228) = pcVar2;
    *(undefined8 *)(param_1 + 0xbd) = 0x6e6f4c402f2e2f2e;
    *(undefined2 *)(param_1 + 0xc9) = 0x6b;
    *(undefined4 *)(param_1 + 0xc5) = 0x6e694c67;
  }
  return;
}

