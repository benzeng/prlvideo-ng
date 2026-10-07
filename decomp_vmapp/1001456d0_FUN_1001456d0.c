
undefined4 FUN_1001456d0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x1d0) == 0) {
    lVar2 = (*(code *)_xmlMalloc)(0x1b8);
    if (lVar2 != 0) {
      *(long *)(param_1 + 0x1d0) = lVar2;
      lVar2 = (*(code *)_xmlMalloc)(0x2c);
      if (lVar2 != 0) {
        *(long *)(param_1 + 0x210) = lVar2;
        *(undefined4 *)(param_1 + 0x1d8) = 0x37;
        goto LAB_10014585d;
      }
    }
  }
  else {
    if (param_2 + 5 <= *(int *)(param_1 + 0x1d8)) {
LAB_10014585d:
      return *(undefined4 *)(param_1 + 0x1d8);
    }
    iVar1 = param_2 * 2 + 10;
    lVar2 = (*(code *)_xmlRealloc)(*(undefined8 *)(param_1 + 0x1d0),(long)iVar1 * 8);
    if (lVar2 != 0) {
      *(long *)(param_1 + 0x1d0) = lVar2;
      lVar2 = (*(code *)_xmlRealloc)(*(undefined8 *)(param_1 + 0x210),(long)(iVar1 / 5) * 4);
      if (lVar2 != 0) {
        *(long *)(param_1 + 0x210) = lVar2;
        *(int *)(param_1 + 0x1d8) = iVar1;
        goto LAB_10014585d;
      }
    }
  }
  _xmlErrMemory(param_1,0);
  return 0xffffffff;
}

