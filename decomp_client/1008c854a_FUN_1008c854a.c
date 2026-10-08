
long FUN_1008c854a(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long local_10;
  
  local_10 = 0;
  iVar1 = FUN_1008c894e(**(undefined1 **)(*(long *)(param_1 + 0x38) + 0x20));
  if (((((iVar1 != 0x53) ||
        (iVar1 = FUN_1008c894e(*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1)),
        iVar1 != 0x59)) ||
       (iVar1 = FUN_1008c894e(*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2)),
       iVar1 != 0x53)) ||
      ((iVar1 = FUN_1008c894e(*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3)),
       iVar1 != 0x54 ||
       (iVar1 = FUN_1008c894e(*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4)),
       iVar1 != 0x45)))) ||
     (iVar1 = FUN_1008c894e(*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5)),
     iVar1 != 0x4d)) {
    iVar1 = FUN_1008c894e(**(undefined1 **)(*(long *)(param_1 + 0x38) + 0x20));
    if ((((iVar1 == 0x50) &&
         (iVar1 = FUN_1008c894e(*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1)),
         iVar1 == 0x55)) &&
        (iVar1 = FUN_1008c894e(*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2)),
        iVar1 == 0x42)) &&
       (((iVar1 = FUN_1008c894e(*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3)),
         iVar1 == 0x4c &&
         (iVar1 = FUN_1008c894e(*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4)),
         iVar1 == 0x49)) &&
        (iVar1 = FUN_1008c894e(*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5)),
        iVar1 == 0x43)))) {
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 6;
      *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6;
      *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 6;
      if (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != ' ') &&
          ((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 9 ||
           (10 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))))) &&
         (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\r')) {
        FUN_1008c3ec0(param_1,0x41,"Space required after \'PUBLIC\'\n",0,0);
      }
      FUN_1008c47ba(param_1);
      lVar2 = FUN_1008c786d(param_1);
      *param_2 = lVar2;
      if (*param_2 == 0) {
        FUN_1008c3ec0(param_1,0x47,"htmlParseExternalID: PUBLIC, no Public Identifier\n",0,0);
      }
      FUN_1008c47ba(param_1);
      if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\"') ||
         (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\'')) {
        local_10 = FUN_1008c75c1(param_1);
      }
    }
    return local_10;
  }
  *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 6;
  *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6;
  *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 6;
  if (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != ' ') &&
      ((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 9 ||
       (10 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))))) &&
     (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\r')) {
    FUN_1008c3ec0(param_1,0x41,"Space required after \'SYSTEM\'\n",0,0);
  }
  FUN_1008c47ba(param_1);
  lVar2 = FUN_1008c75c1(param_1);
  if (lVar2 != 0) {
    return lVar2;
  }
  FUN_1008c3ec0(param_1,0x46,"htmlParseExternalID: SYSTEM, no URI\n",0,0);
  return 0;
}

