
void FUN_10070b170(void *param_1)

{
  int *piVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = *(void **)((long)param_1 + 0x10);
  (**(code **)((long)pvVar2 + 8))();
  *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)pvVar2 + 0x10);
  _free(pvVar2);
  lVar3 = *(long *)((long)param_1 + 0x10);
  *(undefined4 *)(lVar3 + 8) = *(undefined4 *)((long)param_1 + 8);
  _free(param_1);
  piVar1 = (int *)(lVar3 + 0x38);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(code **)(lVar3 + 0x48) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010070b1bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x48))(lVar3);
    return;
  }
  return;
}

