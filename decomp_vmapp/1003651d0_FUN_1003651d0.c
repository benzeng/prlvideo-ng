
bool FUN_1003651d0(long param_1,long param_2,long *param_3)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int local_2c;
  
  *param_3 = 0;
  bVar4 = true;
  if (*(undefined8 **)(param_2 + 0x2760) != (undefined8 *)0x0) {
    piVar1 = (int *)**(undefined8 **)(param_2 + 0x2760);
    if (*piVar1 == 0x12) {
      FUN_10035d3e0(param_1,piVar1,1);
      local_2c = piVar1[1];
    }
    else {
      if (((*(char *)(param_2 + 0x2768) == '\0') && (lVar2 = *(long *)(piVar1 + 4), lVar2 != 0)) &&
         (lVar2 == *(long *)(piVar1 + 6))) {
        *param_3 = lVar2;
        return true;
      }
      cVar3 = FUN_10035c570(*(undefined8 *)(param_1 + 8),piVar1,&local_2c,0);
      if (cVar3 == '\0') {
        if (*piVar1 == 5) {
          return true;
        }
        (*DAT_1011c5d40)();
        FUN_10035c570(*(undefined8 *)(param_1 + 8),piVar1,&local_2c,0);
      }
    }
    bVar4 = (*(char *)(param_2 + 0x2768) != '\0') == (local_2c == 0);
  }
  return bVar4;
}

