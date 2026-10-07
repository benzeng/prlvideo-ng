
undefined8 FUN_10088fc10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  _OPENSSL_cleanse((void *)(lVar1 + 0x100),0x188);
  if (*(long *)(lVar1 + 0x288) != param_1 + 0x28) {
    FUN_10081e1a0();
  }
  return 1;
}

