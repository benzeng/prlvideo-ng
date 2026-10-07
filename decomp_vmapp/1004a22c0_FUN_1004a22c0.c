
undefined * FUN_1004a22c0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)PTR_PTR_10111c948;
  puVar2 = PTR_PTR_10111c948;
  do {
    if (piVar3 == (int *)0x0) {
      return (undefined *)0x0;
    }
    iVar1 = *piVar3;
    while (iVar1 != 0) {
      piVar3 = piVar3 + 1;
      if (iVar1 == param_1) {
        return puVar2;
      }
      iVar1 = *piVar3;
    }
    piVar3 = *(int **)(puVar2 + 0x18);
    puVar2 = puVar2 + 0x18;
  } while( true );
}

