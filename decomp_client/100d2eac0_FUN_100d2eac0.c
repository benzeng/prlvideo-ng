
void FUN_100d2eac0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10230f718;
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    if (*(long **)((long)pvVar1 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar1 + 0x10) + 8))();
    }
    operator_delete(pvVar1);
  }
  QDomNodeList::~QDomNodeList((QDomNodeList *)(param_1 + 1));
  return;
}

