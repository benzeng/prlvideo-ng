
void FUN_100272670(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + lVar3 * 8);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x168) != '\0')) {
      iVar2 = (**(code **)(**(long **)(lVar1 + 0x170) + 0x60))(*(long **)(lVar1 + 0x170),param_2);
      if (iVar2 != 0) {
        FUN_1008e3970("","LocalDevices",0,"net_adapter %d:SetEtraceBuffer failed: error %x",
                      *(undefined4 *)(lVar1 + 0x150),iVar2);
      }
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  return;
}

