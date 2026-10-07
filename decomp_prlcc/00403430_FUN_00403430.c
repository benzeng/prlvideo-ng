
void FUN_00403430(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int local_28;
  int local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  
  if (DAT_0061d0c0 == '\0') {
    DAT_0061d0c0 = '\x01';
    FUN_00403650(g_PrlXLibAPI,1);
    puVar1 = PTR_prl_xfunctions_0061bd60;
    lVar4 = (**(code **)PTR_prl_xfunctions_0061bd60)(0);
    piVar5 = (int *)PTR___log_level_0061bd30;
    if (lVar4 != 0) {
      cVar2 = FUN_004033d0(0);
      if (((cVar2 == '\0') ||
          (iVar3 = (**(code **)(puVar1 + 0x1b0))(lVar4,local_1c,local_20), iVar3 == 0)) ||
         (iVar3 = (**(code **)(puVar1 + 0x1b8))(lVar4,&local_24,&local_28), iVar3 == 0)) {
        piVar5 = (int *)PTR___log_level_0061bd30;
        if (1 < *(int *)PTR___log_level_0061bd30) {
          FUN_0040fffa(&DAT_0041913e,"prlcc",2,"RandR extension missing\n");
        }
      }
      else if ((1 < local_24) ||
              ((piVar5 = (int *)PTR___log_level_0061bd30, local_24 == 1 && (1 < local_28)))) {
        (**(code **)(puVar1 + 0x18))(lVar4);
        if (*(int *)PTR___log_level_0061bd30 < 2) {
          return;
        }
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,"RandR 1.2 initialized\n");
        return;
      }
      (**(code **)(puVar1 + 0x18))(lVar4);
    }
    if (1 < *piVar5) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"RandR 1.2 support missing\n");
    }
    FUN_004035b0(g_PrlXLibAPI,1);
  }
  return;
}

