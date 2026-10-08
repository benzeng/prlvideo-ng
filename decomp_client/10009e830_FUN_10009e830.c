
void FUN_10009e830(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long *local_40;
  undefined8 local_38;
  
  if (*(int *)(*(long *)(param_1[2] + 0x90) + 4) != 0) {
    local_38 = 0x9c;
    pvVar6 = operator_new__(0x9c,(nothrow_t *)PTR_nothrow_1021e1620);
    local_40 = operator_new(0x18);
    *(undefined4 *)(local_40 + 1) = 1;
    local_40[2] = (long)pvVar6;
    *local_40 = (long)&PTR_FUN_102282990;
    if (pvVar6 != (void *)0x0) {
      puVar2 = (undefined4 *)local_40[2];
      *puVar2 = 1;
      puVar2[1] = 3;
      puVar2[2] = 6;
      puVar2[3] = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      _memcpy(puVar2 + 6,param_2,0x84);
      local_58 = puVar2[9];
      uStack_54 = puVar2[10];
      uStack_50 = puVar2[0xb];
      uStack_4c = puVar2[0xc];
      uVar7 = FUN_100319cd0(*param_1);
      cVar5 = FUN_100345d70(uVar7,&local_58,2);
      if (cVar5 != '\0') {
        puVar2[9] = local_58;
        puVar2[10] = uStack_54;
        puVar2[0xb] = uStack_50;
        puVar2[0xc] = uStack_4c;
        cVar5 = FUN_10009fca0(param_1,&local_40,&local_38);
        uVar7 = local_38;
        if (cVar5 != '\0') {
          lVar3 = param_1[2];
          lVar4 = *(long *)(lVar3 + 0x90);
          if ((*(long *)(lVar4 + 0x10) != 0) &&
             (lVar8 = *(long *)(lVar4 + 0x20), lVar8 != lVar4 + 8)) {
            do {
              (**(code **)(*(long *)(lVar3 + 0x28) + 0x10))
                        ((long *)(lVar3 + 0x28),*(undefined8 *)(lVar8 + 0x18),&local_40,uVar7);
              lVar8 = QMapNodeBase::nextNode();
            } while (lVar8 != *(long *)(lVar3 + 0x90) + 8);
          }
        }
      }
    }
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  return;
}

