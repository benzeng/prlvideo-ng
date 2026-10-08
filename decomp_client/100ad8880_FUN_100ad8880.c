
void FUN_100ad8880(long param_1,undefined4 *param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  
  cVar3 = FUN_100acadf0(*(undefined8 *)(param_1 + 0x10),1);
  if (cVar3 != '\0') {
    plVar2 = (long *)FUN_100adb590(param_1 + 0x100,*param_2);
    lVar1 = *plVar2;
    if (lVar1 != 0) {
      if ((*(int *)(lVar1 + 0x44) != 0) || (*(int *)(lVar1 + 0x40) != 0)) {
        FUN_100ad61c0(param_1,(int *)(lVar1 + 0x40),lVar1);
        *(undefined8 *)(lVar1 + 0x40) = 0;
      }
      FUN_100ad88f0(param_1,lVar1);
      return;
    }
  }
  return;
}

