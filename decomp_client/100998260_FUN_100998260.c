
void FUN_100998260(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = QObject::sender();
  if ((lVar2 != 0) &&
     (lVar2 = ___dynamic_cast(lVar2,PTR_typeinfo_1021e1720,&PTR_vtable_102234380,0), lVar2 != 0)) {
    iVar1 = FUN_1009987b0(lVar2);
    if ((iVar1 != 1) && (iVar1 = FUN_1009987b0(lVar2), iVar1 != 2)) {
      return;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  return;
}

