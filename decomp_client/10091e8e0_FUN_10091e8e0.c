
undefined4 FUN_10091e8e0(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*param_1 == 0) {
    lVar1 = (*(code *)_xmlMalloc)(0xa0);
    *param_1 = lVar1;
    if (*param_1 == 0) {
      FUN_10091b97e(0,"allocating new item list",0);
      return 0xffffffff;
    }
    *(undefined4 *)((long)param_1 + 0xc) = 0x14;
  }
  else if (*(int *)((long)param_1 + 0xc) <= (int)param_1[1]) {
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) * 2;
    lVar1 = (*(code *)_xmlRealloc)(*param_1,(long)*(int *)((long)param_1 + 0xc) * 8);
    *param_1 = lVar1;
    if (*param_1 == 0) {
      FUN_10091b97e(0,"growing item list",0);
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      return 0xffffffff;
    }
  }
  lVar1 = param_1[1];
  *(undefined8 *)(*param_1 + (long)(int)lVar1 * 8) = param_2;
  *(int *)(param_1 + 1) = (int)lVar1 + 1;
  return 0;
}

