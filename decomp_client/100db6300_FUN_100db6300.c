
void FUN_100db6300(void *param_1)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = *(long *)((long)param_1 + 0x10);
  uVar3 = *(uint *)((long)param_1 + 8) & 0xfc;
  if ((uVar3 != 0) &&
     (*(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | uVar3, *(int *)(lVar2 + 0x28) == 0)) {
    *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)((long)param_1 + 0x28);
  }
  piVar1 = (int *)(lVar2 + 0x38);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(code **)(lVar2 + 0x48) != (code *)0x0)) {
    (**(code **)(lVar2 + 0x48))();
  }
  _free(param_1);
  return;
}

