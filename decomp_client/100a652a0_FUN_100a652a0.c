
void FUN_100a652a0(long param_1,long *param_2,char param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  size_t sVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 local_68 [64];
  long *local_28;
  
  local_28 = param_2;
  FUN_100aafe50(local_68,param_1 + 8);
  if (param_3 == '\0') {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    puVar6 = puVar2;
    if (puVar2 == puVar3) {
LAB_100a65320:
      if (puVar6 != puVar3) {
        pvVar1 = (void *)(((long)puVar6 - (long)puVar2 & 0xfffffffffffffff8U) + 8 + (long)puVar2);
        sVar5 = (long)puVar3 - (long)pvVar1;
        _memmove(puVar6,pvVar1,sVar5);
        lVar7 = (sVar5 & 0xfffffffffffffff8) + (long)puVar6;
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != lVar7) {
          *(ulong *)(param_1 + 0x20) = (~((lVar4 + -8) - lVar7) & 0xfffffffffffffff8U) + lVar4;
        }
        (**(code **)(*local_28 + 8))();
      }
    }
    else {
      do {
        if ((long *)*puVar6 == param_2) goto LAB_100a65320;
        puVar6 = puVar6 + 1;
      } while (puVar3 != puVar6);
    }
  }
  else {
    (**(code **)*param_2)(param_2);
    if (*(undefined8 **)(param_1 + 0x20) == *(undefined8 **)(param_1 + 0x28)) {
      FUN_100a65880(param_1 + 0x18,&local_28);
    }
    else {
      **(undefined8 **)(param_1 + 0x20) = param_2;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 8;
    }
  }
  FUN_100aafde0(local_68);
  return;
}

