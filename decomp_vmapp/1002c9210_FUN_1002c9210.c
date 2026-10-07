
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1002c9210(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  bool bVar8;
  QArrayData *local_40;
  undefined1 local_32;
  
  iVar3 = FUN_1002c7bc0();
  if (iVar3 != -1) {
    return iVar3;
  }
  lVar7 = *param_2;
  iVar5 = -1;
  iVar3 = QString::compare_helper
                    (*(long *)(lVar7 + 0x10) + lVar7,*(undefined4 *)(lVar7 + 4),"",0xffffffff,1);
  if (iVar3 != 0) {
    return -1;
  }
  if ((int)param_1[0xb] != 1) {
    return -1;
  }
  pvVar6 = operator_new(0x860,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (pvVar6 == (void *)0x0) {
    if (DAT_1011c568c < 0) {
      return -1;
    }
    FUN_1008e3970("","USB",0,"[UHC] Can\'t allocate hub.");
    return -1;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@HUB@|203a|fffe|full|--|PW3.0",0x24);
  FUN_1002d5800(pvVar6,&local_40,param_1,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1002c92e9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002c92e9:
  iVar3 = FUN_1002d5810(pvVar6);
  if (iVar3 < 0) {
    FUN_1002d6060(pvVar6);
    operator_delete(pvVar6);
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[UHC] Can\'t init hub: error 0x%x",iVar3);
    }
  }
  else {
    param_1[0x29d] = *(long *)((long)pvVar6 + 0x10);
    param_1[0xd] = (long)pvVar6;
    *(int *)(param_1 + 0xb) = _DAT_101116b4c + 2;
    (**(code **)(*param_1 + 0x50))(param_1,1,1);
    plVar2 = (long *)param_1[10];
    lVar7 = FUN_100257d80(plVar2);
    uVar4 = *(uint *)(lVar7 + 0x2030);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar7 + 0x2030);
      bVar8 = uVar4 == uVar1;
      if (bVar8) {
        *(uint *)(lVar7 + 0x2030) = uVar4 | 8;
        uVar1 = uVar4;
      }
      uVar4 = uVar1;
      UNLOCK();
    } while (!bVar8);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    iVar5 = FUN_1002c7bc0(param_1,param_2);
  }
  return iVar5;
}

