
void FUN_100c834e0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((((param_1 != (long *)0x0) && (lVar1 = *param_1, lVar1 != 0)) &&
      (lVar2 = *(long *)(param_2 + 0x20), lVar2 != 0)) && ((*(byte *)(lVar2 + 8) & 2) != 0)) {
    lVar2 = (long)*(int *)(lVar2 + 0x20);
    if ((long *)(lVar1 + lVar2) != (long *)0x0) {
      if (*(long *)(lVar1 + lVar2) != 0) {
        FUN_100bf3910();
      }
      *(undefined8 *)(lVar1 + lVar2) = 0;
      *(undefined8 *)(lVar1 + 8 + lVar2) = 0;
      *(undefined4 *)(lVar1 + 0x10 + lVar2) = 1;
    }
  }
  return;
}

