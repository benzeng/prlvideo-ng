
void FUN_10090e501(long param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_24;
  
  puVar2 = *(undefined4 **)(*(long *)(param_1 + 0x50) + (long)param_2 * 8);
  if ((((puVar2 != (undefined4 *)0x0) &&
       (piVar3 = *(int **)(*(long *)(param_1 + 0x50) + (long)param_3 * 8), piVar3 != (int *)0x0)) &&
      (piVar3[1] != 1)) && (piVar3[1] != 2)) {
    piVar3[1] = 2;
    if (*piVar3 == 2) {
      *puVar2 = 2;
    }
    for (local_24 = 0; local_24 < piVar3[5]; local_24 = local_24 + 1) {
      if (-1 < *(int *)(*(long *)(piVar3 + 6) + (long)local_24 * 0x18 + 8)) {
        if (*(long *)(*(long *)(piVar3 + 6) + (long)local_24 * 0x18) == 0) {
          if (*(int *)(*(long *)(piVar3 + 6) + (long)local_24 * 0x18 + 8) != param_2) {
            if (*(int *)(*(long *)(piVar3 + 6) + (long)local_24 * 0x18 + 0x10) < 0) {
              if (*(int *)(*(long *)(piVar3 + 6) + (long)local_24 * 0x18 + 0xc) < 0) {
                FUN_10090e501(param_1,param_2,
                              *(undefined4 *)(*(long *)(piVar3 + 6) + (long)local_24 * 0x18 + 8),
                              param_4);
              }
              else {
                FUN_10090e501(param_1,param_2,
                              *(undefined4 *)(*(long *)(piVar3 + 6) + (long)local_24 * 0x18 + 8),
                              *(undefined4 *)(*(long *)(piVar3 + 6) + (long)local_24 * 0x18 + 0xc));
              }
            }
            else {
              FUN_10090da53(param_1,puVar2,0,
                            *(undefined8 *)
                             (*(long *)(param_1 + 0x50) +
                             (long)*(int *)(*(long *)(piVar3 + 6) + (long)local_24 * 0x18 + 8) * 8),
                            0xffffffff,
                            *(undefined4 *)(*(long *)(piVar3 + 6) + (long)local_24 * 0x18 + 0x10),0)
              ;
            }
          }
        }
        else {
          iVar1 = *(int *)(*(long *)(piVar3 + 6) + (long)local_24 * 0x18 + 8);
          if (*(int *)(*(long *)(piVar3 + 6) + (long)local_24 * 0x18 + 0xc) < 0) {
            FUN_10090da53(param_1,puVar2,
                          *(undefined8 *)(*(long *)(piVar3 + 6) + (long)local_24 * 0x18),
                          *(undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar1 * 8),param_4,
                          0xffffffff,1);
          }
          else {
            FUN_10090da53(param_1,puVar2,
                          *(undefined8 *)(*(long *)(piVar3 + 6) + (long)local_24 * 0x18),
                          *(undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar1 * 8),
                          *(undefined4 *)(*(long *)(piVar3 + 6) + (long)local_24 * 0x18 + 0xc),
                          0xffffffff,1);
          }
        }
      }
    }
    piVar3[1] = 0;
  }
  return;
}

