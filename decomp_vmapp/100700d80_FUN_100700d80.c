
void * FUN_100700d80(uint param_1,undefined *param_2)

{
  int *piVar1;
  void *pvVar2;
  
  if (param_1 < 3) {
    pvVar2 = _calloc(1,0x20);
    if (param_2 == (undefined *)0x0) {
      param_2 = PTR__strcmp_100ba2620;
    }
    *(undefined **)((long)pvVar2 + 0x10) = param_2;
    *(uint *)((long)pvVar2 + 0x18) = param_1;
  }
  else {
    piVar1 = ___error();
    *piVar1 = 0x16;
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}

