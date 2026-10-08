
undefined8 FUN_1007aaa40(long param_1,QString *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)&param_2[5].field0_0x0 == *(int *)(param_1 + 0x70)) {
    cVar1 = operator==(param_2 + 2,(QString *)(param_1 + 0x58));
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      cVar1 = operator==(param_2 + 1,(QString *)(param_1 + 0x50));
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        cVar1 = operator==(param_2,(QString *)(param_1 + 0x48));
        if (cVar1 == '\0') {
          uVar2 = 0;
        }
        else {
          uVar2 = operator==(param_2 + 4,(QString *)(param_1 + 0x68));
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

