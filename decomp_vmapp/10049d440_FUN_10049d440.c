
void FUN_10049d440(long param_1)

{
  string *this;
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = *(void **)(param_1 + 8);
  pvVar1 = *(void **)(param_1 + 0x10);
  pvVar3 = pvVar1;
  if (pvVar1 != pvVar2) {
    do {
      this = *(string **)((long)pvVar1 + -8);
      if (this != (string *)0x0) {
        FUN_10000c730(this + 0x18);
        std::string::~string(this);
        operator_delete(this);
        pvVar2 = *(void **)(param_1 + 8);
        pvVar1 = *(void **)(param_1 + 0x10);
      }
      pvVar1 = (void *)((long)pvVar1 + -8);
      *(void **)(param_1 + 0x10) = pvVar1;
      pvVar3 = pvVar2;
    } while (pvVar1 != pvVar2);
  }
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}

