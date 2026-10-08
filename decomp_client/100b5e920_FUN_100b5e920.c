
long * FUN_100b5e920(long param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  long *local_48;
  uint local_3c;
  sigaction local_38;
  
  local_3c = param_2;
  QMutex::lock();
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
    uVar7 = *(uint *)((long)puVar1 + 0x24) ^ param_2;
    for (puVar5 = *(undefined8 **)(puVar1[1] + ((ulong)uVar7 % (ulong)*(uint *)(puVar1 + 4)) * 8);
        puVar5 != puVar1; puVar5 = (undefined8 *)*puVar5) {
      if ((*(uint *)(puVar5 + 1) == uVar7) && (*(uint *)((long)puVar5 + 0xc) == param_2)) {
        if ((puVar5 != puVar1) &&
           (plVar6 = (long *)puVar5[2], local_48 = plVar6, plVar6 != (long *)0x0))
        goto LAB_100b5ea35;
        break;
      }
    }
  }
  local_48 = (long *)0x0;
  plVar6 = operator_new(0x18);
  FUN_100b5eb50(plVar6,param_2,param_1);
  local_48 = plVar6;
  cVar3 = FUN_100b5e700(plVar6[2]);
  if (cVar3 != '\0') {
    lVar2 = plVar6[2];
    local_38.__sigaction_u.__sa_handler = FUN_100b5e4e0;
    local_38.sa_mask = 0;
    local_38.sa_flags = 2;
    iVar4 = _sigaction(*(int *)(lVar2 + 0x18),&local_38,(sigaction *)(lVar2 + 0x38));
    if (iVar4 < 1) {
      *(undefined1 *)(lVar2 + 0x30) = 1;
      FUN_100b5ee10(param_1 + 0x10,&local_3c,&local_48);
      goto LAB_100b5ea35;
    }
  }
  (**(code **)(*plVar6 + 0x20))(plVar6);
  local_48 = (long *)0x0;
  plVar6 = (long *)0x0;
LAB_100b5ea35:
  QMutex::unlock();
  return plVar6;
}

