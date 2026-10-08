
void FUN_1006b53a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    FUN_100060bb0();
    lVar1 = FUN_100060320(param_2);
    if ((lVar1 != 0) && (lVar1 != *(long *)PTR_self_1021e1388)) {
      uVar2 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_1006b4810(param_1,uVar2,lVar1);
      FUN_100070780(param_1,lVar1);
      return;
    }
  }
  return;
}

