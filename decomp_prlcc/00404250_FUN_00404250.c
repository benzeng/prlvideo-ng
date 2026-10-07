
void FUN_00404250(void)

{
  int *piVar1;
  
  piVar1 = DAT_0061d4e0;
  while (DAT_0061d4e0 = piVar1, piVar1 != (int *)0x0) {
    close(*piVar1);
    close(piVar1[1]);
    DAT_0061d4e0 = *(int **)(piVar1 + 4);
    operator_delete(piVar1);
    piVar1 = DAT_0061d4e0;
  }
  if (DAT_0061d4f0 != (void *)0x0) {
    operator_delete__(DAT_0061d4f0);
  }
  DAT_0061d4f0 = (void *)0x0;
  if (DAT_0061d4f8 != (void *)0x0) {
    operator_delete__(DAT_0061d4f8);
  }
  DAT_0061d4f8 = (void *)0x0;
  FUN_0040bee0();
  FUN_00403400();
  thunk_FUN_00403850();
  if (*(int *)PTR___log_level_0061bd30 < 2) {
    return;
  }
  FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Control Center: deinitialized");
  return;
}

