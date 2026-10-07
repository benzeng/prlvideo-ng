
void * FUN_100546830(long param_1,undefined4 param_2,char param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if (param_3 == '\0') {
    uVar2 = 0;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0xc);
    }
  }
  pvVar1 = operator_new(0x48);
  FUN_100546f60(pvVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),param_2,
                param_1,uVar2);
  return pvVar1;
}

