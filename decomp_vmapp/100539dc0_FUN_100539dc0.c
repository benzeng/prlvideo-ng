
undefined8 FUN_100539dc0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = FUN_1002a6010(param_3);
  pvVar2 = (void *)0x0;
  if (**(long **)(*param_2 + 0x10) != 0) {
    pvVar2 = *(void **)(**(long **)(*param_2 + 0x10) + 0x10);
  }
  _memcpy((void *)(lVar1 + 0xc),pvVar2,0x808);
  *(undefined1 *)(*(long *)(*param_2 + 0x10) + 0x18) = 1;
  return 0;
}

