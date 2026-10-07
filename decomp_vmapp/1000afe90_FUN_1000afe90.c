
undefined8 FUN_1000afe90(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8) == 1) {
    lVar1 = *(long *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8);
    iVar2 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"start",0xffffffff
                       ,1);
    if (iVar2 == 0) {
      FUN_100109710(param_1);
      return 0;
    }
    lVar1 = *(long *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
    iVar2 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"stop",0xffffffff,
                       1);
    if (iVar2 == 0) {
      FUN_100109740(param_1);
      return 0;
    }
  }
  FUN_1008e3970("","vm",0,"Invalid or missing argument for \"teststat\", expected start or stop");
  return 0x80000009;
}

