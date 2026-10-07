
undefined8 FUN_1008db680(int param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  if (param_1 == 2) {
    piVar2 = (int *)*param_2;
    iVar1 = *piVar2;
    if ((iVar1 == 3) || (iVar1 == 2)) {
      lVar3 = *(long *)(piVar2 + 2);
      if (*(void **)(lVar3 + 0x20) != (void *)0x0) {
        _OPENSSL_cleanse(*(void **)(lVar3 + 0x20),*(size_t *)(lVar3 + 0x28));
        FUN_10081e1a0(*(undefined8 *)(lVar3 + 0x20));
      }
    }
    else if (iVar1 == 0) {
      lVar3 = *(long *)(piVar2 + 2);
      if (*(long *)(lVar3 + 0x28) != 0) {
        FUN_1008924e0();
      }
      if (*(long *)(lVar3 + 0x20) != 0) {
        FUN_1008a17f0();
      }
    }
  }
  return 1;
}

