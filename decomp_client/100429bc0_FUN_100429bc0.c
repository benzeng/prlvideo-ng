
void FUN_100429bc0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (*(int *)(lVar1 + 0x14c) == 4) {
    return;
  }
  if (*(int *)(lVar1 + 0x14c) == 3) {
    if (((*(long *)(lVar1 + 0x108) != 0) && (*(int *)(*(long *)(lVar1 + 0x108) + 4) != 0)) &&
       (plVar2 = *(long **)(lVar1 + 0x110), plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x78))(plVar2,0x80000275);
    }
    if (((*(long *)(lVar1 + 0x118) != 0) && (*(int *)(*(long *)(lVar1 + 0x118) + 4) != 0)) &&
       (*(long *)(lVar1 + 0x120) != 0)) {
      CSdkRequest::cancel();
    }
    FUN_10042d570(lVar1,4);
    return;
  }
  QDialog::reject();
  return;
}

