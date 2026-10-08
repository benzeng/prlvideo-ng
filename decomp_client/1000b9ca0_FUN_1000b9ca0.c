
undefined8 FUN_1000b9ca0(long *param_1,QString *param_2,QString *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 8) != *(int *)(lVar2 + 0xc)) {
    plVar4 = (long *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8);
    do {
      cVar3 = operator==((QString *)*plVar4,param_2);
      if (cVar3 != '\0') {
        QString::operator=(param_3,(QString *)(*plVar4 + 8));
        uVar1 = *(undefined4 *)(*plVar4 + 0x10);
        *param_4 = uVar1;
        return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != (long *)(*param_1 + 0x10 + (long)*(int *)(*param_1 + 0xc) * 8));
  }
  return 0;
}

