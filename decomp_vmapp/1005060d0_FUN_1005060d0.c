
int FUN_1005060d0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *local_38;
  uint local_30;
  
  QByteArray::resize((int)param_2);
  puVar3 = (uint *)*param_2;
  if ((1 < *puVar3) || (*(long *)(puVar3 + 4) != 0x18)) {
    QByteArray::reallocData(param_2,puVar3[1] + 1,puVar3[2] >> 0x1f);
    puVar3 = (uint *)*param_2;
  }
  local_38 = (undefined4 *)(*(long *)(puVar3 + 4) + 0x4c + (long)puVar3);
  local_30 = puVar3[1] - 0x4c;
  *(undefined4 *)(param_1 + 4) = 0x4c;
  *(undefined8 *)((long)param_1 + 0x2c) = DAT_100b45d88;
  *(undefined8 *)((long)param_1 + 0x24) = DAT_100b45d80;
  *(byte *)((long)param_1 + 0x34) = *(byte *)((long)param_1 + 0x34) | 0x80;
  if (((*param_1 != 0) && (plVar1 = *(long **)(*param_1 + 0x10), plVar1 != (long *)0x0)) &&
     (iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,&local_38), iVar2 != 0)) {
    return iVar2;
  }
  if (((param_1[1] != 0) && (plVar1 = *(long **)(param_1[1] + 0x10), plVar1 != (long *)0x0)) &&
     (iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,&local_38), iVar2 != 0)) {
    return iVar2;
  }
  if (((param_1[2] != 0) && (plVar1 = *(long **)(param_1[2] + 0x10), plVar1 != (long *)0x0)) &&
     (iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,&local_38), iVar2 != 0)) {
    return iVar2;
  }
  if (((param_1[3] != 0) && (plVar1 = *(long **)(param_1[3] + 0x10), plVar1 != (long *)0x0)) &&
     (iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,&local_38), iVar2 != 0)) {
    return iVar2;
  }
  if (3 < local_30) {
    *local_38 = 0;
    local_30 = local_30 - 4;
    local_38 = local_38 + 1;
    puVar3 = (uint *)*param_2;
    if ((1 < *puVar3) || (*(long *)(puVar3 + 4) != 0x18)) {
      QByteArray::reallocData(param_2,puVar3[1] + 1,puVar3[2] >> 0x1f);
      puVar3 = (uint *)*param_2;
    }
    _memcpy((void *)((long)puVar3 + *(long *)(puVar3 + 4)),param_1 + 4,0x4c);
    QByteArray::resize((int)param_2);
  }
  return 0;
}

