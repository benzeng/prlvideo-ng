
/* Function Stack Size: 0x10 bytes */

void PDSharedFoldersBarButtonItem::dealloc(ID param_1,SEL param_2)

{
  long *plVar1;
  objc_super local_28;
  
  if (((*(long *)(param_1 + _sfMenu) != 0) && (*(int *)(*(long *)(param_1 + _sfMenu) + 4) != 0)) &&
     (plVar1 = *(long **)(_sfMenu + 8 + param_1), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_28.super_class = (class_t *)PTR_PDSharedFoldersBarButtonItem_10226ab88;
  local_28.receiver = param_1;
  _objc_msgSendSuper2(&local_28,PTR_s_dealloc_102268c60);
  return;
}

