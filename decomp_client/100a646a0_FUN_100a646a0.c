
void FUN_100a646a0(long param_1)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  void *pvVar5;
  int iVar6;
  ulong uVar7;
  long *local_40;
  uint local_34;
  
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),param_1);
  if (*(char *)(param_1 + 0x28) != '\0') {
    do {
      if (*(int *)(*(long *)(param_1 + 0x20) + 0x58) != 4) break;
      bVar3 = FUN_100a64890(param_1,&local_34,4,1);
      uVar7 = (ulong)local_34;
      if ((bVar3 & uVar7 != 0) == 1) {
        pvVar5 = operator_new__(uVar7);
        local_40 = operator_new(0x18);
        *(undefined4 *)(local_40 + 1) = 1;
        local_40[2] = (long)pvVar5;
        *local_40 = (long)&PTR_FUN_102282990;
        cVar4 = FUN_100a64890(param_1,pvVar5,uVar7,1);
        iVar6 = 0;
        if (cVar4 != '\0') {
          iVar6 = 3;
          (**(code **)(**(long **)(param_1 + 0x20) + 0x28))
                    (*(long **)(param_1 + 0x20),param_1,&local_40,local_34);
        }
        if (local_40 != (long *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          lVar2 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)(*local_40 + 0x10))();
          }
        }
        if (iVar6 == 0) goto LAB_100a6478c;
      }
      else {
LAB_100a6478c:
        FUN_100a64b70(param_1);
      }
    } while (*(char *)(param_1 + 0x28) != '\0');
  }
  (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(*(long **)(param_1 + 0x20),param_1);
  FUN_100a652a0(*(undefined8 *)(param_1 + 0x20),param_1,0);
  return;
}

