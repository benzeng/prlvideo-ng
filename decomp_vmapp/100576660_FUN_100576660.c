
undefined8 FUN_100576660(long param_1)

{
  long lVar1;
  char cVar2;
  
  cVar2 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x50))();
  if (cVar2 == '\0') {
    FUN_1008e3970("Compact","vdisk",0,"[%p] Compact terminated by AsyncDev state changing",param_1);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x12d8);
    if ((lVar1 != 0) &&
       ((9 < *(uint *)(lVar1 + 0x30) || ((0x301U >> (*(uint *)(lVar1 + 0x30) & 0x1f) & 1) == 0)))) {
      *(undefined4 *)(lVar1 + 0x60) = 1;
    }
  }
  return 0;
}

