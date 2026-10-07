
void FUN_00403d80(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = &DAT_0061d520;
  for (lVar1 = DAT_0061d520; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x28)) {
    puVar2 = (undefined8 *)(lVar1 + 0x28);
  }
  *puVar2 = param_1;
  return;
}

