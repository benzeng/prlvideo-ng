
bool FUN_1008bb4e0(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((param_1 != (long *)0x0) && (*(long *)(*param_1 + 0x20) != 0)) {
    if (*(long *)(*(long *)(*param_1 + 0x20) + 8) != param_2) {
      lVar1 = FUN_1008afc30(param_2);
      param_2 = 0;
      if (lVar1 != 0) {
        FUN_1008afd70(*(undefined8 *)(*(long *)(*param_1 + 0x20) + 8));
        *(long *)(*(long *)(*param_1 + 0x20) + 8) = lVar1;
        param_2 = lVar1;
      }
    }
    bVar2 = param_2 != 0;
  }
  return bVar2;
}

