
undefined8 FUN_100ad60a0(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined8 local_38;
  
  local_38 = param_2;
  plVar3 = (long *)FUN_100adb590(param_1 + 0x100,*(undefined4 *)(param_3 + 0xc));
  lVar2 = *plVar3;
  if (lVar2 != 0) {
    iVar4 = (int)((ulong)param_2 >> 0x20);
    if ((iVar4 == *(int *)(lVar2 + 0x3c)) && ((int)param_2 == *(int *)(lVar2 + 0x38))) {
      cVar1 = *(char *)(param_1 + 0xad0);
      iVar4 = *(int *)(param_1 + 0x918);
      FUN_100adc090(param_1 + 0x100,*(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 0x10));
      if (((iVar4 != 0) && (*(int *)(param_1 + 0x918) == 0)) &&
         (FUN_100ad1c30(param_1), *(char *)(param_1 + 0xad0) != '\0')) {
        *(undefined1 *)(param_1 + 0xad0) = 0;
        FUN_100ade440(param_1 + 0xa38,0);
      }
      if (cVar1 == '\0') {
        return 1;
      }
      *(undefined1 *)(lVar2 + 0x58) = 1;
      *(undefined4 *)(lVar2 + 0x5c) = *(undefined4 *)(param_3 + 8);
      *(undefined4 *)(lVar2 + 0x60) = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(lVar2 + 100) = *(undefined4 *)(param_3 + 0x1c);
    }
    else {
      FUN_100ad61c0(param_1,&local_38,lVar2);
      if ((iVar4 == *(int *)(lVar2 + 0x44)) && ((int)param_2 == *(int *)(lVar2 + 0x40))) {
        *(undefined8 *)(lVar2 + 0x40) = 0;
      }
    }
  }
  return 0;
}

