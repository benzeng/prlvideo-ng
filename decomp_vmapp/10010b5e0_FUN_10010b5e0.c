
void FUN_10010b5e0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10110d188;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    std::string::~string((string *)((long)pvVar1 + 0x40));
    operator_delete(pvVar1);
    return;
  }
  return;
}

